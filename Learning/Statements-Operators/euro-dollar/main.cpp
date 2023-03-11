#include <iostream>
using namespace std;

int main(){
    double euro{0};
    double dollarRate{1.06};

    cout << "This project will convert euros to dollar." << endl;
    cout << "Enter Euros " << endl;
    cin >> euro;

    double totalDollar = euro*dollarRate;
    
    cout <<"Converstion from Euro to USD " << endl;
    cout <<"Total Euro: $" << euro << endl;
    cout <<"Total Dollar: $" << totalDollar << endl; 

    double euroRate{0.93};
    double dollar{0};

    cout << "This project will convert dollar to euro." << endl;
    cout << "Enter Dollar " << endl;
    cin >> dollar;

    double totalEuro = dollar*euroRate;
    cout <<"Converstion from USD to Euro " << endl;
    cout <<"Total Dollar: $" << dollar << endl;
    cout <<"Total Euro: $" << totalEuro << endl; 



    

    


}