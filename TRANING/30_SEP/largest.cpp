/*
OUTPUT
10
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){

   vector<int> v={2, 5, 6, 7, 10};
   int largest=v[0];
   for(auto i:v){
    if(largest<i){
        largest=i;
    }
   }
    cout<<largest;
    return 0;
}