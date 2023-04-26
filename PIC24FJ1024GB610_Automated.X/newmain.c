/*
 * File:   newmain.c
 * Author: I71645
 *
 * Created on October 7, 2022, 1:10 PM
 */




#include <xc.h>
#pragma config ICS = PGD2               // ICD Communication Channel Select bits (Communicate on PGEC2 and PGED2)
volatile uint8_t m =10;
uint8_t add(volatile uint8_t n, volatile uint8_t o, volatile uint8_t p ){
   return n+o+p;
}
void main() {
   volatile uint8_t a = 0x05;
   TMR1 = a;
   m=TMR1;
   volatile uint8_t c = 0x1F;
   TMR2 = c;
   volatile uint8_t b =0x08;
   TMR3 = b;
   volatile uint8_t t = add(a,b,c);
   TMR4= t;
   return;
}
