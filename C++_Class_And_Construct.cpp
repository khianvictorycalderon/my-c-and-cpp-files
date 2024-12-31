#include <iostream>

class Car {
	public:
    std::string model;
    int year;

    Car(std::string m, int y) : model(m), year(y) {}
    
    void display() {
        std::cout << "Car Model: " << model << ", Year: " << year << "\n";
    }
};

int main() {
    using std::cout;
    using std::cin;

    Car myCar("Tesla", 2023);
    myCar.display();

    cin.ignore(); // Clears white spaces
    cin.get(); // Pause the program until Enter was clicked
    return 0;
}
