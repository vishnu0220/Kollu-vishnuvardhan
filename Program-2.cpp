#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 0) {
        cout << "Series can't be started";
        return 0;
    }
    int start = 1;
    for (int i = 1; i < n; i++) {
        cout << start << ", ";
        start += 2;
    }
    cout << start;
    return 0;
}