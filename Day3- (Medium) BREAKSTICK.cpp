#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, X;
        cin >> N >> X;
       
        if (N % 2 == 0 and X % 2 == 0){
            cout<<"Yes"<<endl;
        }
        
        else if (N % 2 == 0 and X % 2 != 0){
            cout<<"Yes"<<endl;
        }
        else if(N%2!=0 and X%2==0){
            cout<<"NO"<<endl;
        }
        else if(N%2!=0 and X%2!=0){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
