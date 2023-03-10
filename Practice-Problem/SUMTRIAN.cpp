// Sums in a Triangle
// Problem Code - SUMTRIAN

// https://www.codechef.com/problems/SUMTRIAN

// Solution:
#include <iostream>
using namespace std;
int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n][n] = {0};
        for(int i = 0; i < n; i++)
            for(int j = 0; j < i+1; j++)
                cin >> a[i][j];
        for(int i = n-2; i >= 0; i--)
            for(int j = 0; j < i+1; j++)
                a[i][j] += max(a[i+1][j], a[i+1][j+1]);
        cout << a[0][0] << endl;
    }
    return 0;
}