.section .text
.global asm_dp

asm_dp:
    beq a2, zero, done
    li t0, 1              # t0 = i

loop1:
    bgt t0, a1, done       # end for t0 > a1
    li t1, 0              # t1 = j
loop2:
    li t6, 6
    beq t1, t6, next_i     # end for j == 6

    slli t2, t1, 3          # (j*2)*4
    add t2, a0, t2
    lw t2, 0(t2)          # arr[j*2]

    # compare part
    blt t0, t2, skip       # skip for i - arr[j*2] < 0

    # dp part
    sub t2, t0, t2         # t2 = i - arr[j*2]
    bge t2, a1, skip       # skip for (i-arr[j*2]) >= t (超過範圍)

    slli t3, t0, 2          # i*4
    add t3, a2, t3         # &dp[i]
    lw t4, 0(t3)          # t4 = dp[i]

    slli t5, t2, 2          # (i- arr[j*2])*4
    add t5, a2, t5
    lw t6, 0(t5)          # t6 = dp[i-arr[j*2]]

    slli t5, t1, 3          # (j*2)*4
    add t5, a0, t5         
    lw  t5, 4(t5)          # offset 4 from t5(&arr[j*2])
    add t6, t6, t5         

    ble t4, t6, update     # dp part > dp[i] => update

skip:
    addi t1, t1, 1          # j++
    j loop2

update:
    sw t6, 0(t3)          # dp[i] = t6
    j skip

next_i:
    addi t0, t0, 1          # i++
    j loop1

done:
    ret
