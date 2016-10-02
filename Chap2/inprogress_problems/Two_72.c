/* Copy integer into buffer if space is available */
/* WARNING: The following code is buggy */

void copy_int(int val, void *buf, int maxbytes){

  if (maxbytes - sizeof(val) >= 0)
    
    /* first argument is the destination, second is the source, third is the number of bytes */
    memcpy(buf, (void *) &val, sizeof(val));

}

/* 

A. "sizeof" returns a size_t type, which is really just an unsigned integer. In this case both are
   converted to unsigned before the computation is done, and thus the final result will necessarily
   be greater than 0

B. Below is a rewriting of the code to coax proper functioning 

*/


void copy_int_fix(int val, void *buf, int maxbytes){


  /* FIX: the fix is right here. just cast the result to a signed integer. Order doesn't matter by 
     properties of 2's complement arithmetic. */
  if ((int) (maxbytes - sizeof(val)) >= 0)   
    /* first argument is the destination, second is the source, third is the number of bytes */
    memcpy(buf, (void *) &val, sizeof(val));

}
