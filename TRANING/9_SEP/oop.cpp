/*  OUTPUT
Roll:2339327
CGPA:8.9
Section:F
Roll:2339324
CGPA:9.5
Section:F
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
    btech priyanshu, niraj;
    priyanshu.roll=2339327;
    niraj.roll=2339324;
    priyanshu.cgpa=8.9;
    niraj.cgpa=9.5;
    priyanshu.section='F';
    niraj.section='F';

    cout<< "Roll:"<< priyanshu.roll<<endl;
    cout<< "CGPA:"<< priyanshu.cgpa<<endl;
    cout<< "Section:"<< priyanshu.section<<endl;
    cout<< "Roll:"<< niraj.roll<<endl;
    cout<< "CGPA:"<< niraj.cgpa<<endl;
    cout<< "Section:"<< niraj.section<<endl;

    return 0;
}
