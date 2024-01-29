#include<bits/stdc++.h>

using namespace std;

vector<string>syntaxTree(50, "                                 ");


bool isOperator(char c){
    return c == '+' || c == '-' || c == '*' || c == '/';
}


void synTree(string s){
    int row = 0, col = 2;
    for(int i = 0; i < s.size(); i++){
        if(isOperator(s[i])){
            syntaxTree[row][col] = s[i];
            syntaxTree[row+1][col-1] = '/';
            syntaxTree[row+1][col+1] = '\\';
            syntaxTree[row+2][col-2] = s[i-1];
            row += 2;
            col += 2; 
        }
    }
    syntaxTree[row][col] = s.back();
}






int main(){
    freopen("file.txt", "r", stdin);
    string s;
    getline(cin, s);
    synTree(s);
    for(string a:syntaxTree){
        cout<<a<<endl;
    }
    return 0;
}