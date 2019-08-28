#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int main(){
    string str;
    while(getline(cin,str)){
        int len = str.length();
        vector<string>tmp;
        string s = "";
        for(int i = 0; i < len; i++){
            if(str[i] != ' ')s += str[i];
            else {
                reverse(s.begin(),s.end());
                tmp.push_back(s);
                s.clear();
            }
        }
        reverse(s.begin(),s.end());
        tmp.push_back(s);
        int sz = tmp.size();
        for(int i = 0; i < sz; i++){
            cout << tmp[i];
            if(i != sz-1)cout << " ";
        }
        cout << endl;
        str.clear();
    }
    return 0;
}
