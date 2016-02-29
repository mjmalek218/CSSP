/* Return 1 when any odd bit of x equals 1; 0 otherwise. 
   Assume w=32 */
bool any_odd_one(unsigned x){

  /* First create an appropriate mask: the odd bits. 32 bit = 4 bytes. so AAAA */
  return 1 && (x & 0xAAAA);
 
}
