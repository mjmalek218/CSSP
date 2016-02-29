#include <stdio.h>

/* In this program, we want to output the least significant byte of x and the remaining
   bytes of y into one number. We can do this via the masks 0xFF and its complement. */


long combine_two(long x, long y){

  return (x & 0xFF) + (y & ~0xFF);

  // ALSO BE CAREFUL ON THE PARENTHESES. CLEARLY BITWISE OPERATORS HAVE LOW PRIORITY IF THAT
  // HAPPENED

}

/* Since the function ordering is sequential, important to realize that 
   the compiler WILL NOT UPDATE CORRECTLY if you dont have the functions
   in order or at least the declarations in order. */

int main(){

  printf("%x \n", combine_two(0x89ABCDEF, 0x76543210));

  return 0;

}
