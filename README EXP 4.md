# Basics-of-C++
This repository contains experiments 1, 2, 3, 4 which are related to the basics of C++.

# Bitwise Operators
# EXPERIMENT 4 (Program 1):
## Aim: 
To study and implement C++ Bitwise Operators.
## Theory: 
Bitwise operators in C++ perform operations on individual bits of integral data types, such as `int` or `char`.
Key operators include:

- `&` (AND) sets a bit to `1` if both corresponding bits are `1`.
- `|` (OR) sets a bit to `1` if at least one corresponding bit is `1`.
- `^` (XOR) sets a bit to `1` if the corresponding bits differ.
- `~` (NOT) inverts all bits.
- `<<` (left shift) shifts bits to the left, inserting zeros on the right.
- `>>` (right shift) shifts bits to the right, preserving the sign bit for signed numbers. 

These operators are commonly used in low-level programming for tasks like masking, toggling, or clearing bits.
~~~
CODE:

//Program 1
#include<iostream>
using namespace std;

int main()
{
    int a = 16;
    int b = 14;
    int c = a & b;
    int d = a | b;
    int e = a ^ b ;
    int f = ~a;
    cout << "The bitwise and value of 16 and 14 is: "<< c<< endl;
    cout << "The bitwise or value of 16 and 14 is: "<< d<< endl;
    cout << "The bitwsie xor value of 16 and 14 is: "<< e<< endl;
    cout << "The butwise not value of 16 is: "<< f<< endl;
    cout << "Left shifted value of a "<< (a<<1)<< endl;
    cout << "Right shifted value "<< (b>>1)<< endl;
    return 0;

}
~~~

# Conclusion
In C++ we have learnt about avrious types of bitwise operators and used them in our programs.

### Outputs

## Experiment 4:

### Program 1 (Bitwise values of gates):
![image](https://github.com/user-attachments/assets/e55784fd-823f-463f-b885-2eb9b412d8b8)
