/* 
x \in %rdi, n \in %esi

loop:
  movl    %esi, %ecx       # lower four bytes of %ecx = n, rest = 0  
  movl    $1, %edx         # lower four bytes of %rdx = 1, rest = 0
  movl    $0, %eax         # %rax = all 0's 
  jmp     .L2              # move to the L2 loop

.L3:
  movq    %rdi, %r8        # x in %r8
  andq    %rdx, %r8        # upper 4 bytes of %r8 = 0, lower four are the same 
  orq     %r8, %rax        #          
  salq    %cl, %rdx        # shift 

.L2:
  testq   %rdx, %rdx       # OBVIOUSLY TYPO...LOOK INTO THIS
  jne     .L3
  rep; ret

*/

long loop(long x, long n)
{
  long result = 0;
  long mask;
  
  //FINISH UPDATING CONDITION 

  for (mask = x & 1; mask ; mask = result){

    result |= mask;
    
  }
    
  return result;


}


/*

A. x \in %rdi, n \in %esi, result \in %rax, 

We know result must be in %rax because that is the value that is returned. 
%r8 must be mask given how it is updated during the loops.

B. result is initially 0 (thanks to the movl $0, %eax instruction)

mask is initially (x & 1), where 1 is only in the first bit of the register.

C. The test condition is if result and 

D. 1 is shifted by the lower byte of n at the end of every iteration. 

E. Result is or'd with mask

F. See above.


 */
