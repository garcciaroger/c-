#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;


void myFunction(){
    cout << "New function" << endl;
    //must be declared before main function
}

void declarationfunction(); // declaration function

int main(){
    //function is a block of code that will run only when called
    //you can pass parameters(data) into a function
    //void means function has no return value

    myFunction();
    myFunction();
    myFunction();
    declarationfunction();

    return 0;
}

void declarationfunction(){ //excecuted part
    cout << "Dec. Function" << endl;
}