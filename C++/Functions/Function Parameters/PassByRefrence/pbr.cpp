#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

//pass by refrence is used when you want to pass a value that will be changes

void swapNums(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

int main(){
    int num1 = 10;
    int num2 = 20;

    cout << "Before sawp: " << endl;
    cout << num1 << num2 << endl;

    //call the function
    swapNums(num1, num2);

    cout << "After swap: " << endl;
    cout << num1 << num2 << endl;



    return 0;
}