### 1. Find the error

(a) returns the sum of all the elements in summands

```c
int sum(int* summands) {
  int sum = 0;
  for (int i = 0; i < sizeof(summands); i++)
    sum += *(summands + i);
  return sum;
}
```

`summands` is a type of pointer, normally `sizeof(pointer)` is 2/4. As a result, we must pass the length of the array into the function.

### 2. Memory Management

2.1 For each part, choose one or more of the following memory segements where the data could be located: **code, static, heap, stack**.

(a) Static variables: **static**

(b) Local variables: **stack**

(c) Global variables: **static**

(d) Constants: **code, static or stack**

Constants can be compiled directly into the **code**. `x = x + 1` can compile with the number 1 stored directly in the machine instruction in the code.

Constants can also be found in the **stack** or **static** storage depending on if it's declared in a function or not. 

(e) Machine Instructions: **code**

(f) Result of `malloc`: **heap**

(g) String Literals: **static or stack** 

When declared in a function, string literals can be stored in different places. `char* s = "stirng"` is stored in the **static** memory segment while `char[7] = "string"` will be stored in the stack.

2.2 Write the code necessary to allocate memory on the heap in the following scenarios.

(a) An array `arr` of k integers

```c
arr = (int *) malloc(sizeof(int) * k);
```

(b) A string `str` containing p characters

```c
str = (char *) malloc(sizeof(char) * (p + 1)) // don't forget the null terminator!
```

(c) An n x m matrix `mat` of integers initialized to zero

```c
mat = (int *) calloc(n * m, sizeof(int));
```

Alternative solution. This might be needed if you wanted to efficiently permute the rows of the matrix.

```c
mat = (int **) calloc(n, sizeof(int *));
for (int i = 0; i < n; i++)
  mat[i] = (int *) calloc(m, sizeof(int));
```

