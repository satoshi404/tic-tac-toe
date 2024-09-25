#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv) {
//===========================================      * Initialize registers 
int eax;
int ebx;
int ebc;
int ebc;
goto draw_hash;                                     // draw hash 3 x 3 
// ==========================================
_start:                                             // entry point
loop:

goto loop;
char buff[4];
snprintf(buff, 4, "%d\n", eax);
write(1, buff, 4);                                  // 8 bits * 4 bytes = 32 bits
return ebx;                                         // carry 0
//;;=========================================
draw_hash: 
eax = 0x80;                                         // 4 bytes
ebx ^= ebx;                                         // xor operation
goto _start;                                        // jmp _start
} // end program
