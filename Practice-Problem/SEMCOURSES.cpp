// Chef and Chapters
// Problem Code - SEMCOURSES

// https://www.codechef.com/problems/SEMCOURSES

// Solution:
#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
	    int x, y, z;
	    cin >> x >> y >> z;
	    cout << x*y*z << endl;
	}
	return 0;
}