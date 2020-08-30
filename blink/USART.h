#define BAUD 9600
void initUSART(void);
void transmitByte(unsigned char data);
unsigned char receiveByte(void);
void printString(const unsigned char myString[]);