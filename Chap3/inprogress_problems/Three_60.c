/* 
x \in %rdi, n \in %esi

loop:
  movl    %esi, %ecx       # lower four bytes of %ecx = n, rest = 0  
  movl    $1, %edx         # lower four bytes of %rdx = 1, rest = 0
  movl    $0, %eax         # %rax = all 0's 
  jmp     .L2              # move to the L2 loop

.L3:
  movq    %rdi, %r8        # x in %r8
  andq    %rdx, %r8        # upper 4 bytes of %rd8 = 0, lower four are the same 
  orq     %r8, %rax        #          
  salq    %cl, %rdx        # 

.L2:
  testq   %rdx, %rdx       # OBVIOUSLY TYPO...LOOK INTO THIS
  jne     .L3
  rep; ret

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


/*

A. 

B. 

C. 

D.

E.

F.


 */
