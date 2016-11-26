#include<bits/stdc++.h>
using namespace std;
/*
 *
 * Prosen Ghosh
 * American International University - Bangladesh (AIUB)
 *
*/
struct Web{
    string url;
    int rel;
};
int main(){
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++){
        Web pages[100];
        int rel,mxRel = -1;
        for(int i = 0; i < 10; i++){
            cin >> pages[i].url >> pages[i].rel;
            if(pages[i].rel > mxRel)mxRel = pages[i].rel;
        }
        cout << "Case #"<< t << ":" << endl;
        for(int i = 0; i < 10; i++)if(pages[i].rel == mxRel)cout << pages[i].url << endl;
    }
    return 0;
}
