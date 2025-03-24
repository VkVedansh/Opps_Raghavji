#include <iostream>
#include <string>
using namespace std;

namespace MathOperation {
    int add(int a, int b) {
        return a + b;
    }
}

namespace Stringoperation {
    string add(string a, string b) {
        return a + b;
    }
}

int main() {
    int sum = MathOperation::add(10, 20);
    cout << "Sum is: " << sum << endl;

    string result = Stringoperation::add("hello", " world");
    cout << " string: " << result << endl;

    return 0;
}
