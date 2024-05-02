
// Before moving to containers we need to know about pairs
// Pairs
//--> They lies inside the utility library 
// They're also a kind of datatypes

// They're called as first and second

//{____,_____}
//  ^     ^
//  |     |
// first, second
void explainPair() {
    pair<int , int> p = {1,3};//it simply stores p = {1,3}

    cout << p.first << " " << p.second;

    pair<int, pair<int , int >> p = { 1, {3,4}};//a pair can use to store 2 integer int it only

    cout << p.first << " " p.second.second/*It's actually 4*/ << " " <<p.second.first/*Where it's actually 3*/;

    pair<int,int> arr[] = { { 1,2}, {2,5}, {5,1}};
    // I N D E X -------->      0  ,  1  ,   2

    cout << arr[1].second;
}