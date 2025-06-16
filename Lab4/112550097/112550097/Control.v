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
    output reg [1:0] PCSel,
    output reg PCorR1,
    output reg [1:0] Br_J_Sel
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(*) begin
        case (opcode)
            7'b0110011: begin // r type
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 2'b10;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 1;
                PCSel = 2'b00;
                PCorR1 = 1'bx;
                Br_J_Sel = 2'b00;
            end
            7'b0000011: begin // i type load
                memRead = 1;
                memtoReg = 2'b01;
                ALUOp = 2'b00;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;
                PCorR1 = 1'bx;
                Br_J_Sel = 2'b00;
            end
            7'b0010011: begin // i type arith 
                memRead = 0;
                memtoReg = 2'b00;
                ALUOp = 2'b10;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;
                PCorR1 = 1'bx;
                Br_J_Sel = 2'b00;
            end
            7'b0100011: begin // s type
                memRead = 0;
                memtoReg = 2'bxx;
                ALUOp = 2'b00;
                memWrite = 1;
                ALUSrc = 1;
                regWrite = 0;
                PCSel = 2'b00;
                PCorR1 = 1'bx;
                Br_J_Sel = 2'b00;
            end
            7'b1100011: begin // b type
                memRead = 0;
                memtoReg = 2'bxx;
                ALUOp = 2'b01;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 0;
                PCorR1 = 1'b0; // use PC for branch target
                case (funct3)
                    3'b000: PCSel = (BrEq) ? 2'b01 : 2'b00;  // beq
                    3'b001: PCSel = (!BrEq) ? 2'b01 : 2'b00; // bne
                    3'b100: PCSel = (BrLT) ? 2'b01 : 2'b00;  // blt
                    3'b101: PCSel = (!BrLT || BrEq) ? 2'b01 : 2'b00; // bge
                    default: PCSel = 2'b00;
                endcase
                Br_J_Sel = 2'b01;
            end
            7'b1101111: begin // j type (JAL)
                memRead = 0;
                memtoReg = 2'b10;
                ALUOp = 2'b00;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;      // jump in ex!!!!!!!!!!!!!
                PCorR1 = 1'b0;  // use PC for JAL target
                Br_J_Sel = 2'b10;
            end
            7'b1100111: begin // i type jalr
                memRead = 0;
                memtoReg = 2'b10;
                ALUOp = 2'b00;
                memWrite = 0;
                ALUSrc = 1;
                regWrite = 1;
                PCSel = 2'b00;      // jump in ex!!!!!!!!!!!!!!
                PCorR1 = 1'b1;  // use R1 for JALR target
                Br_J_Sel = 2'b10;
            end
            default: begin // other instructions
                memRead = 0;
                memtoReg = 2'bxx;
                ALUOp = 2'bxx;
                memWrite = 0;
                ALUSrc = 0;
                regWrite = 0;
                PCSel = 2'b00;
                PCorR1 = 1'bx;
                Br_J_Sel = 2'b00;
            end
        endcase
    end

endmodule

