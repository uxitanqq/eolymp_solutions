#include <iostream>

using namespace std;

int guci(int n, double a){
 if (n > 0)
    return guci(n-=1, (a + 0.5)*2);
 else return a;
}

int main(){
    int n;
    cin >> n;
    cout << guci (n - 1 , 1) ;
    return 0;
}
