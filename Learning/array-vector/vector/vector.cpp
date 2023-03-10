#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    /*
    ways to declare vectors
    ***All elements are set to zero

    vector <char> vowles (5);
    vector <int> test_scores (10);

    vector <double> hi_temp (365, 80.0)
    ---This creates 365 doubles with initliazation to 80 degrees


    you can access elements in vectors by
    -- at(element_index)
    -- vector_name [element_index]

    Vectors grow using pushback method
    -- test_scores.push_back(90);
    -- test_scores.push_back(80);
    */


    //vector <char> vowels; // empty
    //vector <char> vowels (5); // 5 init to zero
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    
    vector <int> test_scores{100,98,89};

    //This is array sytax
    cout << "\nTest scores using array syntax" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    //This is using vector syntax
    cout << "\nTest scores using vector syntax " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "There are " << test_scores.size() << " scores in the vector" << endl;

    //add to the test scores
    cout << "\nAdd to test scores" << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    //Expand the array
    cout << "Enter a score to add to the vector" << endl;
    int score_to_add{0};
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\nEnter one more score to add to the vector " << endl;
    cin >> score_to_add;
    test_scores.push_back(score_to_add);

    cout << "\n There are now " << test_scores.size() << " scores in the vector" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    //This will cause an error
    //cout << "Cause an error " << test_scores.at(10) << endl; 
    vector <vector<int>>movie_ratings
    {
        {1,2,3,4},
        {1,2,4,4},
        {1,3,4,5}
    };

    cout << "\nHere are movie ratings for reviewer #1 using array syntax " << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are movie ratings for reviewer #1 using vector syntax " << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
}