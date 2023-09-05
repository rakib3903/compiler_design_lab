#include<bits/stdc++.h>
using namespace std;

bool isvowel(char s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' ||  
        s == 'A' || s == 'E' || s == 'I' || s == 'O' || s == 'U'){
            return  true;
    }else
    return false;
    
}

int main(){
    string s = "Munmun is the student of Computer Science and Engineering";
    int nv = 0, nc = 0; // number of vowels and consonants respectively
    set<char>v,c;
    string stofvowel = "", stofconsnt = "";
    vector<string>vec;
    for(int i = 0; i < s.size(); i++){

        if(isvowel(s[i])){
            nv++;
            v.insert(s[i]);
        }else{
            if(s[i] != ' '){
                nc++;
                c.insert(s[i]);
            }
        }
    }
    string p = "";
    for(int i = 0; i < s.size(); i++){
        
        if(s[i] != ' ') p += s[i];
        else{
            vec.push_back(p);
            p = "";
        }
    }
    vec.push_back(p);

    for(int i = 0; i < vec.size(); i++){
        p = vec[i];
        if(isvowel(p[0])) {stofvowel += vec[i]; stofvowel += ' ';}
        else{
            stofconsnt += vec[i];
            stofconsnt += ' ';
        }
        
    }
    cout<<"Number of vowels are : "<<nv<<endl;
    cout<<"Numbers of Consonant are : "<<nc<<endl;
    cout<<"Vowels used in the string are : ";
    for(auto i : v) cout<<i<<" ";
    cout<<endl;
    cout<<"Consonants used in the string are : ";
    for(auto i : c) cout<<i<<" ";
    cout<<endl;
    cout<<"String of vowel : " <<stofvowel<<endl;
    cout<<"String of consonant : " <<stofconsnt<<endl;



}