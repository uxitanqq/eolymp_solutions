#include <iostream>
#include <set>

using namespace std;

int main(){
    set <long long> s;
    long long a, b, c, d, k = 0;
    cin >> a >> b >> c >> d;
    for (int i = min(a,b); i<= max(a,b); i++){
        for (int j = min(c,d); j<= max(c,d); j++){
            if (s.find(i * j) == s.end()){
                k++;
                s.insert (i * j);
            }
        }
    }
    cout << k;
    return 0;
}
