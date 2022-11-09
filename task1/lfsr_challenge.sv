module lfsr_challenge (
    input logic         clk,        // clock
    input logic         rst,        // reset
    input logic         en,         // enable
    output logic [7:1]  data_out   // pseudo-random ouput
);

reg [6:0] sreg=7'b1111111;

always_ff @ (posedge clk, posedge rst)
    if (en)
        begin
        sreg[6]<=sreg[5];
        sreg[5]<=sreg[4];
        sreg[4]<=sreg[3];
        sreg[3]<=sreg[2];
        sreg[2]<=sreg[1];
        sreg[1]<=sreg[0];
        sreg[0]<=sreg[6]^sreg[5];
        end

    assign data_out = sreg;
endmodule
