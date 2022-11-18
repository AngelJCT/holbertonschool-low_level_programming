# Bit manipuation
### Bit manipulation is the act of algorithmically manipulating bits or other pieces of data shorter than a byte. C language is very efficient in manipulating bits. The operators used to manipulate bits are known as ***Bitwise Operators***.
### Bitwise Operators are:
| Operator | Description |
| --- | --- |
| & | Binary AND Operator copies a bit to the result if it exists in both operands. |
| \| | Binary OR Operator copies a bit if it exists in eather operand. |
| ^ | Binary XOR Operator copies the bit if it is set in one operand but not both. |
| ~ | Binary Ones Complement Operator is unary and has the efect of 'flipping' bits. |
| << | Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand. |
| >> | Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand. |
### Table of content:
***0-binary_to_uint.c***

<sub>Write a function that converts a binary number to an unsigned int.
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1,
b is NULL.</sub>

***1-print_binary.c***

<sub>Write a function that prints the binary representation of a number.</sub>

***2-get_bit.c***

<sub>Write a function that returns the value of a bit at a given index.
Where index is the index, starting from 0 of the bit you want to get.
Returns: the value of the bit at index index or -1 if an error occured.</sub>

***3-set_bit.c***

<sub>Write a function that sets the value of a bit to 1 at a given index.
Where index is the index, starting from 0 of the bit you want to set.
Returns: 1 if it worked, or -1 if an error occurred.</sub>

***4-clear_bit.c***

<sub>Write a function that sets the value of a bit to 0 at a given index.
Where index is the index, starting from 0 of the bit you want to set.
Returns: 1 if it worked, or -1 if an error occurred.</sub>

***5-flip_bits.c***

<sub>Write a function that returns the number of bits you would need to flip to get from one number to another.</sub>
