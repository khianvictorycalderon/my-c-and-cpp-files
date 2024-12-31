#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int num = 42;
    cout << "Size of int: " << sizeof(num) << " bytes\n";
    double d = 42.42;
    cout << "Size of double: " << sizeof(d) << " bytes\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
