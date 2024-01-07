#include <iostream>

using namespace std;

unsigned long long p (unsigned long long n)
{
  if (n%4 == 0)
    return n;
  else if (n % 4 == 1)
    return 1;
  else if (n % 4 == 2)
    return (n ^ 1);
  else return 0;
}

int main(){
    unsigned long long l, r, k = 0;
    cin >> l >> r;
    k = p(r)^p(l - 1);
    cout << k;
    return 0;
}
