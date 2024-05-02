#include<bits/stdc++.h>
using namespace std;

int main () {

    string s = "Aditya"; //Every Character is stored in an index
    //find length of string using this 
    int len = s.size();
    //if you want to change the character of string 
    s[len - 1] = 'S';
    cout << s[len - 1]; //because last indexing is n - 1 
    //cout << s[2];
    return 0;
}