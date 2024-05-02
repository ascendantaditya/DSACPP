#include<bits/stdc++.h>
//when to use array : when you've singular datatype being stored multiple times
using namespace std;

int main() {
    /*
    //one way to store them is 
    when the data is limited you can use this 
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    */

   /*
   When you have large amount of data you can directly use array
   */

  int arr[5];
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

  arr[3] += 10;//for adding something throughout using the array

  arr[4] = 10; //for changing the given integer at a place

  cout << arr[3] << endl;
  cout << arr[4];
    return 0;
}


/*
Whatever datatype you stored it has to be constant by using itself when need
*/