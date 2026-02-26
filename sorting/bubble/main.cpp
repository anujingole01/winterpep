#include "bits/stdc++.h"

using namespace std;

void bubble_sort (string& str) {
	int sz = str.size();

	for (int i=0; i<sz-1; ++i) {
		for (int j=0; j<sz-1; ++j) {
			if (str[j] > str[j+1]) {
				swap(str[j], str[j+1]);
			}
		}
	}
}

int main () {
	cout<<"Enter the count of the input characters\n";
	long long sz;
	cin>>sz;

	cout<<"Enter the sequence of "<<sz<<" characters:\n";
	string str(sz, 'x');
	cin>>str;

	bubble_sort(str);

	cout<<"The sorted sequence is:\n\n"<<str<<endl;

	return 0;
}