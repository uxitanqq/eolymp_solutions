#include <iostream>

using namespace std;

int main()
{
    unsigned int n, a;
    cin >> n;
    a = n - (n & (n - 1));
    cout << a << endl;
    return 0;
}
