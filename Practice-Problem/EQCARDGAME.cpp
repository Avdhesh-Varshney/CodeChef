// Equal Card Game
// Problem Code - EQCARDGAME

// https://www.codechef.com/problems/EQCARDGAME

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--) {
	    int k;
	    cin >> k;
	    cout << 52%k << endl;
	}
	return 0;
}