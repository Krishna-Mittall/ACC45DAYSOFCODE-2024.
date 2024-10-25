#include <bits/stdc++.h>
using namespace std;

pair <int,int>func(list<string> Lst){
    int S=0;
    int L=0;
    
    for(string value: Lst){
        if(value == "START38"){
            S++;
        }
        else if(value == "LTIME108"){
            L++;
        }
    }
    return make_pair(S,L);
}
int main() {
    int T;
    cin >> T;
    
    while(T--){
        int N;
        cin >> N;
        list<string> Lst;
        for(int i=0; i<N; i++){
            string x;
            cin >> x;
            Lst.push_back(x);
        }
        auto res = func(Lst);
        cout<<res.first<<" "<<res.second<<endl;
        
    }
}
