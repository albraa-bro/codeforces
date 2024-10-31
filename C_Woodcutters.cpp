//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > t(n);
    
    for (int i = 0; i < n; i++) {
        cin >> t[i].first >> t[i].second;
    }

    int cnt = 0, last = -1;

    for (int i = 0; i < n; i++) {
        int x = t[i].first, h = t[i].second;

        if (i == 0) {
            cnt++;
            last = x;
        } else if (x - h > last) {
            cnt++;
            last = x;
        } else if (i == n - 1 || x + h < t[i + 1].first) {
            cnt++;
            last = x + h;
        } else {
            last = x;
        }
    }

    cout << cnt << "\n";
    return 0;
}
