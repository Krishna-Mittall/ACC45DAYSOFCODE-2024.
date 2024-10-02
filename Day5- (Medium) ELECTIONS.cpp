#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	for(int i=0; i<T; i++){
	    int Xa,Xb,Xc;
	    cin >> Xa >> Xb >> Xc;
	    
	    if(Xa+Xb+Xc==101){
	        if(Xa>50){
	            cout<<"A"<<endl;
	        }
	        else if(Xb>50){
	            cout<<"B"<<endl;
	        }
	        else if(Xc>50){
	            cout<<"C"<<endl;
	        }
	        else{
	            cout<<"NOTA"<<endl;
	        }
	    }
	    else{
	        cout<<"Votes are Not Exact"<<endl;
	    }
	}

}
