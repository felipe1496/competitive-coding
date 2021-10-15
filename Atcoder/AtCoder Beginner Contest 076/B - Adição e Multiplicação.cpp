#include <iostream>
#include<sstream> 
#include <string>
using namespace std;

int main() {
	int n, k;
	cin>>n>>k;
	int cont = 0;
	int display = 1;
	
	while (cont < n) {
		int a = display * 2;
		int b = display + k;
		if (a > b) {
			display += k;
		} else {
			display = display * 2;
		}
		
		
		
		cont++;
	}
	
	cout<<display<<endl;
	
}