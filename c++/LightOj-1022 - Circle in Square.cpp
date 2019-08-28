#include <bits/stdc++.h>
using namespace std;
#define pi 3.1415926535897932384626433832795
int main() {
	int T;
	scanf("%d",&T);
	for(int i = 1; i <= T; i++){
		double r;
		scanf("%lf",&r);
		printf("Case %d: %.2lf\n",i,((4*r*r)-(pi*r*r)));
	}
	return 0;
}

