/* In this problem we are asked to reverse engineer a switch statement from disassembled machine code. */

long switch_prob(long x, long n){

  long result = x;
  switch(n){
    
    case

  }

  return result;

}



/* here is the machine code... the instruction encodings themselves are ommitted since they are
   more or less meaningless to me. the address where the instruction is located, however, is
   kept.

   note that the machine code came from the disassembler.  */


/* long switch_prob(long x, long n)

   x --> %rdi, 
   n --> %rsi

 */

/*
00000000040050090 <switch_prob>:

  400590:    sub   $0x3c, %rsi                           # %rsi = n - 60 
  400594:    cmp   $0x5, %rsi                            # effective op. : n - 65
  400598:    ja    4005c3 <switch_prob+0x33>             # conditional jump if n > 65
  40059a:    jmpq  *0x4006f8(,%rsi,8)                    # if n <= 65, go to address at n-60 table
  4005a1:    lea   0x0(,%rdi,8), %rax                    # 0x0(,%rdi,%rax)   
  4005a8:    00          
  4005a9:    retq   
 
  4005aa:    mov   %rdi, %rax                            # %rdi --> %rax 
  4005ad:    sar   $0x3, %rax                            # %rax =>> 3 (arithmetically)
  4005b1:    retq                                        # end and output %rax 
 
  4005b2:    mov   %rdi, %rax                            # %rdi --> %rax
  4005b5:    shl   $0x4, %rax                            # %rax =<< 4
  


*/
