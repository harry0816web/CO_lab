module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq, BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(*) begin
        case (opcode)
            7'b0110011: begin // R-type
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 2'b10;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 1;
                PCSel = 2'b00;
            end
            7'b0000011: begin // I-type load
                memRead = 1;
                memtoReg = 2'b01;
                ALUOp = 2'b00;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;
            end
            7'b0010011: begin // I-type arith 
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 2'b10;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;
            end
            7'b0100011: begin // S-type
                memRead = 0;
                memtoReg = 2'bxx;
                ALUOp = 2'b00;
                memWrite = 1;
                ALUSrc = 1;
                regWrite = 0;
                PCSel = 2'b00;
            end
            7'b1100011: begin // B-type
                memRead = 0;
                memtoReg = 2'bxx;
                ALUOp = 2'b01;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 0;
                PCSel = (BrEq) ? 2'b01 : (BrLT) ? 2'b10 : 2'b00; // PCSel based on branch conditions
            end
            7'b1101111: begin // J-type
                // store cur PC + 4 in rd
                // then jump to the target address
                memRead = 0;
                memtoReg = 2'b10;
                ALUOp = 2'bxx;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 1;
                PCSel = 2'b01; // J-type instruction
            end
            7'b1100111: begin // I-type jalr
                memRead = 0;
                memtoReg = 2'b10; // from ALU
                ALUOp = 2'b00;
                memWrite = 0;
                ALUSrc = 1; // immediate
                regWrite = 1;
                PCSel = 2'b10;
            end
            default: begin // R-type and other instructions
            end
        endcase
    end

endmodule

