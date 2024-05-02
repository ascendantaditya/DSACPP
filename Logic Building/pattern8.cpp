/*
Pattern :-
        *
      * * *  
    * * * * * 
  * * * * * * *
* * * * * * * * *

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k,n = 5; // number of lines
    for ( i = 1; i <= n; i++) {
        // print spaces
        for ( j = i; j < n; j++) {
            cout << "  "; // two spaces for each missing *
        }
        // print asterisks
        for (k = 1; k <= (2*i-1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
}


