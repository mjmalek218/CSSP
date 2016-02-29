#include <stdio.h>

/* The following program will replace a byte according to a given input and given input 
   byte. We order the bytes in a w-bit word from 0 (least significant) to w/8 - 1 
   (most significant). */


/* since we only need one byte for replacement, we can just let b be an unsigned char */
unsigned replace_byte(unsigned x, int i, unsigned char b){

  /* Note that however many hexadecimal places the byte is in, this is essentially multiplying
     by 2^n. So if it is in the place To take advantage of this we can use bit masks. */

  return ((~(0xFF << (i*8) )) & x) + (b << (i*8));

}


int main(){

  printf("%x", replace_byte(0x12345678, 2, 0xAB));

  return 0; 

}
