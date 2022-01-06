/**
 * @file classes_objects.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/classes-objects/
 * 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
    // instance var scores to hold 5 scores.
    private:
        vector<int> scores;
    // void input() function or getter method to get all scores.
    public:
        void input() {
            int score;
            for(int i = 0; i < 5; ++i) {
                cin >> score;
                scores.push_back(score);
            }
        }
        int calculateTotalScore() {
            int sum = 0;
            for(int i : scores) {
                sum += i;
            }
            return sum;
        }
    
    // int calculateTotalScore() to return the sum of student's scores.
    
    
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
