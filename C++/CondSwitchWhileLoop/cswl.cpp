#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

int main(){
    //conditional loops
    //Using IF
    if(20>5){
        cout << "20 is greater than 5" << endl;
    }

    int x = 25;
    int z = 40;

    if(40>25){
        cout << "40 is greater than 25" << endl;
    }

    //Using Else
    int time = 1100;
    if(time < 1200){
        cout << "Good Morning" << endl;
    }else{
        cout << "Good Evening" << endl;
    }

    int time2 = 1400;
    if(time2 < 1200){
        cout << "Good Morning" << endl;
    }
    else if(time2 >1200){
        cout << "Good Afternoon" << endl;
    }else{
        cout << "Good Evening" << endl;
    }

    //shorthanf if else
    int votingAge = 24;

    if(votingAge < 18){
        cout <<"You cannot vote"<< endl;
    }else{
        cout <<"You can Vote" << endl;
    }

    string result = (votingAge < 18) ? "You cannot Vote. " : "You CAN vote.";
    cout << result;


    //The switch expression
    //The break keyword breaks out of the block
    //default keyword runs if there is no case avalibale

    int day = 4;
    switch (day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    }

    //While loop
    //Loops through a block of code as long as it's true
    int i = 0;
    while (i < 10){
        cout << i << endl;
        i++;
    }

    //Do/While Loop
    //Will loop code block once before testing out if it's true and repeat as
    //long as it's true
    int v = 0;
    do{
        cout << v << endl;
        v++;
    }
    while (v<5);








}