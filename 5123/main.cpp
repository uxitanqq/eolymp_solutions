#include <iostream>

using namespace std;

int grad(int n, int l)
{
    if(n == 1)
        return l;
    else
       if (n % 2 != 0){
        if(l < n)
            l = n;
        return grad (n * 3 + 1, l);
    }
    if (n % 2 == 0){
        if (l < n)
            l = n;
        return grad(n/2, l);
    }
}

int main(){
    int t, a, b;
    cin >> t;
    while(t > 0){
        cin >> a >> b;
        cout << a <<" "<< grad(b, 1) << endl;
        t--;
    }
  return 0;
}
