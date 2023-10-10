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
        if((t[0] >= 'a' && t[0] <= 'h') || (t[0] >= 'A' && t[0] <= 'H') || 
        (t[0] >= 'o' && t[0] <= 'z') || (t[0] >= 'O' && t[0] <= 'Z')){
            int cnt = 1;
            for(int j = 1; j < t.size(); j++){
                if(!isalpha(t[j]) && !isdigit(t[j])){
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
                cnt++;
            }
            if(cnt == t.size())
            cout<<"Float-Variable"<<" ";
        }else if(t[0] == '0'){
            if(t.size() < 3 || t[1] != '.') cout<<"Invalid-Input"<<" ";
            else{
                int cnt = 0;
                for(int j = 2; j < t.size(); j++){
                    if(!isdigit(t[j])){
                        cout<<"Invalid-Input"<<endl;
                        break;
                    }
                    cnt++;
                }
                if(cnt == 2) cout<<"Float-Number"<<" ";
                else if(cnt > 2)cout<<"Double-Number"<<" ";
                else cout<<"Invalid-Input"<<" ";  
            }

        }else if(t[0] >= '1' && t[0] <= '9'){
            int j;
            for(j = 1; j < t.size(); j++){
                if(t[j] == '.') break;
                if(!isdigit(t[j])){
                    cout<<"Invalid-Input"<<" ";
                    break;
                }
            }
            if(t[j] == '.'){
                int cnt = 0;
                for( j = j + 1; j < t.size(); j++){
                    if(!isdigit(t[j])){
                        cout<<"Invalid-Input"<<endl;
                        break;
                    }
                    cnt++;
                }
                
                if(cnt == 2) cout<<"Float-Number"<<" ";
                else if(cnt > 2) cout<<"Double-Number"<<" ";
                else cout<<"Invalid-Input"<<" ";  
            }
        }
        else cout<<"Invalid-Input"<<" ";
    }
    cout<<endl;
    return 0;
}