#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    vector<long int>ar;
    for(int i = 0; i < 5; i++){
        int a;cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    long int mx = 0,min = 0;
    for(int i = 1; i <= 4; i++)mx+=ar[i];
    for(int i = 0; i < 4; i++)min+=ar[i];
    cout << min << " " << mx << endl;
    return 0;
}
