#include <stdio.h>

/*
 * Do rotating left shift. Assume 0 <= n < w
 */
unsigned rotate_left(unsigned x, int n){

  /* if the rotation to the left goes overboard we can just rotate to the right 
     by the complement*/
  return (x << n) | (x >> ((sizeof(int)<<3) - n));

}

int main(){

  unsigned test = 1 << ((sizeof(int) << 3) -1);

  // print unsigned with 1 in max location, 0 everywhere else
  printf("%u \n", test);

  // this should just yield one
  printf("%u \n", rotate_left(test, 1));

  return 0;

}
