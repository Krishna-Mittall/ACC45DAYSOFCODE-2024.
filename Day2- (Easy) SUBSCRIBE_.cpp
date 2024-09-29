#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for (int i=1; i<=T; i++){
	    int N,X;
	    cin >> N >> X;
	    int p = N/6;
	    int q = N - (6*p);
	    
	    int r;
	    
	    if(q==0){
	       r = p+0;
	    }
	    else{
	       r = p+1;
	    }
	    
	    cout<<X*r<<endl;
	}
}
