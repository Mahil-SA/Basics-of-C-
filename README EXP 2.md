# Basics-of-C++
This repository contains experiments 1, 2, 3, 4 which are related to the basics of C++.

# Data Types
# EXPERIMENT 2 (Program 1):
## Aim: 
To print size of integers, characters, float and string.
## Theory: 
In C++, the size of data types depends on the system architecture. Typically, an *int* is 4 bytes, a *char* is 1 byte, and a *float* is 4 bytes. The size of a *string* varies, as it is a dynamic container class that holds characters and may include additional memory for internal management. Sizes can vary based on the compiler and platform.

~~~
CODE:

#include <iostream>
using namespace std;
int main()
{ 
 
cout<<"size of integer is "<<sizeof(int)<< " bytes"<<endl;
cout<<"size of character is "<<sizeof(char)<< " bytes"<<endl;
cout<<"size of float is "<<sizeof(float)<< " bytes"<<endl;
cout<<"size of string is "<<sizeof(string)<< "  bytes"<<endl;

}
~~~

# EXPERIMENT 2 (Program 2): 
## Aim:
Void and Static Example datatypes.
## Theory:
In C++, *void* is a return type used when a function doesn't return a value. For example, *void displayMessage()* prints a message but returns nothing. *static* is a keyword that restricts the visibility or lifetime of a variable or function. A *static* variable inside a function retains its value between calls, while a *static* function has file-level scope.

~~~
CODE:

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
~~~
