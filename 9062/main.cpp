#include <iostream>

using namespace std;

int main()
{
    int n, k, s = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i+=1){
        int p;
        cin >> p;
        s += p;
        if (s == k) {
        cout << k;
        return 0;
    }
    }
    cout << k - 1;
    return 0;
}
