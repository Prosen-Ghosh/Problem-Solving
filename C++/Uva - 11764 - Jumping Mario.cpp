
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
    for(int t = 1; t <= T; t++){
        int l = 0,h = 0,n,a,checker = 0; cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(i == 0)checker = a;
            else{
                if(a > checker){
                    h++;
                    checker = a;
                }
                else if(a < checker){
                    l++;
                    checker = a;
                }
            }
        }
        cout << "Case " << t << ": " << h << " " << l << endl;
    }
    return 0;
}
