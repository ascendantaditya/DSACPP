// Pass by value 
// Here the value you assigned to main is not gonna changed
//it will remain same

#include<bits/stdc++.h>
using namespace std;


void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;

}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0 ;
    /* it returns the output as 
    10
    15 //It because of pass by value
    20
    10
    */

}