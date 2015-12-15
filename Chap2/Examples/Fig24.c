#include <stdio.h>

typedef unsgined char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){

  // size_t is the preferred type when dealing with the size of data
  // structures 

  int i; 

  /* So basically what is going on here...is that whatever the
     original data type was, we are recasting to be a pointer to an array
     of bytes. this*/
  for (i = 0; i < len; i++)
    printf(" %.2x", start[i]);
  
  printf("\n");

}

void show_int(int x){
  

  // so we case the pointer of x to be a pointer to a series of 
  // bytes, even though it's really a pointer to an int. so we're
  // feeding in a pointer to x into show bytes, casting it as a type
  // so that its a pointer to a byte 
  show_bytes((byte_pointer) &x, sizeof(int));

}
