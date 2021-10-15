#include <iostream>
#include<sstream> 
#include <string>
using namespace std;

int main() {
	int f = 0;
	int s = 0;
	int seq[3];
	cin>>seq[0]>>seq[1]>>seq[2];
	for (int i = 0; i < 3; i++) {
		if (seq[i] == 5) {
			f++;
		} else if (seq[i] == 7) {
			s++;
		}
	}
	if (f == 2 && s == 1) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	
	
	
	
	return 0;
}