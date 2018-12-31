# GeigerTester
This short piece of code generates a square wave output on any Arduino board with a rate of falling (or rising) edges
given in cpm. Any geiger counter software should be able to count this value of pulses with it's interrupt handler 
routine properly.

For testing use an additional, separate Arduino board to upload this Geiger tester software. Use a board with the same IO levels as your target Geiger counter board (either 5V or 3.3V). Pin 8 will output the square wave signal. Connect GND of both boards and 
connect pin 8 of the tester board to the interrupt input pin of your target Geiger counter board.

This Geiger tester however neglects the fact that the delays between true Geiger pulses are arbitrarily distributed in time 
and that delays between pulses can be infitesimally small. Therefore this test is incomplete but when you test your geiger 
counter software with various cpm values from very low to the max. count rate you can be quite sure it has enough dynamics.
