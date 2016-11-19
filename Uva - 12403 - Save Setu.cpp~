#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/
int tmpVal;
string cutStr(string str){
    int len = str.length();
    string tmpStr = "";
    tmpVal = 0;
    for(int i = 0; i < len; i++){
        if(str[i] >= 'a' && str[i] <= 'z')tmpStr+=str[i];
        else if(str[i] >= '0' && str[i] <= '9')tmpVal = tmpVal * 10 + (str[i] - '0');
    }
    return tmpStr;
}
int main() {
    int T,blance = 0;
    cin >> T;cin.ignore();
    for(int t = 1; t <= T; t++){
        string str;
        getline (cin,str);
        if(cutStr(str) == "donate")blance += tmpVal;
        else if(cutStr(str) == "report")cout << blance << endl;
    }
    return 0;
}
