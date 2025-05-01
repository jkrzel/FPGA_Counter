# FPGA_Counter
A counter for Altera Cyclone IV FPGA board, code is written in AHDL language. The counter works in a 12 bit number range. The displayed values on the seven segment display are next squared natural numbers.

The numbers are being read from the ROM memory that was created in a C++ programme. The program basicaly calculates the next numbers from the 0-4095 range, breakes the numbers to separate digits that are being transformed into 4 bit numbers. Then all the four digits are being put together into a 12 bit number so later in the AHDL file they can be easily assigned to designated seven segment displays.
The whole program is based on reading the ROM memories accordingly to the main 2 Hz clock counter's values. Choosing ROM-based data access over real-time computation improves performance by minimizing combinational logic usage and enabling easy modifications of the programs in FPGA designs.
