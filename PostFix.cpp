#include<iostream>
#include<stack>
using namespace std;
int evaluate(string s){
    stack<int> st;
    for(char c:s){
        if(isdigit(c)){
            st.push(c-'0');
        }
        else{
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            if(c=='+')
                st.push(a+b);
            else if(c=='-')
                st.push(a-b);
            else if(c=='*')
                st.push(a*b);
            else if(c=='/')
                st.push(a/b);
        }
    }
    return st.top();
}
int main(){
    string s;
    cin>>s;
    cout<<evaluate(s);
    return 0;
}