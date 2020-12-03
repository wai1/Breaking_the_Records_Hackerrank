/* Breaking_the_Records_Hackerrank.cpp
*  Author: Walt Iddings
*  Date: 12/3/20
* 
*  This program will calculate the number of times a basketball player's
*  points in a game go up or down during a season. An array is provided
*  that represents the points by the player for each game. A problem 
*  statement from HackerRank is provided in the ReadMe file.
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    int maxScore = 0;
    int minScore = 0;
    int maxScoreCounter = 0;
    int minScoreCounter = 0;
    vector<int> results{};
    auto it = scores.begin();

    // Initialize max and min scores
    maxScore = scores[0];
    minScore = scores[0];

    while (it != scores.end()) {
        if (maxScore < *it) {
            maxScore = *it;
            ++maxScoreCounter;
        }
        if (minScore > *it) {
            minScore = *it;
            ++minScoreCounter;
        }
        ++it;
    }

    // Fill in the results array
    results.push_back(maxScoreCounter);
    results.push_back(minScoreCounter);

    return results;
}

int main()
{
    vector<int> scores{ 10, 5, 20, 20, 4, 5, 2, 25, 1 };
    int numberOfGames = scores.size();
    vector<int> highLowChanges{};

    // auto it = scores.begin();
    // vector<int>:: iterator it = scores.begin();  // The longer version of the previous statement

    /*  This section could be used to read in and fill the array
    while (it != scores.end()) {

    }
    */

    highLowChanges = breakingRecords(scores);

    cout << "There were " << highLowChanges.at(0) << " times the highest score increased." << endl;
    cout << "There were " << highLowChanges.at(1) << " times the lowest score decreased." << endl;
}

