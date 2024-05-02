// Take two numbers and print its sum

#include<bits/stdc++.h>
using namespace std;

int sum(int num1,int num2) {
    int num3 = num1 + num2; // 5 + 6 = 11
    return num3;//it will returns 11 here
}

int main() {
    int num1,num2;
    cin >> num1 >> num2;
    int res = sum(num1,num2);//here when it gets 11 , 
    cout << res;//that 11 goes and stores into res
    
    /* 
    int num3 = num1 + num2;
    cout << "The Sum is : " << num3 << endl;
    */


    return 0;
}

