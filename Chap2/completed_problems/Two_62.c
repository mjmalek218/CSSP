#include <stdbool.h> 
#include <stdio.h> 
#include <limits.h>

/* This function will yield 1 when run on a machine that uses arithmetic right shifts for data
   type int and 0 otherwise */
bool int_shifts_are_arithmetic(){

  // first consider INT_MIN in 2's complement (just 1 followed by w-1 0's on the bit lvl)
  int tester = INT_MIN;

  // shift it to the right by one bit
  tester >>= 1;

  /* then one simple way is to just retrieve the most significant byte. should be 0100 if logical
     and 1100 if arithmetic. Return an error if it is not one of these. I *guess* we can test for 
     equality here since we aren't required to follow the previously mentioned rules */
  
  // first we need an appropriate mask 
  unsigned int mask = (0xC0 << ((sizeof(int)-1)<<3)) ;
 
  return (mask == tester);

}


// this is a simple test: since this machine almost certainly arithmetic 
//  right shifts, should return 1. obviously a bit rudimentary since i'm not going to 
// go to multiple machines and do this 
int main(){

  printf("%u \n", int_shifts_are_arithmetic());

}
