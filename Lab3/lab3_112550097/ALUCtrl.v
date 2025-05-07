module ALUCtrl (
    input [1:0] ALUOp,
    input [6:0]funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    always @(*) begin
    case (ALUOp)
        2'b00: ALUCtl = 4'b0010; // load store  
        2'b01: ALUCtl = 4'b0110; // branch      
        2'b10: begin
            case (funct3)
                3'b000: begin 
                    if (funct7 == 7'b0000000)
                        ALUCtl = 4'b0010; // add addi
                    else if (funct7 == 7'b0100000)
                        ALUCtl = 4'b0110; // sub
                    else
                        ALUCtl = 4'b0010;
                end
                3'b010: ALUCtl = 4'b0111; // slt slti
                3'b110: ALUCtl = 4'b0001; // or  ori
                3'b111: ALUCtl = 4'b0000; // and andi
                default: ALUCtl = 4'b0000;
            endcase
        end
        default: ALUCtl = 4'b0000;
    endcase
end



endmodule

