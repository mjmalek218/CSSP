/* Declaration of data type where 4 bytes are packed into an unsigned. */
typedef unsigned packed_t;

/* FAILED ATTEMPT:

// Extract byte from word. Return as signed integer.
int xbyte(packed_t word, int bytenum)
{

    return (word >> (bytenum << 3)) & 0xFF;

}


 */


/* A. It is immediately obvious that the 0th case is incorrect, since this will just
      return "word" unadulterated.

      In general, the problem is that higher numbers are not eliminated prior to 
      execution of the 'bitwise and' operation. 

   B. (correct below)

*/


/* Extract byte from word. Return as signed integer. Can only use left and right shifts,
   and one subtraction. */
int xbyte(packed_t word, int bytenum)
{

  // first eliminate the top by left shifting 
  int temp = word << ((3 - bytenum) << 3);

  // next eliminate the bottom by right shifting 
  return (temp >> 24); 
  

}
