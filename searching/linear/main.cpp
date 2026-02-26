#include "bits/stdc++.h"

using namespace std;

int main () {
	cout<<"Enter the count of the input characters\n";
	long long sz;
	cin>>sz;

	cout<<"Enter the "<<sz<<" characters:\n";
	string str(sz, 'x');

	for (char&ch : str) {
		cin>>ch;
	}

	cout<<"Enter the character to search for\n";
	char ch;
	cin>>ch;

	int index_found = -1;

	// This is an example of linear search.
	for (auto it=begin(str); it!=end(str); ++it) {
		if (*it == ch) {
			index_found = it - begin(str);
			break;
		}
	}

	string str_to_print = index_found == -1 ?
		"No instance of the character found!" :
		("Character found at " + to_string(index_found) + ".");

	cout<<str_to_print<<endl;

	return 0;
}
