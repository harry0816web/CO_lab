module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);

    // TODO: implement your ALU control here
    // For testbench verifying, Do not modify input and output pin
    // Hint: using ALUOp, funct7, funct3 to select exact operation
    /*
        {0b10, 0b0, 0b000, 0b0010},  // ADD
        {0b10, 0b1, 0b000, 0b0110},  // SUB
        {0b10, 0b0, 0b111, 0b0000},  // AND
        {0b10, 0b0, 0b110, 0b0001},  // OR
        {0b10, 0b0, 0b010, 0b0111},  // SLT
        {0b11, 0b0, 0b000, 0b0010},  // ADDI
        {0b11, 0b0, 0b111, 0b0000},  // ANDI
        {0b11, 0b0, 0b110, 0b0001},  // ORI
        {0b11, 0b0, 0b010, 0b0111},  // SLTI
        {0b00, 0b0, 0b010, 0b0010},  // LW/SW
        {0b00, 0b0, 0b000, 0b0010},  // JALR
    */
    always @(*) begin
        case(ALUOp)
            2'b10 : case({funct7,funct3})
                        // TODO
                        // r-type

                        // ADD
                        {1'b0, 3'b000} : ALUCtl = 4'b0010;
                        // SUB
                        {1'b1, 3'b000} : ALUCtl = 4'b0110;
                        // AND
                        {1'b0, 3'b111} : ALUCtl = 4'b0000;
                        // OR
                        {1'b0, 3'b110} : ALUCtl = 4'b0001;
                        // SLT
                        {1'b0, 3'b010} : ALUCtl = 4'b0111;

                        // complete switch case
                        default : ALUCtl = 4'bxxxx; 
                    endcase
            2'b11 : case(funct3)
                        // TODO
                        // i-type

                        // ADDI
                        3'b000 : ALUCtl = 4'b0010;
                        // ANDI
                        3'b111 : ALUCtl = 4'b0000;
                        // ORI
                        3'b110 : ALUCtl = 4'b0001;
                        // SLTI
                        3'b010 : ALUCtl = 4'b0111;

                        // complete switch case
                        default : ALUCtl = 4'bxxxx;
                    endcase
            2'b00 : case(funct3)
                        // TODO
                        
                        // LW/SW
                        3'b010 : ALUCtl = 4'b0010;
                        // JALR
                        3'b000 : ALUCtl = 4'b0010;

                        // complete switch case
                        default : ALUCtl = 4'bxxxx;
                    endcase
            //2'b01 : case(funct3)
                         // TODO
                         //endcase
            default : ALUCtl = 4'bxxxx;
        endcase
    end


endmodule

