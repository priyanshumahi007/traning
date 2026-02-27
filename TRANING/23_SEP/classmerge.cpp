/* OUTPUT = G1+G2 */



#include <iostream>
using namespace std;

class merge {
    public:
     int vineetsir;
     float tarunsir;
     string group; //Char single output de skta hai "G", but string multipe "G1+G2"

// initializer list
     
     merge():group ("G1+G2") {}
};

int main() {
    merge obj;
    cout<<obj.group << endl;

    return 0;
}