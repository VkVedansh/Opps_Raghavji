#include <iostream>
using namespace std;

class Person {
    private:
        string name;
        int age;

    public:
        // Default constructor
        Person() {
            name = "unknown";
            age = 0;
        }

        // Parameterized constructor
        Person(string s, int a) {
            name = s;
            age = a;
        }

        // Getter for name
        string getName() {
            return name;
        }

        // Getter for age
        int getAge() {
            return age;
        }
};

int main() {
    Person person1;
    cout << person1.getName() << endl;
    cout << person1.getAge() << endl;

    Person person2("vedansh", 19);
    cout << person2.getName() << endl;
    cout << person2.getAge() << endl;

    return 0;
}
