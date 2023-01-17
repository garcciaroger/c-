#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

void myFunction(string country = "Germany"){
        cout << country << endl;
    }

int main(){
    //Default parameter value is used "="
    //function without an argument will use default value

    myFunction("Italy");
    myFunction("Spain");
    myFunction();
    myFunction("Argentina");
   
    return 0;
}

