#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for(int i=0; i<T; i++){
        int X,Y;
        cin >> X >> Y;
        
        int p = 500-(X*2);
        int q = 1000-((X+Y)*4);
        
        int r = 500-(Y*4);
        int s = 1000-((X+Y)*2);
        
        cout<<max((p+q),(r+s))<<endl;
    }
}
