#include<bits/stdc++.h>
using namespace std;

bool number(const string &s) {
    regex pattern("^[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?$");
    return regex_match(s, pattern);
}
bool cont(string s){
   for( int i = 0; i < s.length(); i++ ) {
      if(isdigit(s[i])) {
         return false;
      }
   }
   return true;
}

 int main(){
    vector<string>keyword={"int", "float", "double", "include", "if", "else" ,"namespace",
    "void", "include", "main", "return", "define", "do", "while", "for"};
    
    vector<string>oprt = {"+", "-", "%", "*", "/", "^"};

    freopen("file.txt", "r", stdin);
    string s;
    getline(cin, s);
    vector<string>v;
    string t = "";
    for(int i = 0; i < s.size(); i++){
      if(s[i] ==' ') {
         v.push_back(t);
         t = "";
      }else{
         t += s[i];
      }
    }
    v.push_back(t);

    for(int i = 0; i < v.size(); i++){
      if(find(keyword.begin(), keyword.end(), v[i])!= keyword.end())
         cout<<"Keyword"<<" ";
      else if(find(oprt.begin(), oprt.end(), v[i])  != oprt.end())
         cout<<"Arithmetic-Operator"<<" ";
      else if(number(v[i])){
        string t = v[i];
         int j;
         for(j = 0; j < t.size(); j++){
            if(t[j] == '.') break;
         }
         if(j == t.size()) cout<<"Integer-Number"<<" ";
         else if(t.size() - j - 1 >= 3) cout<<"Double-Number"<<" ";
         else cout<<"Float-Number"<< " ";
      }
      else if(isalpha(v[i].at(0))){
         if(cont(v[i])) cout<<"Identifier"<<" ";
         else cout<<"Invalid"<<" ";
      }
      else cout<<"Invalid"<<" ";
   }
   cout<<endl;
   return 0;
 }