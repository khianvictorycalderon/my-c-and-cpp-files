#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int var = 25;
    int* ptr = &var;
    cout << "Variable 'var' is at memory address: " << &var << "\n";
    cout << "Pointer 'ptr' stores memory address: " << ptr << "\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
