// Two Rooks
// Problem Code - TWOROOKS

// https://www.codechef.com/problems/TWOROOKS

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x1, y1, x2, y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    if(x1 == x2 or y1 == y2)
	        cout << "yes" << endl;
	    else
	        cout << "no" << endl;
	}
	return 0;
}