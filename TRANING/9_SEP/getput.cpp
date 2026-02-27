/* OUTPUT
Roll:2339327
CGPA:8.5
Section:F
*/


// #include<iostream>
// using namespace std;
// class btech{
//     public:
//     int roll;
//     float cgpa;
//     char section;

//     public:
//     void putData(int r, float c, char s){
//         roll = r;
//         cgpa = c;
//         section = s;
//     }
//     void getData(){
//         cout<< "Roll:" <<roll <<endl<< "CGPA:" <<cgpa <<endl << "Section:" << section <<endl;
//     }

// };
 
//  int main(){
//     btech* PRIYANSHU = new btech;
//     PRIYANSHU->putData(2339327,8.5,'F');
//     PRIYANSHU->getData();
//     return 0;
//  }

// input get by user

#include<iostream>
using namespace std;

class btech {
    public:
    int roll;
    float cgpa;
    char section;

    void putData() {
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter CGPA: ";
        cin >> cgpa;
        cout << "Enter Section: ";
        cin >> section;
    }

    void getData() {
        cout << "\n--- Student Details ---\n";
        cout << "Roll: " << roll << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Section: " << section << endl;
    }
};

int main() {
    btech* student = new btech;
    student->putData();   // Take input from user
    student->getData();   // Display the data
    delete student;       // Free the allocated memory
    return 0;
}
