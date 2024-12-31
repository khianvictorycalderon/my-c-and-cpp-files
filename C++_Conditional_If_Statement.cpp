#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::string;
	
	string name;
	cout << "What's your first name?\n";
	cin >> name;
	
	int age;
	cout << "How old are you?\n";
	cin >> age;
	
	if (name == "khian") {
		cout << "Hello there admin! \n";
	} else {
		cout << "Hello there guest! \n";
	}
	
	if (age < 2) {
		cout << "You are a baby.\n";
	} else if (age < 13){
		cout << "You are a child.\n";
	} else if (age < 18){
		cout << "You are a teenager.\n";
	} else if (age < 60){
		cout << "You are an adult.\n";
	} else if (age <= 120) {
		cout << "You are a senior citizen.\n";
	} else {
		cout << "You are super old.\n";
	}
	
	cin.ignore();
	cin.get(); // Pause the program until enter was clicked
	return 0;
}