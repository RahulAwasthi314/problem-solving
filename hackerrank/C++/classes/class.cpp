/**
 * @file class.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/c-tutorial-class/
 * 
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student {
    private:
        int age;
        int div;
        string f_name;
        string l_name;
    
    public:
   // getter methods implementation
    int get_age() {
        return age;
    }
    int get_standard() {
        return div;
    }
    string get_first_name() {
        return f_name;
    }
    string get_last_name() {
        return l_name;
        
    }
   // setter methods implementation 
   void set_age(int Age) {
      age = Age; 
   }
   void set_standard(int standard) {
       div = standard;
   }
   void set_first_name(string first_name) {
       f_name = first_name;
   }
   void set_last_name(string last_name) {
       l_name = last_name;
   }
   
   string to_str() {
       string s = to_string(age) + "," + f_name + "," + l_name + "," + to_string(div);
       return s;
   }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_str();
    
    return 0;
}
