#include <iostream>

enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main() {
    using std::cout;
    using std::cin;

    Day today = Friday;
    cout << "Day of the week: " << today << "\n"; // 5 will be printed for Friday

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
