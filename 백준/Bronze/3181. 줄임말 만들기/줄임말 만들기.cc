#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> split(string str, char delimiter);

int main() {
	string user_input;
	vector<string> words;

	getline(cin, user_input);
	words = split(user_input, ' ');
	for (int i = 0; i < words.size(); i++) {
		if (words[i] == "i" || words[i] == "pa" || words[i] == "te" || words[i] == "ni" || words[i] == "niti" || words[i] == "a"
			|| words[i] == "ali" || words[i] == "nego" || words[i] == "no" || words[i] == "ili")
			if(i != 0)
				words[i] = "";
		words[i] = words[i].substr(0,1);
		if (words[i] != "")
			transform(words[i].begin(), words[i].end(), words[i].begin(), ::toupper);
		cout << words[i];
	}
}

vector<string> split(string input, char delimiter) {
	vector<string> result;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		result.push_back(temp);
	}

	return result;
}