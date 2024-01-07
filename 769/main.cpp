#include <iostream>

using namespace std;

int main()
{
    unsigned int x1, y1, x2, y2, x3, y3, x, y;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x >> y;
    x = x1^(x2 ^ x3);
    y = y1^(y2 ^ y3);
    cout << x << " " << y;
    return 0;
}
