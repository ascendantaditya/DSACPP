#include<bits/stdc++.h>
using namespace std;

int main() {
    // 2D Array
    int arr[3][5];
  //int arr[rows][columns];

    arr[1][3] = 78;
    cout << arr[1][3] << endl;
    //In arrays we have zero based indexing 
    //2D Arrays used to solve many problems like :
    //1.Matrix Problems
    //2.Graph Problems

    // if you try to print other value then assigned value it'll return garbage value
    cout << arr[1][2];
    return 0;

}