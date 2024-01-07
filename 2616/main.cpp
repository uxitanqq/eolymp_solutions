#include <iostream>

using namespace std;

int main()
{
    unsigned int n, a;
    cin >> n;
    unsigned int x = 1;
    for (unsigned int i = 2; i <= n; i++)
        x ^= i;
    for (unsigned int i = 1; i < n; i++){
        cin >> a;
        x ^= a;
    }
    cout << x;
    return 0;
}
