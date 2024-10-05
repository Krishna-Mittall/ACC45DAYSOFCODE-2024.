#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int N;
	    cin >> N;
	    int A[N];
	    
	    for(int i=0; i<N; i++){
	        cin >> A[i];
	    }
	    
	    for(int j=0; j<N-1; j++){
	        if(A[j]>A[j+1]){
	            swap(A[j],A[j+1]);
	            break;
	        }
	    }
	    
	    bool is_sorted = true;
	    
	    for(int k=0; k<N-1; k++){
	        if(A[k]>A[k+1]){
	            swap(A[k],A[k+1]);

	            is_sorted = false;
	            break;
	        }
	    }
	    
	    if(is_sorted){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}

} 