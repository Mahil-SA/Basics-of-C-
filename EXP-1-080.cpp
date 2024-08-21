//Experiment 1 - Downloading and Installing VS Code (Hello World and Calculator program)
//Name - Mahil Anthony
//PRN -  23070123080
//Batch -  ENTC B1

#include <iostream>
using namespace std;
int main()
{
string a;

    
    cout<<"Enter your name  ";
    getline(cin,a);
    cout<<"Hello "<<a;
    return 0;
} 

//Output
/*
Enter your name  Mahil
Hello Mahil
*/

//ADDITION
#include <iostream>
using namespace std;
int main()
{ int a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a+b;
cout << "the sum is "<<c;
return 0;
} 


//DIVISION
#include <iostream>
using namespace std;
int main()
{ float a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a/b;
cout << "the QUOTIENT is "<<c;
return 0;
}

//MULTIPLICATION
#include <iostream>
using namespace std;
int main()
{ float a,b,c;
cout << "enter first number ";
cin >> a;
cout << "enter the second number ";
cin >> b;
c=a*b;
cout << "the RESULT is "<<c;
return 0;
} 
