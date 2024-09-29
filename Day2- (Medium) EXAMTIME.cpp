#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    
    for(int i=1; i<=T; i++){
        
    int DSA,TOC,DM;
    int mDSA,mTOC,mDM;
    
    cin >> DSA >> TOC >> DM;
    cin >> mDSA >> mTOC >> mDM;
        
        int p = DSA+TOC+DM;
        int q = mDSA+mTOC+mDM;
        
        if(p>q){
            cout<<"DRAGON"<<endl;
        }
        else if(p==q){
            if(DSA>mDSA){
                cout<<"DRAGON"<<endl;
            }
            else if(DSA==mDSA){
                if(TOC>mTOC){
                    cout<<"DRAGON"<<endl;
                }
                else if(TOC<mTOC){
                    cout<<"SLOTH"<<endl;
                }
                else{
                    cout<<"TIE"<<endl;
                }
            }
            else{
                cout<<"SLOTH"<<endl;
            }
        }
        else{
            cout<<"SLOTH"<<endl;
        }
        
    }

}
