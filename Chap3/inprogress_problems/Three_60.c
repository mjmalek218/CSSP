/* 
x \in %rdi, n \in %esi

loop:
  movl    %esi, %ecx       # lower four bytes of %ecx = n, rest = 0  
  movl    $1, %edx         # lower four bytes of %edx = 1, rest = 0
  jmp     .L2              # 

.L3:
  movq    %rdi, %r8        #
  andq    %rdx, %r8
  orq     %r8

*/

long loop(long x, long n)
{
  long result = ;
  long mask;
  
  for (mask = ; mask ; mask = ){

    result |= ;
    
  }
    
  return result;


}
