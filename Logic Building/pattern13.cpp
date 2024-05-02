/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j,k;
    for (i = 1; i<= 5; i++) {
        k = i % 2 == 0 ? 1: 0;
        for ( int j = 1; j<= i; j++) {
            cout << k <<" ";
            k = 1 - k;
        }
        cout << endl;

    }

}