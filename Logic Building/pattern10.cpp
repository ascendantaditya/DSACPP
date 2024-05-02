/*
Pattern:-
* * * * * * *
  * * * * *
    * * *
      *
      
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k; // number of lines
    for ( i = 5; i >= 1; i--) {
        // print spaces
        for ( j = 0; j < 5-i; j++) {
            cout << "  "; // two spaces for each missing *
        }
        // print asterisks
        for (k = 1; k <= (2*i-1); k++) {
            cout << "* ";
        }
        cout << endl;
    }
}