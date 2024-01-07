#include <iostream>

using namespace std;

int g (int m, int n){
   if (m == 0)
        return 1;
   else if (m == n)
            return 1;
   if(m < n && m > 0)
   return g(m - 1, n - 1) + g(m, n - 1);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << g(b, a);
    return 0;
}
