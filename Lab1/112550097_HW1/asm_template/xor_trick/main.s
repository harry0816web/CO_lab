.section .text
.global asm_entry

asm_entry:
    li t0, 0          # t0 = ret (初始值設為 0)
    li t1, 0          # t1 = i (索引變數)

loop:
    beq t1, a1, end   # if (i == size) 跳出迴圈

    lw t2, 0(a0)      # 讀取 arr[i]
    xor t0, t0, t2    # t0 ^= arr[i]

    addi a0, a0, 4    # 移動到下一個元素 (arr[i+1])
    addi t1, t1, 1    # i++

    j loop            # 跳回迴圈

end:
    mv a0, t0         # 返回結果 (將 ret 存入 a0)
    ret            
