#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector<int> vector1 {};
    vector<int> vector2 {};

    //Adding to vector one
    int add_to_vector_one;

    cout << "\nAdd 10 to vector 1" << endl;
    cin >> add_to_vector_one;
    vector1.push_back(add_to_vector_one);

    cout << "\nAdd 20 to vector 1" << endl;
    cin >> add_to_vector_one;
    vector1.push_back(add_to_vector_one);

    //display the elements
    cout << endl;
    cout << "Index 1 on vector 1 is " <<vector1.at(0) << endl;
    cout << "Index 2 on vector 1 is " <<vector1.at(1) << endl;
    cout << "There are now " << vector1.size() << endl;

    //Adding to vector two
    int add_to_vector_two;

    cout <<"\nAdd 100 and 200 to vector2" << endl;
    cin >> add_to_vector_two;
    vector2.push_back(add_to_vector_two);
    cin >> add_to_vector_two;
    vector2.push_back(add_to_vector_two);

    //display the elements
    cout << endl;
    cout << "Index 1 on vector 2 is " <<vector2.at(0) << endl;
    cout << "Index 2 on vector 2 is " <<vector2.at(1) << endl;
    cout << "There are now " << vector2.size() << endl;


    //creating a 2D Vector
    vector<vector<int>>vector_2d {};

    //adding vector1 to vector 2d
    vector_2d.push_back(vector1);
    //adding vector2 to vector 2d
    vector_2d.push_back(vector2);
    //we are going to display out the elements
    cout << "\nThe elements of the 2D array are: " << endl;
    cout << vector_2d.at(0).at(0) << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << vector_2d.at(1).at(1) << endl;
    //We are going to change the vector_2d element 0
    vector1.at(0) = 1000;
    
    cout << "\nvector_2d" << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
    
    //Display the elements in vector 1
    cout << "\nvector1: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;
    cout << "Vector1 contains " << vector1.size() << " elements" << endl;





    





}