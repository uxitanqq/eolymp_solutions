#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int Min = a[0];

    for (int i = 1; i < n; i+=1){
        cin >> a[i];
        Min = min(a[i], Min);
    }
    Min /= 2;
    for (int i = 0; i < n; i+=1){
       a[i] = a[i] + abs(Min);
       cout << a[i] << ' ';
    }
    return 0;
}
