
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>


#define SS 100

void push(int value);
int pop();

// ------ .rodata
char stack[SS]       = {0};
uint8_t p            = {0};

int main(int argc, char* argv) {
//===========================================      * Initialize registers
push(5);
int eax;
int ebx;
int ecx;
int edx;
goto draw_hash;                                     // draw hash 3 x 3 
// ==========================================
_start:                                             // entry point
char buff[4];
//snprintf(buff, 4, "%d", eax);
buff[0] = 0x30 + eax;
buff[1] = 0xa;
write(1, buff, 4);                                  // 8 bits * 5 bytes = 32 bits
return ebx;                                         // carry 0
//;;=========================================
draw_hash: 
eax = pop();                                          // 4 bytes
ebx ^= ebx;                                         // xor operation
goto _start;                                        // jmp _start
} // end main
// ==========================================
void push(int value) {
stack[p] = value;
p++;                                                // inc pointer
} // end push
// ==========================================
int pop() {
return stack[--p];
} // end pop
