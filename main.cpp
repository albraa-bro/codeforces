#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int arr[3] = {0, 0, 0};
    for (int i = 0; i < 3; i++) {
        string s; cin >> s;
        if (s[1] == '>') {
            arr[s[0] - 'A']++;
            arr[s[2] - 'A']--;
        } else {
            arr[s[0] - 'A']--;
            arr[s[2] - 'A']++;
        }
    }

    
    set<int> unique_values(arr, arr + 3);
    if (unique_values.size() != 3) {
        cout << "Impossible\n";
    } else {
        int mx = *max_element(arr, arr + 3);
        int mn = *min_element(arr, arr + 3);
        int mid = accumulate(arr, arr + 3, 0) - (mx + mn);

        for (int i = 0; i < 3; i++)
            if (arr[i] == mn) cout << char('A' + i);
        for (int i = 0; i < 3; i++)
            if (arr[i] == mid) cout << char('A' + i);
        for (int i = 0; i < 3; i++)
            if (arr[i] == mx) cout << char('A' + i);
        cout << '\n';
    }

    return 0;
}
