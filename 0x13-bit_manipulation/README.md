# 0x13. C - Bit manipulation
## Concepts Learned from this Project
* How to manipulation bits and use bitwise operators
---
#### 0-binary_to_uint.c
```
unsigned int binary_to_uint(const char *b);
```
Function that converts a binary number to an unsigned int
#### 1-print_binary.c
```
void print_binary(unsigned long int n);
```
Function that prints the binary representation of a number
#### 2-get_bit.c
```
int get_bit(unsigned long int n, unsigned int index);
```
Function that returns the value of a bit at a given index.
#### 3-set_bit.c
```
int set_bit(unsigned long int *n, unsigned int index);
```
Function that sets the value of a bit to 1 at a given index
#### 4-clear_bit.c
```
int clear_bit(unsigned long int *n, unsigned int index);
```
Function that sets the value of a bit to 0 at a given index
#### 5-flip_bits.c
```
unsigned int flip_bits(unsigned long int n, unsigned long int m);
```
Function that returns the number of bits you would need to flip to get from one number to another
#### 100-get_endianness.c
```
int get_endianness(void);
```
Function that returns 0 if big endian, 1 if little endian
#### 101-password
The password for this [program](https://github.com/holbertonschool/0x13.c)
#### holberton.h
This header file contains all of the prototypes necessary for the main function.
