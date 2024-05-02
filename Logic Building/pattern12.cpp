/*
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    int i,j;

    for ( i=0 ; i < 5 ; i++) {
        for( j = 0; j<=i ; j++) {
            cout << "*";
        }
        cout <<  endl;
    }
    for ( i=4 ; i >= 1 ; i--) {
        for( j = 1; j<=i ; j++) {
            cout << "*";
        }
        cout <<  endl;
    }
}
