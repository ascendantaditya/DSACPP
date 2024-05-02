#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Aditya" << endl;

    /*
    How does for loop works
    for(int i = 1 ; i<=10 ; i = i + 1);
    for(initialisation, condition where the loop should stop , how much you want to incremenet or decrement)
    variable declaration is i = 1
    if you not defines the increment and decrement the loop will run continuoulsy.
    */

     //How loop works 
     // i = 1 , i + 1 = 1 + 1 = 2
     // i = 2 , i + 1 = 1 + 2 = 3
     // i = 3 , i + 1 = 1 + 3 = 4
    
    int i;
    //Both of this 2 conditions will work fine 
    for(i = 1;i <= 10; i = i + 1){   

    // for(int i = 1; i<=10; i = i + 1) {

        cout << "Aditya" << endl;
    }

    //Here if you print the value of i , it will not take any scope or value of i
    //and will not work fine
    cout << i << endl;



    return 0;
}