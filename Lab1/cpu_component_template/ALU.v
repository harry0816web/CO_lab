module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A,B,
    output reg signed [31:0] ALUOut,
    output zero
);
    // ALU has two operand, it execute different operator based on ALUctl wire
    // output zero is for determining taking branch or not (or you can change the design as you wish)

    // TODO: implement your ALU here
    // Hint: you can use operator to implement

    /*
        {0b10, 0b0, 0b000, 0b0010},  // ADD
        {0b00, 0b0, 0b010, 0b0010},  // LW/SW
        {0b00, 0b0, 0b000, 0b0010},  // JALR
        {0b11, 0b0, 0b000, 0b0010},  // ADDI

        {0b10, 0b1, 0b000, 0b0110},  // SUB

        {0b10, 0b0, 0b110, 0b0001},  // OR
        {0b11, 0b0, 0b110, 0b0001},  // ORI

        {0b10, 0b0, 0b010, 0b0111},  // SLT
        {0b11, 0b0, 0b010, 0b0111},  // SLTI

        {0b11, 0b0, 0b111, 0b0000},  // ANDI
        {0b10, 0b0, 0b111, 0b0000},  // AND
    */
    always @(*) begin
        case(ALUctl)
            // TODO
            4'b0010 : ALUOut = A + B;
            4'b0110 : ALUOut = A - B;
            4'b0001 : ALUOut = A | B;
            4'b0111 : ALUOut = A < B ? 32'b1 : 32'b0;
            4'b0000 : ALUOut = A & B;
            default : ALUOut = 32'bxxxx;

        endcase
    end
    assign zero = ALUOut == 32'b0;
endmodule

