## 1. Eight Great Ideas in Computer Architecture

* design for moore's law
* use abstraction to simplify design
* make the common case fast
* Performance via parallelism
* performance via pipelining
* performance via prediction
* Hierarchy of memories
* Dependability via redundancy

## 2. Technologies for Building Processors and Memory

A transistor is an on/off switch controlled by electricity. The integrated circuit (IC) combined dozens to hundreds of transistors into a single chip. VLSI is short for *very large scale integrated circuit*. DRAM is short for *dynamic random access memory*.

A VLSI circuit is just billions of combinations of conductor, insulators and swithes manufactured in a single small package.

## 3. Performance

Response time: also called **execution time**, it's the total time required for the computer to complete a task.

Throughput: also called bandwidth. It's the number of tasks completed per unit time

CPU time: it's the time the CPU spends computing for this task and does not include time spent waiting for I/O or running other programs.

user CPU time: The CPU time spent in a program itself

system CPU time: The CPU time spent in the operating system performing tasks on behalf of the program

Clock cycle: also called tick, clock tick, clock period, clock, or cycle. The time for one clock period, usually of the processor clock, which runs at a constant rate.

### 3.1 CPU performance:



CPU execution time for a program 

​	= CPU clock cycles for a program x Clock cycle time

​	= CPU clock cycles for a program / Clockrate

### 3.2 Instruction performance:

one way to think about execution time is that it equals the number of instructios executed multiplied by the average time per instruction.

CPU clock cycles = Instructions for a program x Average clock cycles per instruction.

The term clock cycles per instruction is often abbreviated as **CPI**.

CPU time = Instruction count x CPI x Clock cycle time

​	



