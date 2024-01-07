#include <iostream>

using namespace std;

int main(){
    unsigned long long n, k;
    char c;
    string l;
    cin >> n;
    if (n % 2 == 0){
    cin >> l;
    cout << "Ok";
    }
    else{
    cin >> c;
    k = int (c);
    while (n > 1){
        cin >> c;
        k ^= int (c);
        n--;
      }
      cout << char(k);
    }
    return 0;
}
