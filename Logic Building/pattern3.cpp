/*
Pattern Was like
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    for ( int i = 1; i <= 5 ; i++){
        for (int j = 1 ; j <= i ; j++) {
            cout << j << " ";
        }
        cout << endl;

    }
}