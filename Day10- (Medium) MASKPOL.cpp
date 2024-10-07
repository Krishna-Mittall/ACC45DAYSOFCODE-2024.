#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--){
        int N,A;
        cin >> N >> A;
        
        cout<<min(A,N-A)<<endl;
    }
}
