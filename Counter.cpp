#include <iostream>
using namespace std;

class Counter {
public:
    Counter() {
        // Static local variable
        static int count = 0;
        count++;
        cout << "Object created. Total objects: " << count << endl;
    }
};

int main() {
    Counter c1;  // Object 1 created
    Counter c2;  // Object 2 created
    Counter c3;  // Object 3 created

    return 0;
}
