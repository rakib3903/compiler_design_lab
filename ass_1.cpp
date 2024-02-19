#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Md. Tareq Zaman, Part-3,2011";
    // getline(cin, s);
    int nw = 1, nl = 0, nd = 0, no = 0; // number of words, letters, disits, and others;
    string sl = "", sd = "", so = ""; // seperate letters, disits, and others;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == ' ') nw++;

        if(isalpha(s[i])){
            nw++;
            sl += s[i];
        }
        else if(isdigit(s[i])){
            nd++;
            sd += s[i];
        }
        else {
            no++;
            so += s[i];
        }
    }
    
    cout<<"Case : 1"<<endl;
    cout<<"number of words : "<<nw<<endl;
    cout<<"number of letters : "<<nl<<endl;
    cout<<"number of digits : "<<nd<<endl;
    cout<<"number of others : "<<no<<endl;
    
    cout<<endl<<"Case : 2"<<endl;
    cout<<"string of lettes : "<<sl<<endl;
    cout<<"string of digits : "<<sd<<endl;
    cout<<"string of others : "<<so<<endl;

}

