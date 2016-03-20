#include <stdint.h>
#include <stdio.h>

/* A. Shifting by more than or equal to the bit width of the type in question is undefined behavior. So if an int is 16 bits,
      neither of the shift operations present in the code below are guaranteed to work properly.

      For both examples below you could probably just use the sizeof operator. I don't understand why not...shifting is a bad idea
      since overshifting is undefined behavior

  

*/


/* B and C solution rolled into one. NOT allowed to use the sizeof operator. Needs to return  1 if int is 32 bits, and 0 otherwise. */
int bad_int_size_is_32(){

  printf("%d \n", sizeof(int64_t));

  /* First we set a long check of 8 bytes for both below and above 32 bits */
  int64_t ref_up = 1L << 32;  
  int64_t ref_down = 1 << 31;


  int set_msb = 1 << 31;
  int set_beyond_msb = 1 << 32;

  /* check upper-lower bounds all at once. */
  return  (ref_down == set_msb) & (ref_up != set_beyond_msb);


}


/* use the main function to test the functions. */
void main(){

  
  printf("%d \n", bad_int_size_is_32()); 

}

