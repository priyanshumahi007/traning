/* OUTPUT
   21:45
   Tue Sep 16 21:45:28 2025 
(9 bajkar 45 min with date ke sath par run karaye then output current diya)
*/


#include<iostream>
#include<time.h>
using namespace std;
  
int main(){
    
    time_t t;
    struct tm* current;

    time( &t );
    current = localtime( &t );

    cout<< current->tm_hour<<":"<< current->tm_min<<endl;
    cout<< ctime(&t);

    return 0;
}