#include <iostream>
#include <sstream>
#include <string>
using namespace std;
 
 
int main() {
	int n, k;
 	cin>>n>>k;
	int sequencia[n];
 	
	for (int i = 0; i < n; i++) {
		cin>>sequencia[i];
			
	}
	
	int cont = 0;
	
	
	for (int j = 0; j < n; j++) {
		if (sequencia[j] != 0 && sequencia[j] >= sequencia[k-1]) {
			cont++;
			
		}
			
	}
	
	cout<<cont<<endl;
 
}