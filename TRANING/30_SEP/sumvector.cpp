/* OUTPUT
   117
8 9 10 20 30 40
*/


#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <int> v={8,9};

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.pop_back();
    v.pop_back();

    int sum=0;
    for (auto i:v) {
        sum =sum+i;
    }
    cout<<sum<<endl;

    for (auto i:v) {
        cout<<i<<" ";
    }
            return 0;        
}

