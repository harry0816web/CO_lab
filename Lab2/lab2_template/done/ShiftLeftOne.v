module ShiftLeftOne (
    input signed [31:0] i,
    output signed [31:0] o
);

    // TODO: implement your shift left 1 here
    // word 2 bytes => word * 2 => 4 bytes
    o = i << 1; 
    

endmodule

