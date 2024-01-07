#include <iostream>

using namespace std;

int posl(int a)
{
	if (a == 1)
        return 1;
	if (a % 2 == 0)
        return 2 * posl(a / 2) - 1;
	return 2 * posl((a - 1) / 2) + 1;
}

int main(){
	int i, k, n, f, p;
	cin >> p;
	i = 0;
	while (i < p){
	    i++;
		cin >> n;
		f = 0;
		k = posl (n);
		while (k != n) {
                f++;
                n = k;
                k = posl (n);
                }
        cout << "Case " << i << ": " << f << " " << n << endl;
	}
	return 0;
}
