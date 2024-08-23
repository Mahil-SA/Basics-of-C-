//Experiment 4 - Bitwise Operators (AND ,OR, NOT, XOR, Left Shift, Right Shift)
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1 (Bitwise operators)
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
    cout << "The bitwise xor value of 16 and 14 is: "<< e<< endl;
    cout << "The bitwise not value of 16 is: "<< f<< endl;
    cout << "Left shifted value of a "<< (a<<1)<< endl;
    cout << "Right shifted value "<< (b>>1)<< endl;
    return 0;

}

//Output
The bitwise and value of 16 and 14 is: 0
The bitwise or value of 16 and 14 is: 30
The bitwise xor value of 16 and 14 is: 30
The bitwise not value of 16 is: -17
Left shifted value of a 32
Right shifted value 7

//Program 2 (Bit Positions)
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num, set, reset;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the bit position to set (0 to 7): ";
    cin >> set;
    cout << "Enter the bit position to reset (0 to 7): ";
    cin >> reset;
    std::cout << num << " in binary is " << std::bitset<8>(num) << std::endl;
    int num_set = num | (1 << set);
    std::cout << "Result after setting bit number " <<set<< " is " << std::bitset<8>(num_set) << std::endl;
    int num_reset = num_set & ~(1 << reset);
    std::cout << "Result after resetting bit number " <<reset<< " is " << std::bitset<8>(num_reset) << std::endl;
    return 0;
}

//Output
Enter a number: 4
Enter the bit position to set (0 to 7): 5
Enter the bit position to reset (0 to 7): 2
4 in binary is 00000100
Result after setting bit number 5 is 00100100
Result after resetting bit number 2 is 00100000
