#include<bits/stdc++.h>
using namespace std;
/*
 *
 * Prosen Ghosh
 * American International University - Bangladesh (AIUB)
 *
*/
int main(){

    int n,T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> n;
        int mxS = -1,a;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a > mxS)mxS = a;
        }
        cout << "Case " << t << ": " << mxS << endl;
    }
    return 0;
}
