#include<bits/stdc++.h>
using namespace std;

void doSomething(string &s) {//just attack an amberson with the range
    s[0] = 'm';
    cout << s;

}
int main() {
    string s = "aditya";
    doSomething(s);
    cout << s << endl;
    return 0; //it will return the value again and again because it got stored there
    //or you want to take the value out of the address
