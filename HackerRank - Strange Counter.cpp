#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){
    long long t,n = 2;
    cin >> t;
    while(3*(n-1) < t)n *= 2;
    cout << 3*(n-1)-t+1 << endl;
    return 0;
}
