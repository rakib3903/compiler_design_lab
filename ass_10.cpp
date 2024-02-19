#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string>st;
    st["S+S"]="S";
    st["S*S"]="S";
    // map<string, string>st = {{"S+S", "S"}, {{"S*S", "S"}}}; shortcut

    freopen("file.txt", "r", stdin);
    string s;
    getline(cin, s);
    
    string parsing = "";

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'i' && s[i+1] == 'd'){
            parsing += 'S';
            i++;
        }else parsing += s[i];
    }

    string p = "";
    for(int i = 0; i < parsing.size(); i++){
        p += parsing[i];
        if(st[p] == "S") p = "S";
    }
    
    if(p == "S")
    cout<<"accepted"<<endl;
    else cout<<"not accepted"<<endl;

    
    return 0;
}