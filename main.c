#include <msp430.h>
#include <stdio.h>
#include <string.h>
#include "varios.h"
#include "gsm.h"
#include "logo_tnm.h"
#include "SDD1306.h"

#include "gprs.h"

void arranque(void);
void limpiar_ram(void);

int i=0;
char ram[150]={0,0,0};          //Espacio de memoria para respuestas del módem (SIM800L)
char respuestaGET[150]={0,0,0}; //Espacio de memoria para la respuesta del GET
char activo[5]={0,0,0,0,0};

int main(void) {
    arranque();
    limpiar_ram();

    //Verificar que el módem esté registrado a la red
    verificacion_CREG(ram);

    //Configurar el 'Bearer' o canal de comunicación
    iniciar_GPRS(ram, "internet.itelcel.com");

    if(verificar_IP(ram)){
        int x;
        for(x=0;x<150;x++) respuestaGET[x] = 0;

        metodo_GET(ram,respuestaGET,"http://jsonplaceholder.typicode.com/todos/1");

        char *msj = strstr(respuestaGET,"completed\":") + 12;
        if( msj != NULL){
            char *fin_msj = strchr(msj,'}');
            *fin_msj = 0;
            enviar_OLED("Valor:",2,0);
            enviar_OLED(msj,4,0);
            _delay_cycles(1000000*8*2);
            limpia_oled(0);
        }
    }

    cerrar_GPRS(ram);

    verificar_IP(ram);

}


// proceso de interrupción DE tx DE la I2C  *****
#pragma vector = USCIAB0TX_VECTOR
__interrupt void USCIAB0TX_ISR(void){
    IFG2 &= ~UCB0TXIFG;  //Limpia bandera después una vez que entra a la interrupción
    __bic_SR_register_on_exit(LPM3_bits); // da la instrucción al procesador de mantenerse despierto
}

#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR(void)
{
    while (!(IFG2&UCA0TXIFG));                // USCI_A0 TX buffer ready?
    ram[i++] = UCA0RXBUF;                    // TX -> RXed character
}

void arranque(void){
    WDTCTL = WDTPW | WDTHOLD;	// amarrar al perro
	config_osc();
    ini_SDD1306();
    config_uart();

 	comando_oled(0XC8);
    imagen(logotnm);
    _delay_cycles(4000000*8);
    limpia_oled(0);
    __bis_SR_register(GIE);       // Entra al modo ahorro LPM0(se duerme el uC)

}

void limpiar_ram(void){
    int x;
    for( x=0 ; x<150 ; x++ ){
        ram[x]=0;
    }
    i=0;
}

