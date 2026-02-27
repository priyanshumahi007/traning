/*  OUTPUT

8
14
8
14

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v= {8, 9, 10, 11, 12, 13, 14};

    //v.clear(); it delete all the element of the vector

    cout<< v.front() <<endl;  //8
    cout<<v.back() <<endl;   //14

    cout <<*(v.begin() )<<endl;   //8 it return 
    cout <<*(v.end()-1)<<endl;  //14
    return 0;
}