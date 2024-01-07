#include <iostream>

using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int k;
        double p;
        cin >> k >> p;
        if (p < 50) {
            s += k;
        }
    }
    cout << s;
    return 0;
}
