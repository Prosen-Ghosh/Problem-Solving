
#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main() {
    int height = -1,len,heights[26];
    string str;
    for(int i = 0; i < 26; i++)cin >> heights[i];
    cin >> str;
    len = str.length();
    for(int i = 0; i < len; i++){
        if(heights[str[i]-'a'] > height)height = heights[str[i]-'a'];
    }
    cout << len*height << endl;
    return 0;
}
