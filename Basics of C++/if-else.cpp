#include<bits/stdc++.h>
using namespace std;
/*
Write a program that takes an input of age
and prints if you are adult or not 
>= 18, yes
< 18, no
*/

int main() {
    int age;
    cout << "Enter your Age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You're an Adult" << endl;
    } else {
        cout << "You're Baccha" << endl;
    }

    return 0;
}
    