#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0; i<T; i++){
	    int B1,B2,B3;
	    cin >> B1 >> B2 >> B3;
	    
	    if((B1==0 && B2 ==0) || (B2==0 && B3==0) || (B3==0 && B1==0)){
	        cout<<"Water Filling Time"<<endl;
	    }
	    else{
	        cout<<"Not Now"<<endl;
	    }
	    
	}
}
