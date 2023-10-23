#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int s;
        cin >> s;
        vector<string> v(s);

        for (int i = 0; i < s; ++i) {
            cin >> v[i];
        }
        vector<string> v1 = v;
        for (int i = 0; i < s; ++i) {
            for (int j = 0; j < s; ++j) {
                v[i][j] = max({v[i][j], v[j][s-i-1], v[s-j-1][i], v[s-i-1][s-j-1]});
                v[j][s - i - 1] = v[i][j];
                v[s - j - 1][i] = v[i][j];
                v[s - i - 1][s - j - 1] = v[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < s; ++i) {
            for (int j = 0; j < s; ++j) {
                ans+=v[i][j]-v1[i][j];
            }
        }
        cout << ans << "\n";
    }
}