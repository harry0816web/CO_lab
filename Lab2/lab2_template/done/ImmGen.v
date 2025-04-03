module ImmGen (
    /* verilator lint_off UNUSEDSIGNAL */
    input [31:0] inst,
    output reg signed [31:0] imm
);
    // ImmGen generate imm value base opcode
    always @(*) begin
        reg [6:0] opcode;
        case (opcode):
            7'b0010011: begin // I-type arith
                imm = {{20{inst[31]}}, inst[31:20]};
            end
            7'b0000011: begin // I-type load
                imm = {{20{inst[31]}}, inst[31:20]};
            end
            7'b0100011: begin // S-type
                imm = {{20{inst[31]}}, inst[31:25], inst[11:7]};
            end
            7'b1100011: begin // B-type
                imm = {{19{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
            end
            7'b1101111: begin // J-type
                imm = {{11{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
            end
            7'b1100111: begin // I-type jalr
                imm = {{20{inst[31]}}, inst[31:20]};
            end
            default: begin // R-type and other instructions
                imm = 32'b0; // undefined
            end
        endcase
    end
endmodule

