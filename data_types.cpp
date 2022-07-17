#include <iostream>
using namespace std;

int main () {
    int a;
    a = 12;

    cout << "size of int " << sizeof(a) <<endl;

    float b;
    cout << "size of int " << sizeof(b) <<endl;

    char c;
    cout << "size of int " << sizeof(c) <<endl;

    bool d;
    cout << "size of int " << sizeof(d) <<endl;

    short int si;
    long long int li;

    cout << "size of int " << sizeof(si) <<endl;
    cout << "size of int " << sizeof(li) <<endl;

    return 0;
}