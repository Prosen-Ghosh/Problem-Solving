#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int T;
    cin >> T;
    for(int t = 0; t< T; t++){
        int n;cin >> n;
        vector<int>ar;
        for(int i = 0; i < n; i++){
            int a;cin >> a;
            ar.push_back(a);
        }
        sort(ar.begin(),ar.end());
        int sum = 0;
        for(int i = 0; i < n-1; i++)sum += abs(ar[i]-ar[i+1]);
        cout << sum+abs(ar[0]-ar[n-1]) << endl;
    }
    return 0;
}
