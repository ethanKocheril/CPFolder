#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string input = "";
	int count = 1;
	int highest = 0;
	cin >> input;
	for(int i = 0; i < input.length() - 1; i++) {
		if(input.at(i) != input.at(i + 1)) {
			highest = count;
			count = 1;
		} else {
			count++;
			if(count > highest) highest = count;
		}	
	}

	cout << highest <<"\n";
}
