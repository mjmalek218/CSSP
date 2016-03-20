#include <stdio.h>

/* 
 *  Generate mask indicating leftmost 1 in x. Assume x = 32.
 *  For example, 0xFF00 -> 0x8000, 
*/
int leftmost_one(unsigned x){

  /* First through a series of or operations we create a number
     which has as its bit representation all 1's at and past
     the original most significant bit and 0's otherwise. */
  
  x |= (x >> 1);   // repeating this the 1's accumulate. so wherever 
  x |= (x >> 2);   // the most significant 1 is, all numbers lower
  x |= (x >> 4);   // will be covered
  x |= (x >> 8);
  x |= (x >> 16);

  return (x & ~(x >> 1));

}

/* extremely simple check */
int main(){

  int check = 15;

  check = leftmost_one(check);

  printf("This should return 8: %d \n", check);

}
