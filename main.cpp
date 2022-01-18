#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main() {
	while (true) {
		char choice;
		ofstream list("shopping list.txt", std::ios_base::app);
		cout << "Press 1 to add to the list \npress 2 to view the list\n";
		cin >> choice;

		if (choice == '1') {
			string items;
			cout << "Enter the item you would like to add to the list: ";
			cin >> items;
			list << items << "\n";
		}

		else if (choice == '2') {
			int i = 1;
			string text;
			ifstream textFile("shopping list.txt");
			while (getline(textFile, text)) {
				cout << i << " " << text << "\n";
				i++;
			}
		}
	}
	return 0;
}