//Experiment 4 - Bitwise Operators (AND ,OR, NOT, XOR, Left Shift, Right Shift)
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

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

//Output
The bitwise and value of 16 and 14 is: 0
The bitwise or value of 16 and 14 is: 30
The bitwsie xor value of 16 and 14 is: 30
The butwise not value of 16 is: -17
Left shifted value of a 32
Right shifted value 7
