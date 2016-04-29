/*
 * Return 1 when x can be represented as an n-bit,
 * 2's complement number; 0 otherwise.
 * Assume 1 <= n <= w
 */
int fit_bits(int x, int n){

  /* since the machine represents it as a 2's complement anyway, the only way it couldn't 
     be is if x is too big: to we can logical right shift after casting to unsigned. */
  return !( ((unsigned) x) >> n);

}
