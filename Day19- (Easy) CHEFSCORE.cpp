#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;  // number of test cases
    cin >> T;
    
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;
        
        // Check if Y is a multiple of X and is within the range 0 to N*X
        if (Y % X == 0 && Y <= N * X) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
