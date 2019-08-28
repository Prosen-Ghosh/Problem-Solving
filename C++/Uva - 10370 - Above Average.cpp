#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int c;
    scanf("%d",&c);
    for(int i = 0; i < c; i++){
        int n,sum = 0,a,cnt = 0;
        vector<float>ar;
        scanf("%d",&n);
        for(int j = 0; j < n; j++){
            scanf("%d",&a);
            ar.push_back(a);
            sum += a;
        }
        int avg = sum/n;
        for(int j = 0; j < n; j++)if(ar[j] > avg)cnt++;
        float ans = (float)cnt/n;
        printf("%.3f%\n",ans*100);
    }
    return 0;
}
