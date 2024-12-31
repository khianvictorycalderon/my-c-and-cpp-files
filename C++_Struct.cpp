#include <iostream>

struct Person {
    std::string name;
    int age;
};

int main() {
    using std::cout;
    using std::cin;

    Person p = {"Alice", 30};
    cout << "Name: " << p.name << "\n";
    cout << "Age: " << p.age << "\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
