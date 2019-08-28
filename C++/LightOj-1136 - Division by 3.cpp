#include <bits/stdc++.h>
using namespace std;

int main() {
	int T,a,b;
	cin >> T;
	for(int t = 1; t <= T; t++){
		cin >> a >> b;
		a--;
		a = ((a/3)*2) + ((a%3 == 2) ? 1 : 0);
		b = ((b/3)*2) + ((b%3 == 2) ? 1 : 0);
		cout << "Case " << t << ": " << b-a << endl;;
	}
	return 0;
}
