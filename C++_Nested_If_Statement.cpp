#include <iostream>
#include <string>

int main() {
    using std::cout;
    using std::cin;
    using std::string;
    using std::getline;

    cout << "Names and Roles:\n John - Butler & Driver\n Blake - Driver\n Jake - Cook\n Dave - Gardener & Butler\n\n";

    string name, role;
    cout << "What's your name? --> ";
    cin >> name;
    cin.ignore(); // Consume the leftover newline
    cout << "What's your role/s? --> ";
    getline(cin, role);

    if (name == "John") {
        if (role == "Butler & Driver" || role == "Driver & Butler") {
            cout << "Hello there John, you got both of your Role!\n";
        } else if (role == "Butler") {
            cout << "Hello there John, you failed as a Driver:(\n";
        } else if (role == "Driver") {
            cout << "Hello there John, you failed as a Butler:(\n";
        } else {
            cout << "Hello there John, you failed all your Roles:(\n";
        }
    } else if (name == "Blake") {
        if (role == "Driver") {
            cout << "Hello there Blake, you got your only Role!\n";
        } else {
            cout << "Hello there Blake, you failed your only Role:(\n";
        }
    } else if (name == "Jake") {
        if (role == "Cook") {
            cout << "Hello there Jake, you got your only Role!\n";
        } else {
            cout << "Hello there Jake, you failed your only Role:(\n";
        }
    } else if (name == "Dave") {
        if (role == "Butler & Gardener" || role == "Gardener & Butler") {
            cout << "Hello there Dave, you got both of your Role!\n";
        } else if (role == "Butler") {
            cout << "Hello there Dave, you failed as a Gardener:(\n";
        } else if (role == "Gardener") {
            cout << "Hello there Dave, you failed as a Butler:(\n";
        } else {
            cout << "Hello there Dave, you failed all your Roles:(\n";
        }
    } else {
        cout << "Hello there guest!\n";
    }

	cin.ignore(); // Consumes leftover whitespaces
    cin.get(); // Pause the program until enter was clicked
	return 0;
}
