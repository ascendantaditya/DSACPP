/* 
Patterns :- Almost more of the patterns works on nested loops

(1). For the outer loop, count the no.of lines
nested means-> outer and inner

(2). For the inner loop, focus on the coloumns and connect them somehow to the rows

(3). Print them '*' inside the inner for loop

(4). Observe symmentry {this step is an optional step}

*/


/*
First Pattern 
* * * *
* * * *
* * * *
* * * *
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main () {
    int i,j;
    for ( i = 0 ; i < 4; i++) { //outer loop 'i' refers to row 'j' refers to coloumn
        for ( j = 0 ; j< 4; j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
*/

// So , here if you wanted to print this kinda pattern using somethings which takes input from the user
// or like how many lines you'want to print this things
#include<bits/stdc++.h>
using namespace std;

void print1(int n) {
    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
 
int main() {
    int n;
    cin >> n;
    print1(n);
}



