#include <iostream>

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    using std::cout;
    using std::cin;

    int ui;
    cout << "Enter the number to find the factorial: ";
    cin >> ui;
    
    int result = factorial(ui);
    cout << "The factorial of " << ui << " is " << result << '\n';

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
