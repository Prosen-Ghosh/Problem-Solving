#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int n,a,cnt[102] = {0},mx = 0,index = -1,ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        cnt[a]++;
        if(cnt[a] > mx){
            mx = cnt[a];
            index = a;
        }
    }
    for(int i = 1; i <= 100; i++)if(i != index)ans+=cnt[i];
    cout << ans << endl;
    return 0;
}
