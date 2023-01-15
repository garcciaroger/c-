#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

int main(){
    //Strings are used to store text
    string greetings = "Hello Roger";
    cout << greetings << endl;

    //Concatenation strings
    string firstName = "Roger";
    string lastName = "Garcia";
    string fullname = firstName + " " + lastName;
    cout << fullname << endl;

    //**Append Strings
    //use append() to concatenate strings
    string city = "Seattle ";
    string teamName = "Seahawks";
    string fullteamname = city.append(teamName);
    cout << fullteamname << endl;

    //Numbers and Strings
    //**You cannot add a number to a string
    //**Add 2 numbers = will be a number
    //**Add 2 strings you get string concatenation

    int x = 5;
    int y = 10;
    int z = x+y; //Number example
    cout << z << endl;

    string q = "John ";
    string w = "Homer";
    string e = q + w; //String Example
    cout << e << endl;

    //String length
    //you can use length() or size()
    string text = "qwertyuiopasdfghjkl";
    cout << "Length of text is " << text.length() << endl;

    //Acess string characters
    string myString = "Hello";
    cout << myString[2] << endl;

    //Change the character of a string
    string changeMyString = "Hello";
    changeMyString[0] = 'J';
    cout << changeMyString << endl;

    //user input strings
    //cin considers a empty space as a terminating character(Displays a single word)
    //use getline() to read a whole line of text
    string carModel;
    cout << "Type the car model" << endl;
    getline (cin, carModel);
    cout << "The car model is: " << carModel;
    
    //Math Functions
    cout << max(5,20) << endl; //Finds the highest value
    cout << min(5,20) << endl; //Finds the lowest value

    cout << sqrt(64);
    cout << round(32.453);
    cout << log(4);

    //Booleans
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)

    int x = 10;
    int y = 9;
    cout << (x > y); // returns 1 (true), because 10 is higher than 9


    //Real Life Example
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    cout << "Old enough to vote!";
    } else {
    cout << "Not old enough to vote.";
    }


    return 0;
}