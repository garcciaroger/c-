#include <iostream>
#include <string>
using namespace std;

void CreateAccount(string);

int main(){
    string Username;
    CreateAccount(Username);

    

}

void CreateAccount(string Username){
    //Create a username for the account
    cout << "Create a user name " << endl;
    cin >> Username;

    //Create a password for the account
    string password;

    //Set up password requirements
    //minimum 10 characters, 3 Numbers and 1 Special Character
    cout << "Create a password" << endl;
    cout << "Must contain: Minimum 10 Characters" << endl;

    // cout << "Must contain: Minimum 3 numbers and 1 Special Character" << endl;
    cin >> password;

    //Checks to see if password meets the minimum requiremnts
    do{
        if(password.length() < 10)
        {
            cout << "Password does not meet the requirements." << endl;
            cout << "Please Enter New Password" << endl;
            cin >> password;
        }
    }
    while(password.length() < 10);

    //Print out user account information
    cout << "Username: " << Username << endl;
    cout << "Password: " << password << endl;
}
