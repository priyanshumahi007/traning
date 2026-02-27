/* OUTPUT
   NOT INSTALL IN VS CODE DYNAMIC & NON;

*/

#include<iostream>
using namespace std;
class btech{
    public:
    int roll;
    float cgpa;
    char section;

};
int main(){
    btech priyanshu; // nondynamic obj
    btech *niraj= new btech; //dynamic obj

    priyanshu.roll=2339327;
    priyanshu.cgpa=8.9;
    priyanshu.section='F';

    niraj->roll=2339324;
    niraj->cgpa=7.5;
    niraj->section='F';

    // cout<< "Roll:"<< priyanshu.roll<<endl;
    // cout<< "CGPA:"<< priyanshu.cgpa<<endl;
    // cout<< "Section:"<< priyanshu.section<<endl;

    cout<< "Roll:"<< niraj->roll<<endl;
    cout<< "CGPA:"<< niraj->cgpa<<endl;
    cout<< "Section:"<<niraj->section<<endl;

    return 0;
}
