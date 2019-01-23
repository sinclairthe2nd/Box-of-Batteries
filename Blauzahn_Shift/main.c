#include <avr/io.h>
#include <util/delay.h>

main(void)
{

        /* setup */
        DDRB = 0b11111111;              // set all pins as OUTPUT 
        PORTB = 0b00000000;             // set all pins to LOW
        int SegLit = 0;
        int SegIn =2;
        /* loop */
        while (1) {          
SegLit = SegIn;
PORTB |= (1 << PB3); // PB3 goes high  

 for(int a = 0; a < 8; a++ ){
      SegLit--;

       if (SegLit < 0 ){
      PORTB &= ~(1 << PB3); // PB3 goes low              
                      }

      PORTB |= (1 << PB4); // PB4 goes high
      _delay_ms(200);
      PORTB &= ~(1 << PB4); // PB4 goes low
      _delay_ms(200);                      }
_delay_ms(500);
        }
}
