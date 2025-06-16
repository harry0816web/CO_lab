module HazardDetection(
    input wire [4:0] id_R1,      // Source register 1 in ID stage
    input wire [4:0] id_R2,      // Source register 2 in ID stage
    input wire [4:0] ex_Rd,       // Destination register in EX stage
    input wire [4:0] mem_Rd,       // Destination register in MEM stage
    input wire mem_MemRead,
    input wire [1:0] PCSel,      // Branch control signal
    input wire [1:0] Br_J_Sel,
    input wire is_jump_flag,
    input wire is_jalr_flag,
    output reg RePC,             // re-fetch the flushed instruction
    output reg [1:0] Flush_HD,    // flush IF/ID reg & ID/EX reg
    output reg stall_if
);

    // This unit checks for potential data hazards that cannot be resolved by forwarding.

    // TODO: implement your hazard detection unit here

    // Hint:
    // You can design your own inputs and outputs as needed, as long as everything functions
    // correctly in the end.
    // Refer to the textbook for scenarios where forwarding cannot resolve data hazards,
    // for example, where using a stall might be necessary.

    // Be mindful of data hazards that may occur with branch instructions.
    // Data hazards can arise when a branch instruction depends on the result of previous instructions,
    // such as when the values being compared in a branch are not yet computed.
    // In such cases, if forwarding cannot resolve the hazard, you may need to insert a stall to avoid incorrect execution.

    // !!!!!!!!!!inserting a nop when load-use data hazard happens
    // laod can't have correct value in EX stage, so we need to flush the pipeline  
    // Problem: register used in ID is the one used in EX stage to ""load word""
    // Solution: must stall for one cycle to allow the load word to complete => stall IF/ID, flush Ex 
    // or flush both IF/ID and ID/EX reg, and re-fetch the instruction in IF stage


    always @(*) begin
        stall_if = 0;
        // 如果ex stage計算出來的load word destination 是 id stage的source register
        // 並且mem_read是1 (代表 load word)
        if (mem_MemRead && (ex_Rd != 0) && (ex_Rd == id_R1 || ex_Rd == id_R2)) begin
            // stall 並且 re-fetch
            RePC = 1'b1; // Re-fetch the instruction in IF stage     
            Flush_HD = 2'b01;
            stall_if = 1;
        end
        // Check for branch hazard
        // Branch hazard occurs when PCSel is 1 (branch taken) and the branch depends on a register
        // that is being written to in the MEM stage
        else if ((PCSel == 2'b01) && Br_J_Sel == 2'b01 && (ex_Rd != 0) && (ex_Rd == id_R1 || ex_Rd == id_R2))begin
            RePC = 1'b1;
            Flush_HD = 2'b00;
            stall_if =1 ;
        end
        else if ((PCSel == 2'b01) && (Br_J_Sel == 2'b01)) begin // b type
            Flush_HD = 2'b11; // Flush IF/ID and ID/EX registers
            RePC = 1'b0; // Re-fetch the instruction in IF stage
        end
        else if ((is_jump_flag) || (is_jalr_flag)) begin // j type in ex
            Flush_HD = 2'b11; // Flush IF/ID and ID/EX
            RePC = 1'b0; // Re-fetch the instruction in IF stage
        end
        else begin
            Flush_HD = 2'b00; // No flush needed
            RePC = 1'b0; // No re-fetch needed
        end
    end

endmodule


