//OUTPUT:- "A" 


#include <iostream>
using namespace std;

class btech {
    public:
     int roll;
     float cgpa;
     char section;

// btech (char s): section (s) {} //parameterized constructor
     
     btech(char s){
           section= s;
    }
};

int main() {
    btech obj ('A');
    cout<<obj.section << endl;

    return 0;
}