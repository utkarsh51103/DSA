#include <iostream>
using namespace std;

string rev(string s){
    string st = "";
    int size = s.size();
    for(int i=0;i<size;i++){
        if(s[i]=='('){
            st = ')' + st;
        }else if(s[i]==')'){
            st = '(' + st;
        }else{
            st = s[i] + st;
        }
    }
    return st;
}

int priority(char c){
    if(c == '^')return 3;
    else if(c == '*'|| c=='/')return 2;
    else if(c == '+'|| c=='-')return 1;
    else return -1;
}

void convert(string s){
    string pre = rev(s);
    int size = pre.size();
    string ans = "";
    stack<char> st;
    for(int i=0;i<size;i++){
        char ch = pre[i];
        if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')||ch>='0'&&ch<='9'){
             ans = ans + ch;
        }else if(ch=='('){
            st.push(ch);
        }else if(ch==')'){
            while(st.top()!='('){
                ans = ans + st.top();
                st.pop();
            }
            st.pop();
        }else{
            while(!st.empty() && priority(ch)<priority(st.top())){
                ans = ans + st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        ans = ans + st.top();
        st.pop();
    }
    ans = rev(ans);
    cout << ans << endl;
}

int main()
{
    string s;
    cin >> s;
    convert(s);
}