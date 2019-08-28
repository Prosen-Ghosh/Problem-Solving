#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
struct cmp{
    bool operator()(int& n1, int& n2){
        if(n1 > n2)return true;
        return false;
    }
};
int main() {
    int T,a,b;
    scanf("%d",&T);
    for(int t = 1; t <= T; t++){
        int n;
        scanf("%d",&n);
        vector<vector<int> >ar;
        for(int i = 0; i < n; i++){
            scanf("%d %d",&a,&b);
            vector<int>tmp;
            tmp.push_back(a);
            tmp.push_back(b);
            ar.push_back(tmp);
        }
        sort(ar.begin(),ar.end());
        int cnt = 1;
        priority_queue<int,vector<int>,cmp> pqueue;
        pqueue.push(ar[0][1]);
        for(int i = 0; i < n-1; i++){
            if(ar[i+1][0] <= pqueue.top()){
                cnt++;
                pqueue.push(ar[i+1][1]);
            }else {
                pqueue.pop();
                pqueue.push(ar[i+1][1]);
            }
        }
        printf("Case %d: %d\n",t,cnt);
    }
    return 0;
}
