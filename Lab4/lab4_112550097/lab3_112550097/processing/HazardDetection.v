module HazardDetection(
    input wire [4:0] id_R1,      // Source register 1 in ID stage
    input wire [4:0] id_R2,      // Source register 2 in ID stage
    input wire [4:0] ex_Rd,       // Destination register in EX stage
    input wire [4:0] mem_Rd,       // Destination register in MEM stage
    input wire mem_MemRead,
    output reg RePC,             // re-fetch the flushed instruction
    output reg Flush_HD    // flush IF/ID reg & ID/EX reg
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
        // if lw in EX stage and the destination register is used in ID stage
        if (mem_MemRead && (ex_Rd != 0) && (ex_Rd == id_R1 || ex_Rd == id_R2)) begin
            Flush_HD = 1'b1; // Flush IF/ID and ID/EX registers
            RePC = 1'b1; // Re-fetch the instruction in IF stage
        end else begin
            Flush_HD = 1'b0; // No flush needed
            RePC = 1'b0; // No re-fetch needed
        end
    end

endmodule