#include <iostream>
using namespace std;

template <class T>
class abc {
    T x;
public:
    abc(T n) {
        x = n;
    }
    T get() {
        return x;
    }
};

int main() {
    abc<int> obj1(5);
    abc<float> obj2(5.5);

    cout << "Value in obj1: " << obj1.get() << endl;
    cout << "Value in obj2: " << obj2.get() << endl;

    return 0;
}
