/* Return 1 when x contains an odd number of 1's; 0 otherswise. Assume w = 32. */
int odd_ones(unsigned x){

  /* Constantly fold the function in on itself. By x'oring the bits constantly we 
     essentially substract an even number of 1's and maintain the parity. We 
     can't do more than half the remaining relevant bits at once since XOR is a binary 
     operation. */

  x ^= x >> 16;
  x ^= x >> 8;
  x ^= x >> 4;
  x ^= x >> 2;
  x ^= x >> 1;

  return (int) ((bool) x);

}
