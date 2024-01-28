#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c == '^') return 3;
    else if(c == '*' || c == '/') return 2;
    else if(c == '+' || c == '-') return 1;
    else return -1;
}


void infixtopostfix(string s){
    string postfix = "";
    stack<char>st;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];

        if((c >='a' && c <= 'z') || (c >='A' && c <= 'Z'))  postfix += c;
        else if(c =='(') st.push(c);
        else if(c == ')'){
            while(st.top() != '('){
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else{
           while(!st.empty() && prec(c) <= prec(st.top())){
            postfix += st.top();
            st.pop();
           }
           st.push(c);
        }
    }

    while(!st.empty()){
            postfix += st.top();
            st.pop();
           }
           cout<<postfix<<endl;
           return ;
}

int main(){
    freopen("file.txt", "r", stdin);
    string s;
    getline(cin, s);
    infixtopostfix(s);
}