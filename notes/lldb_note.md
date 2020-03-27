1. While you're in a gdb session, how do you **set the arguments** that will be passed to the program when it's run?
   * Launch a process with arguments <args>: `r <args>`
   * Launch a process for which arguments a.out 1 2 3 without having to supply args every time: `$ lldb -- a.out 1 2 3`
2. How do you **create a breakpoint**?
   * set a breakpoint in file **test.c** at line 12: `b test.c:12`
   * Set a breakpoint on a function named foo: `breakpoint set -n foo`
3. How do you **execute the next line of C code** in the program after stopping at a breakpoint
   * `thread step-in`
   * `thread step-over`
   * `thread step-out`
   * `thread until 12`
4. How do you **continue the program after stopping** at a breakpoint?
   * `thread continue`
5. How can you **print the value of a variable (or even an expression like 1+2)**?
   * `frame variable xxx`
6. How do you configure lldb so it **displays the value of a variable after every step**?
   * `display xxx`
7. How do you **show a list of all variables and their values**?
   * `frame variable`
8. How do you **quit** out of lldb?
   * `exit`

