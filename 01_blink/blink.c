#include <avr/io.h>
#include <util/delay.h> 

int main(void) { 
    DDRD |= 0b10000000;
    
    while (1) { 
        PORTD &= PD7;
        _delay_ms(3000);  
        PORTD |= (~PD7);
        _delay_ms(3000);  
    }
    return 0;
}