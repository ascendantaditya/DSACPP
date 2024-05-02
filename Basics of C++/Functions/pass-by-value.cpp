#include<bits/stdc++.h>
using namespace std;

void doSomething(string s) {
    s[0] = 'm';
    cout << s;

}
int main() {
    string s = "aditya";
    doSomething(s);
    cout << s << endl;
    return 0; //it'll for sure return the first assigned value
}

//output of this code is like 
// mdityaaditya