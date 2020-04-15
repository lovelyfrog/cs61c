### 1. Floating Point

1.1 2 zeros

1.2 1.1111...1 * $2^{127}$

1.3 $2^{-149}$

1.4  $2^{-126}$

### 2. More FP

2.1 (2 + $2^{-22}$)

2.2 (4 + $2^{-21}$)

2.3 easy

2.4 easy

2.5 $2^{24}-1$

### 3. RISC-V: A Rundown

### 4. Registers

4.1 

add x8, x0, x11

### 5. Basic Instructions

5.1 

(a) t0 = arr[3]=4

(b) arr[4] = t0 = 4

(b) 

t1 = 16

t2 = arr + 16

t3 = 5

t3 = 6

arr[4] = 6

(c)

t0 = 1

t0 = 0xFFE

t0 = 0xFFF

 ### 6. C to RISC-V

1. 

add s0, x0, 4

add s1, x0, 5

add s2, x0, 6

add s3, x0, x0

add s3, s3, s0

add s3, s3, s1

add s3, s3, s2

add s3, s3, 10

2. 

sw 0, (0)s0

add s1, x0, 2

3. 

add s0, x0, 5

add s1, x0, 5

bne s0, s1, else

xor s0, x0, x0

jal x0, exit

else:

​	add s1, s0, -1

exit:

4. 

```c
x = 0;
y = 1;
temp = 30;
while (x < 30){
  y = y + y;
  x = x + 1;
}

```

5. 

add s1, x0, 0

loop:

​	beq s0, x0, exit

​	add s1, s1, s0

​	add s0, s0, -1

​	jal x0, loop

exit:

 





