#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    using std::cout;
    using std::cin;

    int result = add(5, 10);
    cout << "The sum is: " << result << "\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}