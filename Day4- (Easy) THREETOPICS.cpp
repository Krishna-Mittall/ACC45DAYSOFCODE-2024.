#include<iostream>
using namespace std;

int main(){
    int A,B,C,X;
    cin >> A >> B >> C >> X;
    
    if(A==X || B==X || C==X){
        cout<<"YES";
    }
    else
        cout<<"NO";
}