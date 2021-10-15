#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int n;
	cin>> n;
	int mat[1000][3];
	for (int i = 0; i < n; i++) {
		cin>>mat[i][0]>>mat[i][1]>>mat[i][2];
	}
	
	int output = 0;
	
	for (int i = 0; i < n; i++) {
		int is_sure_question = 0;
		for (int j = 0; j < 3; j++) {
			if (mat[i][j] == 1) {
				is_sure_question++;
			}
		}
		if (is_sure_question > 1) {
			output++;
		}
	
	}
	
	cout<<output<<endl;
	
	return 0;
}