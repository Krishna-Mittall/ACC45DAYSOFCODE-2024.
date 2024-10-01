#include <bits/stdc++.h>
using namespace std;

void func(int arr[],int size){\

    for(int j=0; j<size; j++){
	   cin >> arr[j];;
	}
}

int main() {
	int T;
	cin >> T;
	
	for(int i=0; i<T; i++){
	    int N;
	    cin >> N;
	    int A[N];
	    
	    func(A,N);
	    
	    sort(A,A+N);
	    
	    int count = 1;
	    int max = 1;
	    
	    for(int k=1; k<N; k++){
	        if(A[k]==A[k-1]){
	            count++;
	        }
	        else {
	            if(count>max){
	                max = count;
	            }
	            count = 1;
	        }
	    }
	    if (count > max) {
            max = count;
        }
	    cout<<N-max<<endl;
	}
	return 0;
}
