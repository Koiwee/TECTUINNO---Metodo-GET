# TECTUINNO---Metodo-GET
En este programa empleo una pequeña biblioteca que hice para poder realizar el método GET con el GPRS del SIM800L.

El proceso consta de dos pasos generales:

El primero es iniciar el GPRS:
Se configura tipo de conexión: GPRS.
Se configura el Access Point Name, lo cual se hace de acuerdo a la telefónica de la que sea tu chip.
Y por ultimo se activa el contexto GPRS.

El segundo paso es realizar el metodo GET:
Primero iniciando una sesión http, después configurando la URL a la que se hará la petición, también se configura el contexto a usar (el que activamos antes), para así poder hacer la solicitud GET, una vez hecho esto se lee el contenido de la respuesta y por ultimo se termina la sesión HTTP.
