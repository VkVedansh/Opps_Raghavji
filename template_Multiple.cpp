#include <iostream>
using namespace std;

template <class T, class U, class V = int>
class abc {
    T x1;
    U x2;
    V x3;
public:
    abc(T a1, U a2, V a3) {
        x1 = a1;
        x2 = a2;
        x3 = a3;
    }

    void display() {
        cout << "x1: " << x1 << ", x2: " << x2 << ", x3: " << x3 << endl;
    }
};

int main() {
    abc<float, char> obj1(5.5, '5', 5);       // V defaults to int
    abc<float, char, bool> obj2(5.5, 'a', true); // Explicitly using bool for V

    obj1.display();
    obj2.display();

    return 0;
}
