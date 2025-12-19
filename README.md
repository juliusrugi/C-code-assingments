Pointer

A pointer stores the memory address of another variable.

Stores: Address of another variable

Memory access: Indirect, via the address

Reading value: Use dereferencing (*)

Modifying value: Modify value at the stored address

Example

int a = 10;
int *p = &a;
printf("%d", *p);  // prints 10

Summary Table
Feature	Normal Variable	Pointer
Stores	Data value	Memory address
Access	Direct	Indirect
Modification	Direct assignment	Dereferencing
Operator used	None	* and &
2. Variable Declaration & Definition vs Pointer Declaration & Definition
Variable Declaration and Definition
int x;     // declaration
x = 5;     // definition (initialization)


Or combined:

int x = 5;

Pointer Declaration and Definition
int *p;        // pointer declaration
p = &x;        // pointer definition


Or combined:

int *p = &x;

Operators & and *
Operator	Meaning
&	Address-of operator (gets memory address)
*	Dereferencing operator (accesses value at address)

Example

int x = 10;
int *p = &x;
printf("%d", *p);  // prints 10

3. Dereferencing a Pointer
Meaning

Dereferencing means accessing or modifying the value stored at the memory address held by a pointer.

Example: Accessing Value
int a = 5;
int *p = &a;
printf("%d", *p);  // Outputs: 5

Example: Modifying Value
int a = 5;
int *p = &a;
*p = 20;
printf("%d", a);   // Outputs: 20

4. Pointer-Related Concepts

Null Pointer: Pointer that points to nothing

int *p = NULL;


Dangling Pointer: Pointer pointing to freed memory

Wild Pointer: Uninitialized pointer

int *p;  // dangerous


Pointer Arithmetic: Move across array elements

p++;

5. Scenarios Where Pointers Are Preferred
Example 1: Modifying Data Inside a Function
void update(int *x) {
    *x = 50;
}

Example 2: Arrays and Strings
void printArray(int *arr);

6. Limitations and Risks of Using Pointers

Can cause segmentation faults

Risk of memory leaks

Difficult to debug

Can corrupt memory if misused

Requires careful initialization

7. Call by Value vs Call by Reference
Call by Value

Passes a copy of data

Original value remains unchanged

Example

void increment(int x) {
    x++;
}

Call by Reference

Passes address of data

Original value can be modified

Example

void increment(int *x) {
    (*x)++;
}

Comparison Table
Feature	Call by Value	Call by Reference
Data passed	Copy	Address
Modification	Not allowed	Allowed
Memory	More	Less
Safety	Safer	Riskier
8. Practical Scenarios
a) When Call by Value is Preferred

Data should not be modified

Simple calculations

Security-critical values

Example: Calculating area

b) When Call by Reference is Preferred

Need to modify original data

Large data structures

Swapping values

Example: Swapping numbers

void swap(int *a, int *b);
