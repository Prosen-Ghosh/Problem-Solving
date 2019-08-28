#include <bits/stdc++.h>
using namespace std;
/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/

int main() {
    int T;
    cin >> T; cin.ignore();
    for(int t = 1; t <= T; t++){
        string str;
        getline(cin,str);
        int val = 0,len = str.length();
        for(int i = 0; i < len; i++){
            if(str[i] == 'a' || str[i] == 'b' || str[i] == 'c')val+= (str[i] - 'a')+1;
            else if(str[i] == 'd' || str[i] == 'e' || str[i] == 'f')val+= (str[i] - 'd')+1;
            else if(str[i] == 'g' || str[i] == 'h' || str[i] == 'i')val+= (str[i] - 'g')+1;
            else if(str[i] == 'j' || str[i] == 'k' || str[i] == 'l')val+= (str[i] - 'j')+1;
            else if(str[i] == 'm' || str[i] == 'n' || str[i] == 'o')val+= (str[i] - 'm')+1;
            else if(str[i] == 'p' || str[i] == 'q' || str[i] == 'r' || str[i] == 's')val+= (str[i] - 'p')+1;
            else if(str[i] == 't' || str[i] == 'u' || str[i] == 'v')val+= (str[i] - 't')+1;
            else if(str[i] == 'w' || str[i] == 'x' || str[i] == 'y' || str[i] == 'z')val+= (str[i] - 'w')+1;
            else if(str[i] == ' ')val+=1;
        }
        cout << "Case #" << t << ": " << val << endl;
    }
    return 0;
}
