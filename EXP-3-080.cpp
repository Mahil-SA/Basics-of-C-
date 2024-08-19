//Experiment 3 - To study and implement Operators in C++
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

//Program 1
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

//Output:
enter first number: 5
enter second number: 6
a==b: 0

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

//Output:
enter first number: 7
enter second number: 9
a!=b: 1

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
//Output:
a&&b: true

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

//Output:
a&b: 1
a|b: 1
a^b: 0
a: -2
a<<b: 2
a>>b: 0
