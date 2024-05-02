/*
Pattern :-

1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1

*/


#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,j;
    for(i = 5; i >= 1; i--) {
        for (j = 1; j<=i ; j++ ) {
            cout << j;

        }

        cout << endl;
    }
}