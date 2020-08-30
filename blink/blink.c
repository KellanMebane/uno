#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>

#include "USART.h"

int main(void) {
    DDRB |= _BV(PORTB0) | _BV(PORTB1) | _BV(PORTB2);
    PORTB |= _BV(PORTB0) | _BV(PORTB1) | _BV(PORTB2);

    while (1) {
        PORTB = 0b00000001;
        _delay_ms(300);
        PORTB = 0b00000010;
        _delay_ms(300);
        PORTB = 0b00000100;
        _delay_ms(300);
    }

    return 0;
}
