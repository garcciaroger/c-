#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int total{0};
    int num1{}, num2{}, num3{};
    const int count{3};

    cout << "Enter 3 integers " << endl;
    cin >> num1 >> num2 >> num3;

    total = num1+num2+num3;
    double average{0.0};

    average = static_cast<double>(total)/count;
    //average = (double)total/count; // old style

    cout << "Sum of the three is " << num1 << "," << num2 << "," << num3 << endl;
    cout << "The numbers is " << total << endl;
    cout << "The average number is " << average << endl;

    //Testing for eqaulity
    bool equal_result(false);
    bool not_equal_result(false);

    //comparing integers
    int number1{}, number2{};
    cout <<"Enter 2 integers seperated by a space " << endl;
    cin >> number1 >> number2;
    equal_result = (number1==number2);
    not_equal_result = (number1!=number2);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparsion result(not equals): " << not_equal_result << endl;


    //comparing char characters
    char char1{}, char2{};
    cout << "Enter 2 character separated by a space " << endl;
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1!=char2);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparsion result(not equals): " << not_equal_result << endl;
}