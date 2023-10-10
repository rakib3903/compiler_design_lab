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
        if((t[0] >= 'i' && t[0] <= 'n') || (t[0] >= 'I' && t[0] <= 'N')){
            int cnt = 1;
            for(int j = 1; j < t.size(); j++){
                if(!isalpha(t[j]) && !isdigit(t[j])){
                    cout<<t[j]<<endl;
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
                cnt++;
            }
            if(cnt == t.size())
            cout<<"Integer-Variable"<<" ";
        }else if(t[0] >= '1' && t[0] <= '9'){
            int cnt = 1;
            for(int j = 1; j < t.size(); j++){
                if(!isdigit(t[j])){
                    cout<<"Invalid-Input"<<endl;
                    break;
                }
                cnt++;
            }
            if(cnt == t.size()){
                if(cnt <= 4) cout<<"ShortInt-Number"<<" ";
                else cout<<"LontInt-Number"<<" ";
            }

        } 
        else cout<<"Invalid-Input"<<" ";
    }
    cout<<endl;
    return 0;
}