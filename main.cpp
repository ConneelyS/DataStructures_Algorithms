#include <iostream>
#include <vector>
using namespace std;

//    Big O Notiation - Examples of how algorithms perform given a value of n

// Constant Time - O(1)
void constantTime() {
    vector <int> values {0, 1, 2, 3, 4, 5};
    cout << "Constant Time: " << endl;
    cout << values[3] << endl;
}

// Logarithmic Time - O(log n)
void logarithmicTime() {

}

// Linear Time O(n)
void linearTime() {
    vector <int> values {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Linear Time: " << endl;

    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }

//    Range based looping
    for (int value : values) {
        cout << value << " ";
    }
}

// Quadratic Time 0(n2) - nSquared
void quadraticTime() {

}

// Exponential O(2n) - 2 to the power of n
void exponentialTime() {

}


int main() {
//Calling the example functions in main
    constantTime();
    linearTime();

    return 0;
}


