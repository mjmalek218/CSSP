/*
 * Mask with least significant n bits set to 1
 * Examples: n = 6 --> 0x3F, n = 17 --> 0x1FFFF
 * Assume 1 <= n <= w
 */
int lower_one_mask(int n){

  /* exploit the fact that we want 2^n -1 */
  return ((1 << n) - 1);

}
