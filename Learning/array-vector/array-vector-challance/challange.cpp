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


}