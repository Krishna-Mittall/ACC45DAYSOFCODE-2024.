#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int N;
	    cin >> N;
	    
	    int p = N/7;
	    
	    if(N%7>=2){
	        p++; 
	    }
	    cout<<p<<endl;
	}
	return 0;
}
