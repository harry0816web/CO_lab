module Mux2to1 #(
    parameter size = 32
)
(
    input sel,
    input signed [size-1:0] s0,
    input signed [size-1:0] s1,
    output signed [size-1:0] out
);
    // TODO: implement your 2to1 multiplexer here
    case (sel)
        1'b0: out = s0;
        1'b1: out = s1;
        default: out = 32'b0; // undefined
    endcase
endmodule

