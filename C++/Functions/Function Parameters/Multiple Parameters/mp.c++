#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

void myFunction(string firstName, int age){
    cout << firstName << age << " Years Old" << endl;
}

int main(){
    myFunction("Roger ", 24);
    myFunction("Degan ", 36);
    myFunction("Holle ", 29);

    return 0;
}