#include "bits/stdc++.h"

using namespace std;

void selection_sort (string& str) {
	int sz = str.size();

	for (int i=0; i<sz-1; ++i) {
		int mn_ind = i;

		for (int j=i+1; j<sz; ++j) {
			if (str[j] < str[mn_ind]) {
				mn_ind = j;
			}
		}

		swap(str[i], str[mn_ind]);
	}
}

int main () {
	cout<<"Enter the count of the input characters\n";
	long long sz;
	cin>>sz;

	cout<<"Enter the sequence of "<<sz<<" characters:\n";
	string str(sz, 'x');
	cin>>str;

	selection_sort(str);

	cout<<"The sorted sequence is:\n\n"<<str<<endl;

	return 0;
}