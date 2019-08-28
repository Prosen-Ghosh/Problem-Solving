#include<bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){
    int T;
    string one = "one";
    cin >> T;
    for(int t = 0; t < T; t++){
        string str; cin >> str;
        if(str.length() == 5)cout << 3 << endl;
        else {
            int cnt = 0;
            for(int i = 0; i < 3; i++)if(str[i] == one[i])cnt++;
            (cnt >= 2) ? cout << 1 << endl : cout << 2 << endl;
        }
    }
    return 0;
}
