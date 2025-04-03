module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation

    always @(*) begin
        case (ALUOp)
            2'b00: ALUCtl = 4'b0010; // lw, sw
            2'b01: ALUCtl = 4'b0110; // beq
            2'b10: begin
                case (funct3)
                    3'b000: begin
                        case (funct7)
                            1'b0: ALUCtl = 4'b0010; // add
                            1'b1: ALUCtl = 4'b0110; // sub
                            default: ALUCtl = 4'bxxxx; // undefined
                        endcase
                    end
                    3'b010: ALUCtl = 4'b0111; // slt
                    3'b110: ALUCtl = 4'b0001; // or
                    3'b111: ALUCtl = 4'b0000; // and
                    default: ALUCtl = 4'bxxxx; // undefined
                endcase
            end
            default: ALUCtl = 4'bxxxx; // undefined
        endcase
    end


endmodule

