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
    while(cin >> str){
        int len = str.length();
        string s = "";
        for(int i = 0; i < len; i++){
            if(str[i] == 'A' || str[i] == 'B' || str[i] == 'C')s += "2";
            else if(str[i] == 'D' || str[i] == 'E' || str[i] == 'F')s += "3";
            else if(str[i] == 'G' || str[i] == 'H' || str[i] == 'I')s += "4";
            else if(str[i] == 'J' || str[i] == 'K' || str[i] == 'L')s += "5";
            else if(str[i] == 'M' || str[i] == 'N' || str[i] == 'O')s += "6";
            else if(str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S')s += "7";
            else if(str[i] == 'T' || str[i] == 'U' || str[i] == 'V')s += "8";
            else if(str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z')s += "9";
            else s += str[i];
        }
        cout << s << endl;
    }
    return 0;
}
