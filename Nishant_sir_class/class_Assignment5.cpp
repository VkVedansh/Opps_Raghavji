#include <iostream>
using namespace std;

class classA {
private:
    int valueA;
    friend void addvalues(int a, int b);
};

class classB {
private:
    int valueB;

    friend void addvalues(classA, classB);
};

void addvalues(classA a, classB b) {
    cout << "Sum = " << a.valueA + b.valueB << endl;
}

int main() {
    classA objA;
    classB objB;

    addvalues(objA, objB);

    return 0;
}
