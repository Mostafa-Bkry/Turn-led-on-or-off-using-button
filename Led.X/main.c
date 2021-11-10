/*
 * File:   main.c
 * Author: acer
 *
 * Created on November 10, 2021, 4:20 PM
 */


#include <xc.h>
#include "config.h"
#define _XTAL_FREQ 4000000

void main(void) {
    
    TRISB0 = 1;
    TRISB1 = 0;
    TRISB2 = 0;
    TRISB3 = 0;
    RB1 = 0;
    RB2 = 0;
    RB3 = 0;
    
    while(1)
    {
        if(RB0 == 1)
        {
            RB1 = 1;
            __delay_ms(400);
            RB2 = 1;
            __delay_ms(400);
            RB3 = 1;
            __delay_ms(400);
            RB3 = 0;
            __delay_ms(400);
            RB2 = 0;
            __delay_ms(400);
            RB1 = 0;
        }
    }
    
    return;
}
