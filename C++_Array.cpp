#include <iostream>

int main() {
    using std::cout;
    using std::cin;

    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i += 1) {
        cout << "arr[" << i << "] = " << arr[i] << "\n";
    }

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
