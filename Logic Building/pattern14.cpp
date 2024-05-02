/*
1             1
1 2         2 1
1 2 3     3 2 1
1 2 3 4 4 3 2 1
*/

#include<bits/stdc++.h>
using namespace std;

int main () {
    int i, j, k;
    // Outer loop for each line
    for (i = 1; i <= 4; i++) {
        // First inner loop prints numbers from 1 to i
        for (j = 1; j <= i; j++) {
            cout << j << " "; // Print the number and a space
        }
        // Second inner loop prints spaces to create the gap in the middle
        // The number of spaces is calculated as 8 - 2 * i
        for (k = 8 - 2 * i; k > 0; k--) {
            cout << "  "; // Print two spaces (one for the number and one for the space after the number)
        }
        // Third inner loop prints numbers from i to 1
        for (j = i; j >= 1; j--) {
            cout << j << " "; // Print the number and a space
        }
        // Print a newline character to move to the next line
        cout << endl;
    }
}