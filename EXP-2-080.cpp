//Experiment 2 - To study and implement C++ Program Structure (Data Types)
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1
#include <iostream>
using namespace std;
int main()
{ 
 
cout<<"size of integer is "<<sizeof(int)<< " bytes"<<endl;
cout<<"size of character is "<<sizeof(char)<< " bytes"<<endl;
cout<<"size of float is "<<sizeof(float)<< " bytes"<<endl;
cout<<"size of string is "<<sizeof(string)<< "  bytes"<<endl;

}

//Output:
size of integer is 4 bytes
size of character is 1 bytes
size of float is 4 bytes
size of string is 32  bytes

//Program 2
#include<iostream>
Using namespace std;
void staticExample(){
int z = 0;
z++;
cout<<"the value of z is: "<<z<<endl;
}
int main(){
staticExample();
staticExample();
return 0;
}

//Output:
0
