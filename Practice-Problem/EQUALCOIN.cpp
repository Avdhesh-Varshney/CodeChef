// Equal Coins
// Problem Code - EQUALCOIN

// https://www.codechef.com/problems/EQUALCOIN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        if(x==0 && y%2!=0)
            cout<<"NO"<<endl;
        else if(x%2!=0 && y%2!=0)
            cout<<"NO"<<endl;
        else if((x + 2*y)%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}