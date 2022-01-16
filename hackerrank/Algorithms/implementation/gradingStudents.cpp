/**
 * @file gradingStudents.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * try out the problem here:
 * https://www.hackerrank.com/challenges/grading
 * 
 */

#include <bits/stdc++.h>

using namespace std;
string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    vector <int> new_grades;
    
    for (auto i : grades) {
        if (i < 38) {
            new_grades.push_back(i);
            continue;
        }
        // LAST DIGIT
        int x2 = i % 10;
        // remaining number
        int x1 = i - x2;

        // if last digit is 5 or 10
        if (x1 == 5 or x1 == 10) {
            new_grades.push_back(i);
        }
        else {
            int x3;
            if (x2 >= 1 and x2 < 5) {
                x3 = x1 + 5;
            }
            else {
                x3 = x1 + 10;
            }
            if (x3 - i < 3) {
                new_grades.push_back(x3);
            }
            else {
                new_grades.push_back(i);
            }
        }
    }
    return new_grades;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
