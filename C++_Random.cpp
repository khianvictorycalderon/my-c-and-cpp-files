#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

int main() {
    using std::cout;
    using std::cin;

    srand(time(0));  // Seed for random number generation
    int random_number = rand() % 100;  // Random number between 0 and 99
    cout << "Random number betwee 0 - 99: " << random_number << "\n";

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}