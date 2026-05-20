- [ ] Different data types are used in verilog.
- [ ] A net data type contains a wire and it is used to represent a continuous value. The default value of the net data type is Z.
- [ ] Another data type is the register(reg). It represents a value stored over time (used on procedural blocks). The default value of a reg is X.
- [ ] We can also use the data type integer to store 32 bit signed integers.
- [ ] We can use the data type real to store floating point numbers.
- [ ] We use assign statement to give the value of a variable which is a wire.
- [ ] We cannot use the assign statement for a register variable.
- [ ] We can use the procedural assignment which contains the statement always.
- [ ] Always @ (posedge clk) begin 
            r = A; // reg procedural assignment
   end
  endmodule
- [ ] The posedge clk variable in the always block is called the sensitivity. That is the modules code is sensitive to the changes in the sensitivities.
- [ ] Posedge means that whenever the positive edge of the clock comes, the statements inside the module are executed.
- [ ] For any variable to be assigned in the always block it should be a register.
- [ ] We use operators to represent the language.

![[SCR-20251127-iepd.png]]

- [ ] The bitwise operators each and every bit is operated.
- [ ] Boolean logical operations produce one bit result.
- [ ] Input a\[3:0\] means the a variable contains 4 bits.(a\[3\], a\[2\], a\[1\], a\[0\]). These are named as vectors in verilog.
- [ ] {cout, sum} produces the concatenation of the values of the variables in the given order.
- [ ] We have two types of assignments in verilog.

![[SCR-20251127-igsx.png]]

- [ ] Note that we can use the register on the right hand side of the assign statement but not on the left hand side.

## VHDL

 The ghdl -a (file name) is used to compile the vhdl file and the test bench file.
- [ ] The ghdl -e (entity name of test bench) and ghdl -r (entity of the test bench) --vcd=wave.vcd is used to build the executable.
- [ ] Gtkwave (name of the file created in the build (wave.vcd here)) is used to show the wave forms. After opening the gui, we will have to open the dff_tb file (here the entity name is dff_tb) and append all the variables to see the wave forms (do not forget to make the simulation zoom fit or else you may see only some straight lines which make utter nonsense to your brain).
- [ ] The entity in the vhdl language is used to define the inputs and the outputs in the module or the hardware part to be designed.
- [ ] For a program to run a module in a simulation it could not have any inputs or outputs.
- [ ] While the entity is a module interface to the outer world then the architecture is the internal implementation of the module, we can define many architectures in a single entity in the module.
- [ ] Inside an architecture, we define a process, a process can be thought of as a thread inside the program, where the things happen sequentially.
- [ ] We should mostly make use of the wait statements for the program to wait there forever or else the terminal will go inside an infinite loop and the program never completes.
- [ ] We would hit an infinite loop in vhdl if we skip the wait statement in a process because a process in the vhdl language runs in loops after completion without asking for the user intent.
- [ ] We can use the wait for statement to make the module or the program to wait for a specific time before hitting the next loop.



![[SCR-20260129-ooqm.png]]


- [ ] We can create infinite loops other than the process threads. For this we uses the loop -> end loop syntax block. The statements inside this block are executed until they encounter an exit statement.
- [ ] Note that the exit statement is used to break out of any statement.
- [ ] To iterate for a fixed number of times we use the for loop statements inside the module. The syntax is as follows :

**for <c> in <r> loop**
**end loop;**

- [ ] The c is an arbitrary name for a constant that will be available inside the loop. The r is the range of the integers over which the loop will iterate.
- [ ] The vhdl code for an incrementing range from 0 to 9 (10 numbers) -> 0 to 9;
- [ ] The vhdl code for a decrementing range from 9 to 0 (10 numbers) -> 9 downto 0;
- [ ] The vhdl code for a range including the number 0 only is -> 0 to 0;
- [ ] The vhdl code for an empty range that doesn’t have any numbers at all is -> 0 to -1;
- [ ] We can convert an integer to a string by using the syntax of integer’image()