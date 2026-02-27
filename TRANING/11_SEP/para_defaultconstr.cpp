/*OUTPUT :--  I am default constructor: 
               I am parameterized constructor:*/


#include <iostream>
using namespace std;

class btech {
    public:
     int roll;
     float cgpa;
     char section;
     
     btech(char s){
           section= s;
cout<< " I am parameterized constructor: "<<endl;
     }
btech(){
cout<< " I am default constructor: "<<endl;
}
};
int main() {
    btech obj1;
    btech obj2('A');

    return 0;
}