#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("file.txt", "r", stdin);
    string s;
    getline(cin, s);

    vector<string>v;
    string t = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            v.push_back(t);
            t = "";
        }else{
            t += s[i];
        }
    }
    v.push_back(t);

    for(int i = 0; i < v.size(); i++){
        t = v[i];
        if(t.size() > 3 && t[0]=='c' && t[1] == 'h' && t[2] =='_'){
            int cnt = 3;
            for(int j = 3; j < t.size(); j++){
                if(!isdigit(t[j]) && !isalpha(t[j])){
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
                cnt++;
            }
            if(cnt == t.size()) cout<<"Character-Variable"<<" ";
        }
        else if(t.size() > 3 && t[0]=='b' && t[1] == 'n' && t[2] =='_'){
            int cnt = 3;
            for(int j = 3; j < t.size(); j++){
                if(!isdigit(t[j]) && !isalpha(t[j])){
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
                cnt++;
            }
            if(cnt == t.size()) cout<<"Binary-Variable"<<" ";
        }else if(t[0] == '0'){
            int cnt = 1;
            for(int j = 1; j < t.size(); j++){
                if(t[j] != '0' && t[j] != '1'){
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
                cnt++;
            }
            if(cnt == t.size()) cout<<"Binary-Number"<<" ";
        }else cout<<"Invalid-Input"<<" ";
        
    }
    cout<<endl;
    return 0;
}