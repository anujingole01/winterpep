#include "bits/stdc++.h"

using namespace std;

int get_first_match_index (const string& str, const char& ch, bool find_first=true) {
	int low = 0;
	int high = str.size() - 1;
	int ind_found = -1;

	// Either put <= instead of < here, ...
	while (low < high) {
		int mid = low + ((high - low) >> 1);

		if (str[mid] < ch) {
			low = mid + 1;
		} else if (str[mid] > ch) {
			high = mid - 1;
		} else {
			ind_found = mid;

			if (find_first) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
	}

	// ... Or use low/high to check the value and then set the ind_found:
	if (str[low] == ch) {
		ind_found = low;
	}

	return ind_found;
}

int main () {
	cout<<"Enter the count of the input characters\n";
	long long sz;
	cin>>sz;

	cout<<"Enter the sorted sequence of "<<sz<<" characters:\n";
	string str(sz, 'x');
	cin>>str;

	for (int i=0; i<sz-1; ++i) {
		if (str[i] > str[i+1]) {
			cout<<"The input sequence is not sorted!\n";
			return 0;
		}
	}

	cout<<"Enter the character to search for\n";
	char ch;
	cin>>ch;

	bool find_first;
	cout<<"Enter whether to find the index of the first match (1) or the last (0)\n";
	cin>>find_first;

	int index_found = get_first_match_index(str, ch, find_first);

	string str_to_print = index_found == -1 ?
		"No instance of the character found!" :
		("Character found at " + to_string(index_found) + ".");

	cout<<str_to_print<<endl;

	return 0;
}
