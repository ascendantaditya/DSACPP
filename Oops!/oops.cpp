#include<iostream>
using namespace std;


class Hero {
    
    
    //Properties of Hero->class
   
    private:
    int health;

    public:
    char level;
    

    void print() {
        cout << level << endl;

    }

    int getHealth() {
        return health;
    }
    
};

int main() {
    Hero h1;
    h1.health = 100;
    h1.level = 250;
    h1.rank = 'E';

    cout <<"size is  :" << sizeof(h1) << endl;
    
    cout <<"Level is :" << h1.level << endl;
    

    return 0;
}




