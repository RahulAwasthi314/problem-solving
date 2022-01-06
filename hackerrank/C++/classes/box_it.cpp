/**
 * @file box_it.cpp
 * @author Rahul Awasthi (awasthir@pm.me)
 * 
 * @brief 
 * Try out the problem here:
 * https://www.hackerrank.com/challenges/box-it/
 * 
 */


#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//

class Box {
    private:
        int l, b, h;
        
    public:
        Box() {
            l = 0;
            b = 0;
            h = 0;
        }
        
        Box(int len, int bre, int hei) {
            l = len;
            b = bre;
            h = hei;
        }
        
        Box(const Box &B) {
            l = B.l;
            b = B.b;
            h = B.h;
        }
        
        int getLength() {
            return l;
        }
        int getBreadth() {
            return b;
        }
        int getHeight() {
            return h;
        }
        
        long long CalculateVolume() {
            return (long long)(l) * b * h;
        }
        
        bool operator <(const Box &B) {
            if (this->l < B.l) {
                return true;
            }
            else if (this->b < B.b && this->l == B.l) {
                return true;
            }
            else if(this->h < B.h && this->b == B.b && this->l == B.l) {
                return true;
            }
            else {
                return false;
            }
        }
        friend ostream &operator<<(ostream &output, Box &B) {
            output << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
            return output;
        } 
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}