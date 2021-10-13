#include <iostream>
#include<sstream> 
#include <string.h>
using namespace std;

int main()
{
    int n;
    int cont = 0;
    cin >> n;
    string sequencia[n];
    

    while (cont < n)
    {
    	cin>>sequencia[cont];
        cont++;
    }
    
    for (int i = 0; i < n; i++) {
    	int len;
    	if (sequencia[i].length() > 10) {
    		len = sequencia[i].length();
			cout << sequencia[i][0] << len - 2 << sequencia[i][len - 1]<<endl;
		} else {
			cout << sequencia[i] << endl;
		}
    		
	}	
	
	

    return 0;
}
