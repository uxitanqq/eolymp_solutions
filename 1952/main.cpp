#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, Max = 0, Min = 2147483647;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] > Max)
            Max = a[i];
        if (a[i] < Min)
            Min = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == Max) {
            a[i] = Min;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
