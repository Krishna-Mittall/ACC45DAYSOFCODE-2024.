#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while(T--){
        int X,Y;
        cin >> X >> Y;
        
        int p = Y/X;
        
        if((p*X)<Y){
            cout<<p<<endl;
        }
        else if ((p*X)==Y){
            cout<<p-1<<endl;
        }
    }
}
