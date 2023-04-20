/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on October 7, 2022, 1:10 PM
 */




#include <xc.h>
#pragma config ICS = PGD2               // ICD Communication Channel Select bits (Communicate on PGEC2 and PGED2)
uint8_t m =10;
uint8_t add(uint8_t n, uint8_t o, uint8_t p ){
   return n+o+p;
}
void main() {
   uint8_t a = 0x05;
   LATA = a;
   uint8_t c = 0x1F;
   TRISA = c;
   uint8_t b =0x08;
   LATB = b;
   uint8_t t = add(a,b,c);
   return;
}
