#include<bits/stdc++.h>
using namespace std;
// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase the readablity
// Functions are used to use same code multiple times
/*
Functions we're gonna study about
1. Void -> which doesn't returns anything
2. return -> 
3. parametrised
4. non parameterised

void printName() {
    cout << "Hey Aditya!";
}   
int main() {

    return 0;
}

//right now this code wont run or run but show nothing
*/

//for making it working we need to define the function into the int main function
void printName(string name) { // this function is void as well as parameterised
    cout << "Hey "<< name << endl;
}

int main() {
    string name;
    cin >> name;
    printName(name);

    //for using the name again and again

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}

