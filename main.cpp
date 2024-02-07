#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
	cout << "Please come up with the word for the other person to guess: \n";
	string word;
	cin >> word;
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	string out = "";

	for (int i = 0; i < word.length(); i++) {
		out.append("_");
	}

	cout << "The following word is looked for: " << out << endl;

	int failed = 0;

	while (out.find("_") != string::npos && failed < 10) {
		char input;
		cin >> input;

		if (word.find(input) == string::npos) {
			failed++;
		}
		else {
			for (int i = 0; i < word.length(); i++) {
				if (word[i] == input) {
					out[i] = input;
				}
			}
		}
		cout << "The following word is looked for: " << out << ", you still have " << (10 - failed) << " attempts" << endl;
	}
	if (out.find("_") == string::npos) {
		cout << "You have won!!!\n";
	}
	else {
		cout << "You have lost.\n";
	}

	

	return 0;
}