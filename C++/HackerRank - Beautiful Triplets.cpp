#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
#define IFOR for(int i = 0; i < n; i++)
#define VMINPUT(){ cin >> a;v.push_back(a);m[a] =  true;}
int main() {
    int n,d,a,cnt = 0;
    cin >> n >> d;
    vector<int>v;
    map<int,bool>m;
    IFOR VMINPUT()
    IFOR if(m[v[i]+d] && m[v[i]+d+d])cnt++;
    cout << cnt << endl;
    return 0;
}
