#include <iostream>
#include <string>
using namespace std;

// Template base class Book
template <typename T>
class Book {
public:
    T title;
    T author;

    Book(const T& t, const T& a) : title(t), author(a) {}

    void displayBookDetails() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

// Derived class TextBook inherits from Book
template <typename T>
class TextBook : public Book<T> {
public:
    T subject;

    TextBook(const T& t, const T& a, const T& s) : Book<T>(t, a), subject(s) {}

    void displayTextBookDetails() const {
        this->displayBookDetails();
        cout << "Subject: " << subject << endl;
    }
};

// Further derived class ReferenceBook inherits from TextBook
template <typename T>
class ReferenceBook : public TextBook<T> {
public:
    int numberOfEditions;

    ReferenceBook(const T& t, const T& a, const T& s, int n)
        : TextBook<T>(t, a, s), numberOfEditions(n) {}

    void displayReferenceBookDetails() const {
        this->displayTextBookDetails();
        cout << "Number of Editions: " << numberOfEditions << endl;
    }
};

int main() {
    // Create an object of ReferenceBook<string>
    ReferenceBook<string> refBook("C++ Programming", "Bjarne Stroustrup", "Computer Science", 4);
    ReferenceBook<string> refBook2("C++ Programming", "Bjarne Stroustrup", "Computer Science", 4);
    refBook.displayReferenceBookDetails();
    refBook2.displayReferenceBookDetails();

    return 0;
}
