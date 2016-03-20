#include <stdio.h>

/* x -> %rdi 
   y -> %rsi
   z -> %rdx

Assembly code w/ annotations:


decode2:
   subq    %rdx, %rsi             # %rsi = y - z
   imulq   %rsi, %rdi             # %rdi = (y-z) * x 
   movq    %rsi, %rax             # %rax = y - z
   salq    $63, %rax              # %rax = least sig bit becomes most sig,
                                  # everything else is 0
   sarq    $63, %rax              # move it back to least sig bit
   xorq    %rdi, %rax             # this has the effect of only changing the last bit 
   ret

*/


long decode2(long x, long y, long z){

  long temp1 = (y-z) * x;
  
  long temp2 = (y - z) << 63;

  temp2 >>= 63;

  return temp1 ^ temp2;

}




