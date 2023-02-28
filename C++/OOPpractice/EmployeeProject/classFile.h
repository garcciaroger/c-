#include <iostream>
using namespace std;
//Abstraction is "hiding" the complex logic
class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{ // Class
    private:     //Acess specifier
        string Company;     //Attribute of the class
        string Occupation;  //Attribute of the class
        int Age;
    protected:
         string Name;        //Attribute of the class
    public: //Encapsulation is getting acess to private classes
        //Set and Get Name
        void setName(string name){
            Name = name;
        }
        string getName(){
            return Name;
        }
         //Set and Get Company
        void setCompany(string company){
            Company = company;
        }
        string getCompany(){
            return Company;
        }
         //Set and Get Occupation
        void setOccupation(string occupation){
            Occupation = occupation;
        }
        string getOccupation(){
            return Occupation;
        }
         //Set and Get Age
        void setAge(int age){
            if(age>18)
            Age = age;
        }
        int getAge(){
            return Age;
        }
        //Method/Function defined inside the class that will
        //execute when called
        void IntroduceYourSelf(){
            cout << "Name: " << Name << endl;
            cout << "Company: " << Company << endl;
            cout << "Occupation: " << Occupation << endl;
            cout << "Age: " << Age << endl;
        }
        //Constructors
        Employee(string name, string company, string occupation, int age){
            Name = name;
            Company = company;
            Occupation = occupation;
            Age = age;
        }
        //Abstraction class asking for a promotion
        void AskForPromotion(){
            if(Age > 30)
                cout << Name << " got promoted!" << endl;
            else
                cout << Name << " No Promotion for you." << endl;
        }
};

class Developer: public Employee{ // Subclass of Employee (Inheritance)
    public:
        string FavProgrammingLanguage;
        Developer(string name, string company, string occupation, int age, string langaunge)
            :Employee(name, company, occupation, age )
        {
            FavProgrammingLanguage = langaunge;
        }
        void FixBug(){
            cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
        }


};
class Teacher:public Employee{ //Teacher is subclass of employee
    public:
        string Subject;
        void prepareLesson(){
            cout << Name << " is preparing " << Subject << " lesson " << endl;
        }
        Teacher(string name, string company, string occupation, int age, string subject)
            :Employee(name, company, occupation, age)
        {
            Subject = subject;
        }
        
};


class employeeSalary{
    private:
        int baseSalary;
        int signOnBonus;
        int stocks;
        int incentives;
    public:
        //Base Salary
        void setBaseSalary(int salary){
            baseSalary = salary;
        }
        int getBaseSalary(){
            return baseSalary;
        }
        //Sign on Bonus
        void setSignOnBonus(int bonus){
            signOnBonus = bonus;
        }
        int getSignOnBonus(){
            return signOnBonus;
        }
        //Stocks
        void setStocks(int stock){
            stocks = stock;
        }
        int getStocks(){
            return baseSalary;
        }
        //incentives
        void setIncentives(int incent){
            incentives = incent;
        }
        int getIncentives(){
            return incentives;
        }
    void totalCompensation(){
        //Calculate total compensation
        double totalComp = baseSalary + signOnBonus + stocks + incentives;

        cout << "Base Pay   :   $" << baseSalary  << endl;
        cout << "Sign-on    :   $" << signOnBonus << endl;
        cout << "Stocks     :   $" << stocks << endl;
        cout << "Incentives :   $" << incentives << endl;
        cout << "Total Compensation:  $" << totalComp << endl;
    }
    employeeSalary(int salary, int bonus, int stock, int incent){
        baseSalary = salary;
        signOnBonus = bonus;
        stocks = stock;
        incentives = incent;
    }
};

