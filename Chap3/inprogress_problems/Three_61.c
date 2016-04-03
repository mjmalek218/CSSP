#include <stdio.h>

/* Here is the original code */
long cread(long *xp){
  return (xp ? *xp : 0);
}


/* now we create a function that can be assembled via a conditional data transfer. */
