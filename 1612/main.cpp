#include <iostream>

using namespace std;

int main()
{
    unsigned int a;
    cin >> a;
    a &= (a - 1);
    cout << a;
    return 0;
}
