#include "bits/stdc++.h"

using namespace std;

void insertion_sort (string& str) {
	int sz = str.size();

	for (int i=1; i<sz; ++i) {
		int key = str[i];
		int j = i-1;

		for (; j>-1 && str[j] > key; --j) {
			str[j+1] = str[j];
		}

		str[j+1] = key;
	}
}

int main () {
	cout<<"Enter the count of the input characters\n";
	long long sz;
	cin>>sz;

	cout<<"Enter the sequence of "<<sz<<" characters:\n";
	string str(sz, 'x');
	cin>>str;

	insertion_sort(str);

	cout<<"The sorted sequence is:\n\n"<<str<<endl;

	return 0;
}