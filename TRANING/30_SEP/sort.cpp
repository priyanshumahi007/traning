/* OUTPUT
   16 20 37 50 120 
*/

#include<iostream>
#include<vector>
#include<algorithm>  //for sort
using namespace std;

int main(){

   vector<int> v={20, 50, 16, 37, 120};
   
   sort(v.begin(), v.end());
   for(auto i:v)
    cout<<i <<" ";
    return 0;
}