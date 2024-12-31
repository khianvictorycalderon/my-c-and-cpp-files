#include <iostream>

int main() {
	using std::cout;
	using std::cin;
	using std::getline;
	using std::string;
	using std::ws;
	
	string name;
	cout << "What is your name?\n";
	cin >> name;
	
	int age;
	cout << "How old are you?\n";
	cin >> age;
	
	string quote;
	cout << "What is your favorite qoute?\n";
	getline(cin >> ws, quote);
	
	cout << "\n\n";
	cout << "Hello " << name << ", you are " << age << " years old.\n";
	cout << "Your favorite quote is \"" << quote << "\"\n";
	
	cin.get(); // Pause the program until enter was clicked
	return 0;
}