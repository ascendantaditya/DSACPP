/*
Pattern 11:
        *
      * * *  
    * * * * * 
  * * * * * * *
* * * * * * * * * 
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k;
    for ( i = 1; i <=5 ; i++) {
        // print spaces
        for ( j= i; j < 5; j++) {
            cout << "  ";
        }
        // print asterisks
        for ( k = 1; k <= (2*i-1); k++) {
            cout << "* ";
        }
        cout << endl;
    }

    for ( i = 5 - 1; i>= 1; i--) {
        // print spaces
        for ( j = 5; j > i ; j--) {
            cout << "  ";
        }
        // print asterisks
        for (k = 1; k<= (2*i-1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
}