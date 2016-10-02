#include <stdio.h>
#include <stddef.h>

/* Here is the original code.

   Interesting point in the compiled version (assembly code): gcc compiles this
   function even though it could never conceivably be called. 
 */
long cread(long *xp){
  return (xp ? *xp : 0);
}


/* now we create a function that can be assembled via a conditional data transfer. */
long cread_alt(long *xp){

  long val = 0;

  if (xp != NULL){

    val = *xp;

  }

  return val; 

}

/* In testing how GCC compiles the following code...with the lowest level of compiler
   optimizations it seems as though it still uses control transfer as opposed to
   conditional moves...despite the fact cread_alt is as literal translation (that I can
   currently conceive of) of what an assembled version employing a conditional move
   would look like. More experimentation is needed.  */
long main(){

  long val = 5;

  return cread_alt(&val);

}
