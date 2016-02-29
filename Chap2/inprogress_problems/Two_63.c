#include <stdio.h>

/* perform a logical rightshift via an arithmetic one. the rules given on the 
   previous page don't need to be followed necessarily */
unsigned srl(unsigned x, int k){

  // first we shift arithmetically
  unsigned xsra = (int) x >> k;

  // then return the size of an int
  char intbit = 8 * sizeof(int);

  // now we can create an appropriate mask. recall that -1 is essentially all ones
  int mask =  (1 << (intbit - k)) - 1;

  return xsra & mask;

}

/* perform an arithmetic rightshift via a logical one */
int sra(int x, int k){

  int xsrl = (unsigned) x >> k;

  /* return size of integer */
  char intbit = 8 * sizeof(int);

  /* extract the leading bit */
  char leadbit = ((unsigned) (x & (1 << (intbit-1)))) >> (intbit - 1);

  /* create the appropriate mask*/
  int mask =  ~((leadbit << (intbit - k)) - 1);

  /* the sum should be the answer */
  return xsrl + mask;

}

/* simple tests on the above */
int main(){

  unsigned int test_logical = -1;
  int test_arithmetic = -1;

  test_logical = srl(test_logical, sizeof(int) * 8);


  /* FIX FIX FIX: Boundary condition error here */
  test_arithmetic = sra(test_arithmetic, 8*sizeof(int));

  printf("logical test = %d \n", test_logical);

  printf("logical test = %d \n ", test_arithmetic);

}
