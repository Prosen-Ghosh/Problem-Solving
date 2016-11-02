
Solution:

#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;cin >> str;
        if(next_permutation(str.begin(),str.end())) cout << str << endl;
        else cout << "no answer" << endl;
    }
    return 0;
}
