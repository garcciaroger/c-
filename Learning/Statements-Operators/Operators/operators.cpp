#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int num1 {10};
    int num2 {20};
    
    num1 = num2 = 1000; //Assignment operator

    cout << "num1 is " << num1 << endl;
    cout << "num1 is " << num2 << endl;
    cout << endl;



    /*
    + addition
    - subtraction
    / division
    % modulo or remainder (only works with ints)
    */


   int number1 {200};
   int number2 {100};

   cout << number1 << " + " << number2 << " = " << number1+number2 << endl;

   /*
   increment operator ++
   decrement operator --
   
   increment or derement it's operand by 1
   used with integers, floating point and pointers
   
   prefix ++num
   postfix num++

   !!never use it for the same variable in the same statement
   */
  int counter{10};
  int result{0};

  //example 1 - simple increment
  cout << "\nCounter: " << counter << endl; //10
  counter = counter + 1; //11
  cout << "Counter: " << counter << endl;
  counter++; //12
  cout << "Counter: " << counter << endl;
  ++counter; //13
  cout << "Counter: " << counter << endl;

  //example 2 - preincrement
  int counterTwo {10};
  int resultTwo {0};

  cout << "\nExample Two" << endl;  
  cout << "Counter: " << counterTwo << endl; //10

  resultTwo = ++counterTwo; //Note: pre increment. This will 11
  cout << "Counter: " << counterTwo << endl; // 11
  cout << "Result: " << counterTwo << endl; // 11

  //example 3 - post increment
  int counterThree {10};
  int resultThree {0};

  cout <<"\nExample Three" << endl;
  cout << "Counter: " << counterThree << endl; //10
  resultThree = counterThree++;
  /*
  resultThree = counterThree;
  counterThree = counterThree + 1;
  */
  cout << "Counter: " << counterThree << endl; //11
  cout << "Result: " << resultThree << endl; //10

  //Example Four
  int counterFour{10};
  int resultFour{0};

  cout <<"\nExample Four" << endl;
  cout <<"Counter: " << counterFour << endl;

  resultFour = ++counterFour + 10; //Pre increment
  /*
  counter = counter + 1
  result = counter + 10
  */

  cout << "Counter: " << counterFour << endl; //11
  cout << "Result: " << resultFour << endl;//21




  //Example Five
  int counterFive{10};
  int resultFive{0};

  cout << "\nExample Five" << endl;
  cout << "Counter: " << counterFive << endl; //10

  resultFive = counterFive++ +10; //Post Increment
  /*
  result = counter(10) + 10
  counter = counter(10) + 1
  */

  cout <<"Counter: " << counterFive << endl; // 11
  cout <<"Result: " << resultFive << endl; //20













   

    return 0;
}