#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

void myFunction(string fname){
    cout << fname << endl;
}


int main(){
    myFunction("Roger");
    myFunction("Garcia");
    myFunction("GT500");

    return 0;
}