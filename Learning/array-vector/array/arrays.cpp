#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    //modifying arrays and changing the index
    int test_scores[5] {100,90,80,70,60};

    cout  << "1st index " << test_scores[0] << endl; 
    cout  << "2st index " << test_scores[1] << endl; 
    cout  << "3st index " << test_scores[2] << endl; 
    cout  << "4st index " << test_scores[3] << endl; 
    cout  << "5st index " << test_scores[4] << endl; 

    cout << "\nEnter 5 test scores" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];

    cout  << "\n1st index " << test_scores[0] << endl; 
    cout  << "2st index " << test_scores[1] << endl; 
    cout  << "3st index " << test_scores[2] << endl; 
    cout  << "4st index " << test_scores[3] << endl; 
    cout  << "5st index " << test_scores[4] << endl; 

    //Multi dimenstion arrays
    int movie_ratings[3][4]{ //Row(3), then colum(4)
        {0,4,3,5},
        {2,3,3,5},
        {1,4,4,5}
    }; 
    cout << movie_ratings[1][3] << endl;    
}
