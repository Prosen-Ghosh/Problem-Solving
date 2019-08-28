#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    string str;
    while(cin >> str){
        int len = str.length();
        string tmp = "";
        for(int i = 0; i < len; i++)tmp += str[i] - 7;
        cout << tmp << endl;
    }
    return 0;
}
