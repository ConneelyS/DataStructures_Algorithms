#include <iostream>
#include <vector>
using namespace std;

//    Big O Notiation - Examples of how algorithms perform given a value of n

// Constant Time - O(1)
void constantTime() {
    vector <int> values {0, 1, 2, 3, 4, 5};
    cout << values[3];
}



int main() {
//Calling the example functions in main
    constantTime();

    return 0;
}


