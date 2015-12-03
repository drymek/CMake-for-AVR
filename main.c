#include <avr/io.h>
#include <util/delay.h>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
int main(void) {
    DDRB = 0xFF;

    while (1) {
        PORTB = 0xFF;
        _delay_ms(1000);
        PORTB = 0x00;
        _delay_ms(1000);
    }
}
#pragma clang diagnostic pop
