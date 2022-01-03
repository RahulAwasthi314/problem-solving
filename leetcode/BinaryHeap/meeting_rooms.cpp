#include <bits/stdc++.h>

using namespace std;

/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Interval {
    public:
     int start, end;
     Interval(int start, int end) {
         this->start = start;
         this->end = end;
     }
};

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */

    // for sorting the arrays based it's start time
    struct returnLess {
        bool operator() (const Interval& a, const Interval& b) {
            return a.start < b.start;
        }
    } myObj;

    // for making min_heap by comparing endtime
    struct comp {
        bool operator() (const Interval& a, const Interval& b) {
            return a.end > b.end;
        }
    };
    
    
    int minMeetingRooms(vector<Interval>& intervals) {
        // i will sort the vector<vector> based on it's start time
        sort(intervals.begin(), intervals.end(), myObj);

        // check the meeting times are sorted or not
        for (auto i : intervals) {
            cout << i.start << " " << i.end << endl;
        }

        // make a priority queue of min heap type based on meeting end time
        priority_queue<Interval, vector<Interval>, comp> min_heap;


        int meeetingCount = 0;
        for (auto interval : intervals) {
            while (!min_heap.empty() && interval.start >= min_heap.top().end) {
                min_heap.pop();
            }
            min_heap.push(interval);
        }

        cout << "Total meetings: " << intervals.size() << endl;
        cout <<  "min meeting rooms: "<< min_heap.size() << endl;
        return min(intervals.size(), min_heap.size());
    }

};
int main() {
    vector<Interval> s = {Interval(4, 5), Interval(3, 5), Interval(2, 3), Interval(2, 4)};

    // make an instance of object to call it's non static behaviours
    Solution a;

    int x = a.minMeetingRooms(s);
    cout << "Min number of meeting rooms req: " << x << endl;
    return 0;
}