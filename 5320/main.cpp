#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    if (a < 0)
    ~a;
    for (int i = n-1; i >= 0; i--)
        cout << (a >> i & 1);
    return 0;
}
