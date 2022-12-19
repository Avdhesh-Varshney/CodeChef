// Ada and crayons
// Problem Code - ADACRA

// Problem
// Ada has an array of N crayons, some crayons are pointing upwards and some downwards. Ada thinks that an array of crayons is beautiful if all the crayons are pointing in the same direction.
// In one step you can flip any segment of consecutive crayons. After flipping a segment, all crayons pointing downwards will point upwards and visceversa.
// What is the minimum number of steps to make the array of crayons beautiful?

// Input
// The first line of the input contains T the number of test cases.
// Each test case is described in one line containing a string S of N characters, the i-th character is 'U' if the i-th crayon is pointing upwards and 'D' if it is pointing downwards.

// Output
// For each test case, output a single line containing the minimum number of flips needed to make all crayons point to the same direction.

// Constraints
// 1 ≤ T ≤ 3000
// 1 ≤ N ≤ 50

// Sample Input      Sample Output
// 1
// UUDDDUUU          1

// Solution:
#include <bits/stdc++.h>
using namespace std;
void crayons(string s) {
    int count = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] != s[i+1])
            count++;
    }
    cout << count/2 << endl;
}
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        string s, r;
        cin >> s;
        crayons(s);
    }
    return 0;
}