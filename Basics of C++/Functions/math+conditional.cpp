#include<bits/stdc++.h>
using namespace std;

int maxx(int num1,int num2) {
    // 5 >= 6
    if(num1 >= num2) {
        return num1;
    } 

    return num2;
    // the function here looking for a return line
    // that's why its giving you the garbage value
    //else return num2;
}

int main() {
    int num1,num2;
    cin >> num1 >> num2;
    int minimum  = maxx(num1,num2);
    cout << minimum;
    return 0;
}