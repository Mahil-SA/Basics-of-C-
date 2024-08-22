# Basics-of-C++
This repository contains experiments 1, 2, 3, 4 which are related to the basics of C++.

# Operators
# EXPERIMENT 3:
## Aim: 
To study and implement Operators in C++
## Theory: 
Operators in C++ are special symbols that perform operations on variables and values. They include arithmetic operators like `+`, `-`, `*`, and `/` for basic math, and relational operators like `==`, `!=`, `<`, and `>` for comparison.

Logical operators, such as `&&`, `||`, and `!`, are used for boolean logic. Additionally, C++ provides assignment operators like `=`, `+=`, and `-=`, and bitwise operators like `&`, `|`, and `^`. 

There are also special operators like `sizeof`, `typeid`, and the ternary `?:` operator for conditional expressions. In this experiment we use various operators to compare several inputs given by users.

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

# Conclusion
We have learnt about operators in C++ and how to use them in a program.

### Outputs

## Experiment 3:

### Program 1 (a==b):
![image](https://github.com/user-attachments/assets/e0e2b434-c164-49c0-bb91-df245d51f893)

### Program 2 (a!=b):
![image](https://github.com/user-attachments/assets/d7931ed5-b869-43f6-8fca-eff809f91f0a)

### Program 3 (a&&b : true):
![image](https://github.com/user-attachments/assets/b678837d-43d1-4d64-8653-bd609fe78d2e)

### Program 4 :
![image](https://github.com/user-attachments/assets/eb756a7d-6394-4a59-9bf0-9e3599aef3a3)
