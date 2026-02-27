// OUTPUT :- 'F'


#include <iostream>
using namespace std;

class btech {
    public:
     int roll;
     float cgpa;
     char section;

// initializer list
     
     btech(): section ('F') {}
};

int main() {
    btech obj;
    cout<<obj.section << endl;

    return 0;
}