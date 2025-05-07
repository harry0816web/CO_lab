# extern int fibo_asm(int term)

.section .text
.global fibo_asm

fibo_asm:
    # TODO: You have to implement fibonacci with assembly language
    # HINT: You might need to use "jal(jump and link)" to finish the task
    addi sp, sp, -16    # make space (change 32 to whatever space you want)
    sw ra, 12(sp)       # save ra
    sw a0, 8(sp)        # save a0
                        # 4(sp) for a0 from f(n-1)

    li t0, 1
    ble a0, t0, ret01

    # f(n-1)
    addi a0, a0, -1
    jal fibo_asm
    sw a0, 4(sp)        # save a0 from f(n-1)
    # f(n-2)
    lw a0, 8(sp)        # load a0_init
    addi a0, a0, -2
    jal fibo_asm

    # a0 (ret_value) = f(n-1) + f(n-2)
    lw t1, 4(sp)        # load a0 from f(n-1)
    add a0, a0, t1

    # release stack
    lw ra, 12(sp)       # load ra_init
    addi sp, sp, 16
    jr ra

    # write your code here

ret01:
    lw ra, 12(sp)       # load ra_init
    addi sp, sp, 16
    jr ra

fin: 
    lw s0, 4(sp)       # load s0
    lw ra, 8(sp)       # load ra
    addi sp, sp, 12     # release space
    jr ra               # return
