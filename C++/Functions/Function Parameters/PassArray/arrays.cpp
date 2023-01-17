#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

void myFunction(int myNumbers[5]){
    for(int i = 0; i < 5; i++){
        cout << myNumbers[i] << endl;
    }
}

int main() {
    int myNumbers[5] = {10,20,30,40,50};
    myFunction(myNumbers);
    return 0;
}

