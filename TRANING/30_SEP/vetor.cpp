/* OUTPUT
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

    int i=0;
    while(i != v.size()){
        // iterator
        // for (auto i:v) iska v mtlb same output

        cout<<v[i]<<" ";
        i++;

    }
            return 0;        
}

