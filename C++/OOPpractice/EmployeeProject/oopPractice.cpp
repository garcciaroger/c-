#include "classFile.h"
#include <iostream>
using namespace std;

int main()
{
    //Adding to the class and attributes
    Employee employee1 = Employee("Roger Garcia", "Amazon", "Senior Software Engineer", 24); //Constructors
    Employee employee2 = Employee("Michael Ballack", "Google", "Jr. Software Engineer", 22); //Constructors
    Employee employee3 = Employee("John Elliot", "Facebook", "Data Scientist", 31);//constructors
    Employee employee4 = Employee("Adrian Chu", "Apple", "Database Administer", 24);//constructors
    Employee employee5 = Employee("Ellis Dickson", "Microsoft", "Fullstack Developer", 31);//constructors

    //Calling the method
    employee1.IntroduceYourSelf();
    cout << endl;
    employee2.IntroduceYourSelf();
    cout << endl;
    employee3.IntroduceYourSelf();
    cout << endl;
    employee4.IntroduceYourSelf();
    cout << endl;
    employee5.IntroduceYourSelf();
    cout << endl;
    //Eaxmple of calling from ecapsulation
    // employee1.setAge(27);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    //Salary Based on position
    employeeSalary SeniorSalary = employeeSalary(175000, 75000, 150000, 35000);
    //Display Employee Name and total compensation
    employee1.IntroduceYourSelf();
    SeniorSalary.totalCompensation();






}


