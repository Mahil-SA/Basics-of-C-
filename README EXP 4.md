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

//Program 1 (Bitwise Operators)
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

//Program 2 (Bit Positions)
include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    // Input the number and bit positions to set and reset
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    // Display the original number in binary
    std::cout << num << " in binary is " << std::bitset<8>(num) << std::endl;
    // Set the bit at set_pos
    int num_set = num | (1 << set);
    std::cout << "Result after setting bit number " <<set<< " is " << std::bitset<8>(num_set) << std::endl;
    // Reset the bit at reset_pos
    int num_reset = num_set & ~(1 << reset);
    std::cout << "Result after resetting bit number " <<reset<< " is " << std::bitset<8>(num_reset) << std::endl;
    return 0;
}

~~~

# Conclusion
In C++ we have learnt about avrious types of bitwise operators and used them in our programs.

# Outputs

## Experiment 4:

### Program 1 (Bitwise values of gates):
![image](https://github.com/user-attachments/assets/e55784fd-823f-463f-b885-2eb9b412d8b8)
