module lfsr (
    input logic         clk,        // clock
    input logic         rst,        // reset
    input logic         en,         // enable
    output logic [4:1]  data_out   // pseudo-random ouput
);

reg [3:0] sreg=4'b1;

always_ff @ (posedge clk, posedge rst)
    // if (rst)
    //     sreg <= 4'b1;
    // else 
    //     sreg <= {sreg[3:1], sreg[4]^sreg[3]}
    if (en)
        begin
        sreg[3]<=sreg[2];
        sreg[2]<=sreg[1];
        sreg[1]<=sreg[0];
        sreg[0]<=sreg[3]^sreg[2];
        end

    assign data_out = sreg;
endmodule
