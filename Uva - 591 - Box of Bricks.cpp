#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int n,_set = 0;
    while(cin >> n && n != 0){
        vector<int>ar;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int a;cin >> a;
            sum += a;
            ar.push_back(a);
        }
        int chk = sum/n,cnt = 0;
        for(int i = 0; i < n; i++){
            if(ar[i] > chk)cnt+= ar[i]-chk;
        }
        cout << "Set #" << ++_set << endl;
        cout << "The minimum number of moves is " << cnt << "." << endl << endl;
        
    }
    return 0;
}
