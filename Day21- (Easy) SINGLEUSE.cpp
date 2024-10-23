#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;
    
        int attacks_with_special = 1; 
        int remaining_health = H - Y;
        if (remaining_health > 0) {
            attacks_with_special += ceil((double)remaining_health / X);
        }
        int attacks_without_special = ceil((double)H / X);
        int min_attacks = min(attacks_with_special, attacks_without_special);
        
        cout << min_attacks << endl;
    }
    
    return 0;
}
