/* OUTPUT
   12:30:45
*/


#include<iostream>
#include<time.h>
using namespace std;
  
 class Time{
    public:
    int hr;
    int min;
    int sec;
    Time (int h, int m, int s){
        hr= h;
        min= m;
        sec= s;
    }
    void printTime(){
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
 };
int main(){
    Time t(12,30,45);
    t.printTime();
    return 0;
}