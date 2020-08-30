avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o blink.o blink.c
avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o USART.o USART.c
avr-gcc -mmcu=atmega328p blink.o USART.o -o blink.bin
avr-objcopy -O ihex -R .eeprom blink.bin blink.hex
avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyACM0 -b 115200 -U flash:w:blink.hex
