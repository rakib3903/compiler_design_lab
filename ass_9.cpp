#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("file.txt", "r", stdin);
    string s;
    vector<string>PN =  { "Sagor", "Selim", "Salma", "Nipu"};
    vector<string>P =  { "he", "she", "I", "we","you", "they"};
    vector<string>N =  { "book", "cow", "dog", "home","grass","rice","mango"};
    vector<string>V =  { "read", "eat", "take", "run","write"};

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
    if(v.size() > 3 || v.size() <= 1){
        cout<<"Incorrect Sentence"<<endl;
        return 0;
    }else if(!(find(PN.begin(), PN.end(), v[0]) != PN.end()) && !(find(P.begin(), P.end(), v[0]) != P.end())){
        cout<<"Incorrect Sentence"<<endl;
        return 0;
    }else{
      if(!(find(V.begin(), V.end(), v[1]) != V.end())){
        cout<<"Incorrect Sentence"<<endl;
        return 0;
      }
      if(v.size() == 3){
        cout<<"Correct Sentence"<<endl;
        return 0;
      }else{
        if(!(find(N.begin(), N.end(), v[2]) != N.end())){
          cout<<"Incorrect Sentence"<<endl;
          return 0;
        }
        cout<<"Correct Sentence"<<endl;
        return 0;
      }
    }
}