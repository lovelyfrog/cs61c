### 1. Pre-Check

1.1 False

1.2 False

1.3 True

1.4 ???

1.5 False

1.6 False

### 2. RISC-V with Arrays and Lists

2.1

```c
// step-by-step
t0 = arr[0];
t1 = arr[2];
t2 = t0 + t1;
arr[1] = t2;
// for short
arr[1] = arr[0] + arr[1];
```

2.2

```c
// step-by-step
while (s1 != 0) {
  t0 = s1->val;
  t0++;
  s1->val = t0;
  s1 = s1->next;
}
// for short
while (lst != NULL) {
  lst->val++;
  lst = lst->next;
}
```

2.3

```c
what is slti? 
```

### 3. RISC-V Calling Conventions

3.1

Use 8 argument registers `a0-a7`

3.2

Use `a0` and `a1`

3.3

`sp` is stands for stack pointer. 

3.4

`a0-a7, t0-t6, ra`

3.5

`sp, tp, s0-s11`

3.6

`a0-a7, t0-t6, ra`: not the same

`sp, gp, s0-s11`: the same

### 4. Writing RISC-V Functions

4.1

```assembly
loop:
	add s0 a0 x0
	add s1 x0 x0
	beq s0 x0 end
	add a0 s0 x0
	jal ra square
	add s1 s1 a0
	addi s0 s0 -1
	jal x0 loop
end: add a0 s1 x0
```

4.2

```assembly
prologue:
	addi sp sp -12
	sw ra 0(sp)
	sw s0 4(sp)
	sw s1 8(sp)
epilogue:
	lw ra 0(sp)
	lw s0 4(sp)
	lw s1 8(sp)
	addi sp sp 12
	jr ra
```

### 5. More Translating between C and RISC-V

```c
// step-by-step
func:
  t0 = 1;
  a0 = x;
  a1 = y;
  while (a1 != 0) {
    t0 = t0 * a0;
    a1--;
  }
  a0 = t0;
return t0;
// for short
int power(int x, int y) {
  res = 1
  while (y != 0) {
    res = res * x;
    y--;
  }
  return res;
}
```









