#include <iostream>

using namespace std;

// Hàm tính t? h?p ch?p k c?a n
long long C(int n, int k) {
    if (k > n || k < 0) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }

    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - i + 1) / i;
    }
    return res;
}

int main() {
    int n, m;
    cin >> n >> m;

    if (m > n) {
        cout << 0 << endl;
    } else {
        cout << C(n - 1, m - 1) << endl;
    }

    return 0;
}
