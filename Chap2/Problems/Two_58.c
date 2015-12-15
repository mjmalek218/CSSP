#include <stdio.h>
#include <stdint.h>

/* PROGRAM SPECIFICATIONS:

   Input: Just the machine itself

   Output: 1 if the machine is "little_endian" and 0 otherwise 


   APPROACH: 
   
   Since this needs to work on every possible machine *regardless* of
   word size, we choose to use uint_32 as our base as this is defined 
   a data type of 4 bytes regardless of the machine. 
   

*/

typedef unsigned char *byte_pointer;

/* Function is simple so we conduct all operations in main */
int main(){

  /* can just employ this on 1. */
  int64_t test = 1;
  
  byte_pointer arr_bytes = (byte_pointer) &test;

  printf("%.2x", (int) arr_bytes[0]);

}
