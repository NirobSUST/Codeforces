#include <iostream>
using namespace std;

bool isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;
        int ans = -1;

        for (int i = 29; i >= 0; --i) {       // high bits first
            for (int j = 29; j >= 0; --j) {
                int y = (1 << i) | (1 << j);  // y with 2 bits set
                if (y >= x) continue;

                int z = x ^ y;

                if (isValidTriangle(x, y, z)) {
                    ans = y;
                    break; // stop inner
                }
            }
            if (ans != -1) break; // stop outer
        }

        cout << ans << endl;
    }

    return 0;
}
