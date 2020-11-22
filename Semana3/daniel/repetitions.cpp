// https://cses.fi/problemset/task/1069
// Solucion: Simulacion 
#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    char current = s[0];
    int counter = 1;
    int maxi = counter;
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == current) {
            counter++;
        }
        else {
            counter = 1;
            current = s[i];
        }
        maxi = max(maxi, counter);
    }
    cout << maxi << "\n";

    return 0;
}