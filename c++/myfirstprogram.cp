#include<iostream>
is a header file library that lets us work with input and output objects, such as cout. 
Header files add functionality to C++ programs.


using namespace std;
using namespace std means that we can use names for objects and variables from the standard library.


int main() {
 cout << "Hello World!";
 return 0;
}
int main() This is a function. Any code inside its curly brackets {} will be executed.

cout is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Hello World!".

Note: Every C++ statement ends with a semicolon ;

The using namespace std line can be omitted and replaced with the std keyword, followed by the :: operator for some objects:

Example
#include <iostream>

int main() {
  std::cout << "Hello World!";
  return 0;
}


You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:

Example
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}

break lines : for have new line we can use \n or endl and for blank line \n\n 

Both \n and endl are used to break lines. However, \n is most used.


Variables :
In C++, there are different types of variables (defined with different keywords), for example:

int     stores integers (whole numbers), without decimals, such as 123 or -123
double  stores floating point numbers, with decimals, such as 19.99 or -19.99
char    stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string  stores text, such as "Hello World". String values are surrounded by double quotes
bool    stores values with two states: true or false
To create a variable, specify the type and assign it a value:

type variableName = value;
Where type is one of C++ types (such as int), and variableName is the name of the variable (such as x or myName). The equal sign is used to assign values to the variable.

cout is used to output (print) values. Now we will use cin to get user input.
cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

In the following example, the user can input a number, which is stored in the variable x. 
Then we print the value of x:

int x; 
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value

Creating a Simple Calculator
In this example, the user must input two numbers. Then we print the sum by calculating (adding) the two numbers:

int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum;

C++ Data Types

int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String

The + operator can be used between strings to add them together to make a new string. This is called concatenation:

Example
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName;

A string in C++ is actually an object, which contain functions that can perform certain operations on strings. For example, you can also concatenate strings with the append() function:

Example
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName;

C++ uses the + operator for both addition and concatenation.

Numbers are added. Strings are concatenated.
