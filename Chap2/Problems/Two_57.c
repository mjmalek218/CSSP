#include <stdio.h> //this is used for input/output to functions

typedef unsigned char *byte_pointer;

void show_short(short int x);
void show_long(long int x);

int main(){

  show_short(55);
  show_long(55);

}

/* This function accepts a pointer and prints out its contents */
void show_bytes(byte_pointer start, size_t num_bytes){

  int i;

  for (i = 0; i < num_bytes; i++){

    /* We print them out as integers rather than chars so we can see the 
       hex values themselves. This command says to print a hexadecimal
       integer with two digit precision */
    printf("%.2x ", start[i]);


    /* So the process goes:

       1. Take any data-type (int, float, etc...)
       2. Cast its memory address to specifically for a char
       3. The compiler interprets the address as pointing to a char now,
          and so if printed out as an array it will print it out one "char"
	  at a time
       
       4. Now print out these chars one at a time, but print them as *integers*
          so that rather than getting a char or undefined (not sure here...
	  check if every integer from 0 to 255 maps to a char) it prints it
	  as a someting meaningful

     */

  }

  printf("\n");

}

/* takes a short integer and computes result */
void show_short(short int x){

  /* it is specifically the address of x which needs to be cast...otherwise
     we attempt to cast a short integer into an *address* to a char */ 
  show_bytes((byte_pointer) &x, sizeof(short));

}  

/* takes a long integer and computes result */
void show_long(long int x){

  /* it is specifically the address of x which needs to be cast...otherwise
     we attempt to cast a long integer into an *address* to a char */ 
  show_bytes((byte_pointer) &x, sizeof(long));

}  


// after compiling it is clear machine is little endian

// 30 * 16 + 7 =  55
