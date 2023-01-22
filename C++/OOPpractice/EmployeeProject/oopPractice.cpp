#include "classFile.h"
#include <iostream>
using namespace std;

int main()
{
    //Adding to the class and attributes
    Employee employee1 = Employee("Roger Garcia", "Amazon", "Senior Software Engineer", 24); //Constructors
    Employee employee2 = Employee("Michael Ballack", "Amazon", "Software Engineer L4", 22); //Constructors
    Employee employee3 = Employee("John Elliot", "Amazon", "Data Scientist L4", 31);//constructors
    Employee employee4 = Employee("Adrian Chu", "Amazon", "Senior Database Administer", 24);//constructors
    Employee employee5 = Employee("Ellis Dickson", "Amazon", "Fullstack Developer L5", 31);//constructors

    // //Calling the method
    // employee1.IntroduceYourSelf();
    // cout << endl;
    // employee2.IntroduceYourSelf();
    // cout << endl;
    // employee3.IntroduceYourSelf();
    // cout << endl;
    // employee4.IntroduceYourSelf();
    // cout << endl;
    // employee5.IntroduceYourSelf();
    // cout << endl;
    //Eaxmple of calling from ecapsulation
    // employee1.setAge(27);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;

    //Salary Based on position
    employeeSalary SeniorSWESalary = employeeSalary(175000, 75000, 150000, 35000);
    employeeSalary L4SWE = employeeSalary(125000, 25000, 75000, 10000);
    employeeSalary L4DS= employeeSalary(110000, 15000, 75000, 7500);
    employeeSalary SeniorDBA = employeeSalary(165000, 70000, 130000, 25000);
    employeeSalary L5FSD = employeeSalary(140000, 50000, 125000, 15000);

    //Display Employee Name and total compensation
    //Salary compensation for Roger Garcia
    employee1.IntroduceYourSelf();
    SeniorSWESalary.totalCompensation();
    cout << endl;
    //Salary compensation for Michael Ballack
    employee2.IntroduceYourSelf();
    L4SWE.totalCompensation();
    cout << endl;
    //Salary compensation for John Elliot
    employee3.IntroduceYourSelf();
    L4DS.totalCompensation();
    cout << endl;
     //Salary compensation for Adrian Chu
    employee4.IntroduceYourSelf();
    SeniorDBA.totalCompensation();
    cout << endl;
     //Salary compensation for Ellis Dickson
    employee5.IntroduceYourSelf();
    L5FSD.totalCompensation();
    cout << endl;
    
        





}


