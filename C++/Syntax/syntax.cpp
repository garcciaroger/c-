#include <iostream>
using namespace std;

//Simple Hello World Program
int main() {
  cout << "Hello World!" << endl;
 

/*
\n\n creates a blank line
endl inserts a new line
*/

//Variables
int mynum = 20;
cout << mynum << endl;

int num = 16;
num = 15;
cout << num << endl;;

//declaring other variables % data types
int number = 5;
double floatNum = 5.25;
char myLetter = 'A';
string myText = "Roger";
bool myBoolean = true;

//adding variables
int x = 10;
int y = 15;
int sum = 0;

sum = x + y;
cout << sum << endl;

//declaring multiple variables
int q = 5, w = 6, e = 8;
cout << q + w + e << endl;

int p,o,i;
p=o=i=50;
cout << p + o + i <<endl;


//constants
//they cannot be changed into something else
const int myConst = 15;
cout << myConst << endl;

//User Iputs
int userNumer = 0;
cout << "Enter a number" << endl;
cin >> userNumer;
cout << "Your number is " << userNumer << endl;





 return 0;
}