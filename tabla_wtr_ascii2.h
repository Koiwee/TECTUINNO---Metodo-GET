/*
 * tabla_wtr_ascii.h
 *
 *  Created on: 30/06/2019
 *           Author: WALTER TORRES ROBLEDO
 */

#ifndef TABLA_WTR_ASCII2_H_
#define TABLA_WTR_ASCII2_H_
const unsigned char letras[]={// LETRAS DE 10X16
                              0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, //espacio
                              0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,

                              0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, // !
                              0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x0E, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,  // "
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x80, 0xD0, 0xBC, 0xD0, 0xBC, 0x10, 0x00, 0x00, // #
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x8C, 0x12, 0x23, 0xC4, 0x00, 0x00, 0x00, // $
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x01,0x00, 0x00, 0x00, 0x00,

                              0x00, 0x18, 0x24, 0xA4, 0x58, 0xA0, 0x58, 0x44, 0x80, 0x00, // %
                              0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00,

                              0x00, 0x00, 0x80, 0x58, 0x24, 0x64, 0x98, 0x80, 0x40, 0x00, // &
                              0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x01, 0x02, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, // '
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0xFC, 0x03, 0x00, 0x00, 0x00, 0x00, // (
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x03, 0xFC, 0x00, 0x00, 0x00, 0x00, // )
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xA0, 0x40, 0xF0, 0x40, 0xA0, 0x00, 0x00, // *
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x40, 0x40, 0xF0, 0x40, 0x40, 0x00, 0x00, // +
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ,
                              0x00, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x00, 0x00, 0x00, // -
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .
                              0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0xE0, 0x1C, 0x03, 0x00, 0x00, 0x00, // /
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xF8, 0x04, 0x04, 0x04, 0xF8, 0x00, 0x00, //0
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x08, 0x08, 0xFC, 0x00, 0x00, 0x00, 0x00, //1
                              0x00, 0x00, 0x00, 0x02, 0x02, 0x03, 0x02, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x08, 0x04, 0x84, 0x44, 0x38, 0x00, 0x00, //2
                              0x00, 0x00, 0x00, 0x02, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x08, 0x24, 0x24, 0x24, 0xD8, 0x00, 0x00, //3
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xC0, 0xB0, 0x8C, 0xFC, 0x80, 0x00, 0x00, //4
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x3C, 0x24, 0x24, 0x24, 0xC4, 0x00, 0x00, //5
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xF0, 0x28, 0x24, 0x24, 0xC4, 0x00, 0x00, //6
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x04, 0x04, 0xC4, 0x34, 0x0C, 0x00, 0x00, //7
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xD8, 0x24, 0x24, 0x24, 0xD8, 0x00, 0x00, //8
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x38, 0x44, 0x44, 0x44, 0xF8, 0x00, 0x00, //9
                              0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, // :
                              0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, // ;
                              0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x40, 0x40, 0xA0, 0xA0, 0x10, 0x00, 0x00, //<
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x00, 0x00, // =
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0xA0, 0xA0, 0x40, 0x40, 0x00, 0x00, // >
                              0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x08, 0xC4, 0x44, 0x38, 0x00, 0x00, 0x00, // ?
                              0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0xF0, 0x08, 0xE4, 0x94, 0x94, 0xF4, 0x84, 0x78, 0x00, //@
                              0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xC0, 0xB0, 0x8C, 0xB0, 0xC0, 0x00, 0x00, //A
                              0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x24, 0x24, 0x38, 0xC0, 0x00, 0x00, //B
                              0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xF8, 0x0C, 0x04, 0x04, 0x04, 0x00, 0x00, //C
                              0x00, 0x00, 0x00, 0x01, 0x03, 0x02, 0x02, 0x02, 0x01, 0x00,

                              0x00, 0x00, 0xFC, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x00, 0x00, //D
                              0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, //E
                              0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x24, 0x24, 0x24, 0x00, 0x00, 0x00, //F
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0xF0, 0x08, 0x04, 0x44, 0x44, 0xC8, 0x00, 0x00, //G
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0xFC, 0x20, 0x20, 0x20, 0x20, 0xFC, 0x00, 0x00, //H
                              0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, //I
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, //J
                              0x00, 0x00, 0x00, 0x00, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x20, 0x50, 0x88, 0x04, 0x00, 0x00, //K
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //L
                              0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0xFC, 0x0C, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0x0C, 0xFC, //M
                              0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03,

                              0x00, 0x00, 0xFC, 0x0C, 0x30, 0xC0, 0x00, 0xFC, 0x00, 0x00, //N
                              0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0xF0, 0x08, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x00, //O
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x44, 0x44, 0x44, 0x38, 0x00, 0x00, //P
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0xF0, 0x08, 0x04, 0x04, 0x04, 0x08, 0xF0, 0x00, //Q
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x04, 0x00,

                              0x00, 0x00, 0x00, 0xFC, 0x44, 0x44, 0xC4, 0x38, 0x00, 0x00, //R
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x18, 0x24, 0x44, 0x88, 0x00, 0x00, 0x00, //S
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x04, 0x04, 0xFC, 0x04, 0x04, 0x00, 0x00, //T
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, //U
                              0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x0C, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0x0C, 0x00, //V
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x08, 0x78, 0x80, 0xE0, 0x38, 0x78, 0x80, 0xC0, 0x38, //W
                              0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x03, 0x03, 0x00,

                              0x00, 0x00, 0x04, 0x08, 0x90, 0x60, 0x90, 0x08, 0x04, 0x00, //X
                              0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00,

                              0x00, 0x00, 0x00, 0x0C, 0x30, 0xC0, 0x30, 0x0C, 0x00, 0x00, //Y
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x04, 0x84, 0x44, 0x24, 0x14, 0x0C, 0x00, 0x00, //Z
                              0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x01, 0xFF, 0x00, 0x00, 0x00, 0x00, // [
                              0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x02, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0x00, // diagonal
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00,  // ]
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0x0C, 0x02, 0x0C, 0x10, 0x00, 0x00, // ^
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // _
                              0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, // '
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,


                              0x00, 0x00, 0x00, 0x90, 0x50, 0x50, 0x50, 0xE0, 0x00, 0x00, //a
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFE, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00, //b
                              0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, //c
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xFE, 0x00, 0x00, //d
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xE0, 0x50, 0x50, 0x60, 0x00, 0x00, 0x00, //e
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0xFC, 0x12, 0x12, 0x00, 0x00, 0x00, //f
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xC0, 0x20, 0x20, 0xE0, 0x20, 0x00, 0x00, //g
                              0x00, 0x00, 0x00, 0x1A, 0x15, 0x15, 0x14, 0x08, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFE, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, //h
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0xF4, 0x00, 0x00, 0x00, 0x00, //i
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0xD0, 0x00, 0x00, 0x00, 0x00, //j
                              0x00, 0x00, 0x00, 0x00, 0x20, 0x1F, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xFE, 0x40, 0xA0, 0x10, 0x00, 0x00, 0x00, //k
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x00, 0x00, 0x00, 0x00, //l
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x10, 0x10, 0xE0, 0x00, //m
                              0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00,

                              0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x00, //n
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00, //o
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xF0, 0x10, 0x10, 0x10, 0xE0, 0x00, 0x00, //p
                              0x00, 0x00, 0x00, 0x0F, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xE0, 0x10, 0x10, 0x10, 0xF0, 0x00, 0x00, //q
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x02, 0x0F, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0xF0, 0x20, 0x10, 0x10, 0x00, 0x00, //r
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x60, 0x50, 0x90, 0x90, 0x00, 0x00, 0x00, //s
                              0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0xFC, 0x10, 0x10, 0x00, 0x00, 0x00, //t
                              0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, //u
                              0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0x00, 0x00, //v
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0xC0, 0x00, 0xC0, 0x30, //w
                              0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0x20, 0xC0, 0x20, 0x10, 0x00, 0x00, //x
                              0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x01, 0x02, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x30, 0xC0, 0x00, 0xC0, 0x30, 0x00, 0x00, //y
                              0x00, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x10, 0xD0, 0x30, 0x00, 0x00, 0x00, //z
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x02, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x10, 0xEE, 0x01, 0x00, 0x00, 0x00, 0x00, // {
                              0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // |
                              0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x00, 0x01, 0xEE, 0x10, 0x00, 0x00, 0x00, // }
                              0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,

                              0x00, 0x00, 0x00, 0x40, 0x20, 0x60, 0x40, 0x20, 0x00, 0x00, // ~
                              0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,


								};





#endif /* TABLA_WTR_ASCII2_H_ */
