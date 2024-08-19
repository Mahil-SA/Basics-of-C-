# Basics-of-C++
This repository contains experiments 1, 2, 3, 4 which are related to the basics of C++.

# Operators
# EXPERIMENT 3 (Program 1):
## Aim: 
To study and implement Operators in C++
## Theory: 
Operators in C++ are special symbols that perform operations on variables and values. They include arithmetic operators like `+`, `-`, `*`, and `/` for basic math, and relational operators like `==`, `!=`, `<`, and `>` for comparison. Logical operators, such as `&&`, `||`, and `!`, are used for boolean logic. Additionally, C++ provides assignment operators like `=`, `+=`, and `-=`, and bitwise operators like `&`, `|`, and `^`. There are also special operators like `sizeof`, `typeid`, and the ternary `?:` operator for conditional expressions. In this experiment we use various operators to compare several inputs given by users.

~~~
CODE:

/Program 1
#include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a==b: "<<(a==b)<<endl;
    return 0;
}

//Program 2
 #include<iostream>
 using namespace std;
 int main()
{
    int a,b;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    cout<<"a!=b: "<<(a!=b)<<endl;
    return 0;
}

//Program 3
 #include<iostream>
 using namespace std;
 int main()
{
    
    
    bool a = true;
    
    bool b = true;
    cout<<boolalpha;
    cout<<"a&&b: "<<(a&&b)<<endl;
    return 0;
}

//Program 4
 #include<iostream>
 using namespace std;
 int main()
{ int a,b;
    
    a = 1;
    b = 1;
    cout<<"a&b: "<<(a&b)<<endl;
     cout<<"a|b: "<<(a|b)<<endl;
      cout<<"a^b: "<<(a^b)<<endl;
       cout<<"a: "<<(~a)<<endl;
        cout<<"a<<b: "<<(a<<b)<<endl;
         cout<<"a>>b: "<<(a>>b)<<endl;
    
    return 0;
}
~~~
