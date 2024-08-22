# Basics-of-C++
This repository contains experiments 1, 2, 3, 4 which are related to the basics of C++.

# Download VS Code Installer:

### Step 1: -
Open your web browser and go to the official Visual Studio Code website: code.visualstudio.com. Click on the "Download for Windows" button. This will download the installer executable (.exe file). Run the Installer:

### Step 2: -
Once the download is complete, open the downloaded file (VSCodeSetup-x.y.z.exe where x.y.z is the version number). If prompted by the User Account Control (UAC) dialog, click "Yes" to allow the installer to make changes to your system.

### Step 3: -
Accept the License Agreement:
Read through the license agreement. Check the box that says "I accept the agreement" and click "Next".

### Step 4: -
Choose Installation Location:
Choose the destination folder where you want to install VS Code. The default location is usually fine. Click "Next".

### Step 5: -
Install VS Code:
Click the "Install" button to start the installation process. The installer will copy the necessary files to your system.

### Step 6: - 
Launch VS Code:
Once the installation is complete, you’ll see a final screen with an option to launch Visual Studio Code. Ensure this box is checked and click "Finish".

# EXPERIMENT 1 (Program 1):
## Aim : 
To print Hello World.
## Theory: 
Introduction to Output: Uses “using namespace std” to print text to the console, helping beginners understand basic output in C++.
Software: VS Code

~~~
CODE:

#include<iostream>
using namespace std;
int main()
{
      cout<<"Hello World";
      return 0;
} 
~~~

# EXPERIMENT 1 (Program 2): 
## Aim:
Printing Sum and Average of 2 numbers.
## Theory:
Sum and Average:
Basic Arithmetic Operations: Teaches us to perform simple addition and division to calculate the sum and average of numbers.
Input and Output Handling: Teaches how to take input from the user using namespace std and display results in the output.

~~~
CODE:

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
~~~

# Conclusion
We have learnt to download VS code and learnt basic program to add, divide, multiply and diplay our name in C++.

# Outputs:

## Experiment 1:

### Program 1 (Print `Hello Name`):
![image](https://github.com/user-attachments/assets/f52ea793-5121-4e2a-b199-cf5bce9bdd66)

### Program 2 (Addition):
![image](https://github.com/user-attachments/assets/f78fd86e-7f3b-4107-b4ec-92cc37953a41)

### Program 3 (Division):
![image](https://github.com/user-attachments/assets/5fde06be-0943-47a1-b31e-c0dd3aa2ad75)

### Program 4 (Multiplication):
![image](https://github.com/user-attachments/assets/161535ae-e917-4d91-8ffa-1c27703aff8d)
