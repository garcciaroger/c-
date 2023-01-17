#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

//void indicates there is no return value
//if you expect a retun value, use int, strings, float ect. and use return

int myFunction(int x){
    return 5 + x;
}

int secondFunction(int z, int c){
    return z + c; 
}

int main(){
    cout << myFunction(3) << endl;
    cout << secondFunction(10, 10) << endl;
    return 0;
}