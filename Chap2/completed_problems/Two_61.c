#include <stdbool.h> 
#include <stdio.h>

/* Rules for these exercises:

   Assumptions: 
       1. Integers are represented in 2's complement form
       2. Right shifts perform arithmetically
       3. Data type 'int' is w bits long. To compute w, just right-shift the
          sizeof(int)

   Forbidden:
       1. Conditionals, loops, switch statements, function calls, and macro
          invocations.
       2. Division, modulus, and multiplication
       3. Relative comparison operators 

   Allowed Operations: 
       1. All bit-level and logic operations.
       2. Left and right shifts, but only with shift amounts between 0 and
          w-1
       3. Addition and subtraction
       4. Equality and inequality tests (sometimes)
       5. Integer constants INT_MIN and INT_MAX
       6. Casting between data types int and unsigned, either explicitly
          or implicitly. 

      Note: as you may recall, the bitwise operators are |,~,^,&,<<,>>

*/

// CANT USE EQUALITY AND INEQUALITY HERE

/* PROBLEM A. 

   Evaluates to 1 when any bit of x (an int) is equal to 1

 */
bool check_for_1(int x){

  // key here is to just skip straight to a logical operation
  return (x && 1);
}



/* Problem B.

   Evaluates to 1 when any bit of x equals 0

*/
bool not_check_for_1(int x){

  // just return the opposite of previous functions
  return !check_for_1(x);

}


/* Problem C.

   Evaluates to 1 when any bit in the least significant byte
   of x equals 1.

*/
bool check_least_sig(int x){

  // retrieve least significant byte
  int least_sig = (x && 0xFF);

  // now just return the result of the first function
  return check_for_1(least_sig);
}

/* Problem D.

   Evaluates to 1 when any bit in the most significant byte
   of x equals 0.

*/
bool check_most_sig(int x){

  // retrieve most significant byte
  int most_sig = (x && (0xFF << ((sizeof(int)-1) <<3)) );

  // now just return the result of the first function
  return not_check_for_1(most_sig);
}


/* a test suite for the above functions */
int main(){


  printf("%d \n", check_for_1(1024));
  printf("%d \n", not_check_for_1(1024));
  printf("%d \n", check_most_sig(1024));
  printf("%d \n", check_least_sig(1024));


  return 0;

}
