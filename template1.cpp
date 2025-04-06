#include <iostream>
using namespace std;

template <typename T>
T abc(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << abc<int>(1, 2) << endl;       // Outputs: 2
    cout << abc<float>(1.0, 3.0) << endl; // Outputs: 3
    cout << abc<char>('a', 'b') << endl;  // Outputs: b
    return 0;
}
