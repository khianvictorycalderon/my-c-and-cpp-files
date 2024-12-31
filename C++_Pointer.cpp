#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int num = 10;
    int* ptr = &num;
    cout << "Value of num: " << num << "\n";
    cout << "Memory address of num: " << ptr << "\n";
    cout << "Value at the memory address: " << *ptr << "\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}