/* 

x \in %rdx, y \in %rdy?

store_prod:
    movq      %rdx, %rax      # moves whatever is in %rdx into %rax
    cqto                      # sign extend whatever is in %rax into %rdx to form an oct word
    movq      %rsi, %rcx      # move whatever is in %rsi into %rcx
    sarq      $63, %rcx       # arithmetic right shift rcx, so all 1's if neg or all 0's if +
    imulq     %rax, %rcx      # rcx = rax * -1 or rcx = 0
    imulq     %rsi, %rdx      # rdx = rsi * rdx
    addq      %rdx, %rcx      # 
    mulq      

*/
