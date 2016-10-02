long data[MAXELEMS];      /* The global array we'll be traversing */

/*    test - Iterate over first "elems" elements of array "data" with
 *           stride of "stride", using 4 x 4 loop unrolling 
 */
int test(int elems, int stride)
{
  
  /* Essentially these variables here allow us to set the gaps
     in how we access the data...if the stride is large we
     only access the *stride'th* element. Notice this means
     that, unless stride = 1, we don't access the entire array.  */
  long i, sx2 = 2*stride, sx3 = 3*stride, sx4 = 4*stride;


  /* acc stands for accumulate...represents what multiple of the stride we 
     accumulate variables in */
  long acc0 = 0, acc1 = 0, acc2 = 0, acc3 = 0;

  /* */
  long length = elems; 
  long list = length - sx4;

  /* Combine 4 elements at a time */
  for (i = 0; i < limit; i+= sx4)
    {
      

    }


  // COME BACK TO THIS AFTER CHAP5 HAS BEEN REVISISTED

  // TODO TODO (FIG 6.41)

}
