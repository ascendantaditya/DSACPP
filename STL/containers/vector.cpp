#include<bits/stdc++.h>
#include<vector>


void explainVector() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5, 100); //it'll declare as 5 instances of 100, how?-> {100, 100, 100, 100, 100 }

    vector<int> v(5); // it will declared as 5 instances of garbage value or zero {0 , 0 , 0 , 0 , 0}

    vector<int> v1(5, 20);
    vector<int> v2(v1);//copy of another container of 5 instances of 20


    vector<int>::iterator it = v.begin();

    it++;//it shiftes to next memory whenever it runs till end
    cout << *(it) << " "; //the *(it) will print the next value provide in the memory

    it = it + 2; //shifted directly by 2 to another position
    cout<<*(it) <<" ";


    //Iterators:
    /*
    it points to the memory access
    */

    vector<int>::iterator it = v.end(); // {10,20,30,40} _ the '_' refers where its pointed the location end will point after the right of the last locations , and when you do the iterator to be it-- then it will move towards the second last element in the container
    vector<int>::iterator it = v.rend(); // _{10,20,30,40} this points that it will end at the starting
    vector<int>::iterator it = v.rbegin(); //this will point the last element of the braces like it pointed 40 , if i do 'it++' it will make it to move left and pointed to 30, then 20, 10


    cout << v[0] << " " <<v.at(0);

    cout << v.back() << " "; //as the name suggests , the elemnts which is found at the last


    for (vector<int>:: iterator it = v,begin(); it != v.end(); it++) { //this is how we can print the entire vector
        cout << *(it) << " ";

    }

    for(auto it = v.begin(); it != v.end(); it++) { //auto , automatically assigns it to a vector iterator(datatype)
        cout << *(it) <<  " ";
    }
    //other way to print a vector
    for (auto it : v) { // automatically iterator of vector
        cout << it << " ";

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1); //if i want to delete any address

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4);// // {10,20.35}[start,end]

    //Insert Function

    vector<int>v(2,100); // {100,100}
    v.insert(v.begin(), 300); // {300,100,100};
    v.insert(v.begin() + 1,2, 10); // {300,10,10,100,100}

    vector<int>copy{2,50}; // {50,50}
    v.insert(v.begin(),copy.begin(), copy.end()); // {50,50,300,10,10,100,100}

    // {10,20}
    cout << v.size(); //2

    // {10,20}
    v.pop_back(); //{10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20}

    v.clear(); // erases the entire vector

    cout << v.empty();


    }

    void explainList() {
        list<int> ls;

        ls.push_back(2); // {2}
        ls.emplace_back(4);// {2,4}
        ls.push_front(5); // {5,2,4};
        ls.emplace_front(); {2,4};

        //rest functions same as vector
        //begin , end, rbegin, rend,clear, insert , size ,swap


    }

    void explainDeque() {
        deque<int>dq;
        dq.push_back(1); // {2}
        dq.emplace_back(2); // {1,2}
        dq.push_front(4); // {4,1,2}
        dq.emplace_front(3); // {3,4,1,2}

        dq.pop_back(); // {3,4,1}
        dq.pop_front(); // {4,1}

        dq.back();

        dq.front();

        //rest functions same as vector
        //begin , end, rbegin, rend,clear, insert , size ,swap
        }

    void explainStack() { // LAST IN FIRST OUT
        stack<int> st;
        st.push(1);// {1}
        st.push(2);// {2,1}
        st.push(3);// {3,2,1}
        st.push(4);// {3,3,2,1}
        st.emplace(5);// {5,3,3,2,1}

        cout << st.top(); //prints 5 "** st[2] is invalid **"

        st.pop(); // st looks like  {3,3,2,1}

        cout << st.top();  // 3 // the last guy that went in
        cout << st.size(); // 4
        cout << st.empty();

        stack<int>st1, st2;
        st1.swap(st2);
    }

    void explainQueue() { // FIRST IN FIRST OUT
        queue<int> q;
        q.push(1); // {1}
        q.push(2); // {1,2}
        q.emplace(4); // {1,2,4}

        q.back() += 5
        cout << q.back(); // prints 9

        //  Q is {1,2,9}
        cout << q.front(); // prints 1

        q.pop(); // {2,9}


        cout << q.front(); // prints 2

        // size swap empty same as stack

    }
    void explainPQ() {
        priority_queue<int>pq;

        pq.push(5); // {5}
        pq.push(2); // {5, 2}
        pq.push(8); // {8,5,2}
        pq.emplace(10); // {10,8,5,2}

        cout << pq.top(); // prints 10

        pq.pop(); // {8,5,2}
        cout << pq.top(); // prints 8 
        // size swap empty function same as others

        // Minimum Heap
        priority_queue<int, vector<int>, greater<int>> pq;
        pq.push(5) // {5}
        pq.push(2) // {2,5}
        pq.push(8) // {2,5,8}
        pq.emplace(10) // {2,5,8,10}

        cout << pq.top(); // prints 2

    }


    }