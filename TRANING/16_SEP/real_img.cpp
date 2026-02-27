/* OUTPUT
     4i +3
*/


#include<iostream>
using namespace std;
  
 class complex{
    public:
    int real;
    int img;
    void setData(int r, int i){
        real= r;
        img= i;
    }
    void printData(){
        cout<<img<<"i +"<<real<<endl;
    }
 };
int main(){
    complex c;
    c.setData(3,4);
    c.printData();
    return 0;
}