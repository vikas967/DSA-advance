#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
   if(ch=='+' || ch=='-') return 1;
   else return 2; 
}
string solve(string val1,string val2,char ch){
string s="";
s.push_back(ch);
s += val1;
s += val2;
return s;
}
int main(){
    // int x=2*3/4-1;
    string s="(2+6)*4/8-3"; // infix expression
    // we need two stacks, 1 for vals,1 for ops
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0-9)
        int ascii=(int)(s[i]);
        if(ascii>=48 && ascii<=57){
            val.push(to_string(s[i]-48));
        }
        else{ // this is not a digit
        if(op.size()==0)  op.push(s[i]); 
        else if(s[i]=='(') op.push(s[i]);
        else if(op.top()=='(') op.push(s[i]);
         else if(s[i]==')'){
            while(op.top()!='('){
                // work
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
      string val1=val.top();
        val.pop();
        string ans= solve(val1,val2,ch);
        val.push(ans);
            }
            op.pop();
        }
        else if(prio(s[i])>prio(op.top())) op.push(s[i]);
       
        else{  // prio(s[i])<=prio(op.top())
       while(op.size()>0 && prio(s[i])<= prio(op.top())){
        // i have to do work
        char ch=op.top();
        op.pop();
       string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);
        val.push(ans);
       }
       op.push(s[i]);
        }
        }
    }
    // the operator stack can have some values      3+6*9
    // so make it empty
    while(op.size()>0){
        //work
              char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans= solve(val1,val2,ch);
        val.push(ans);

    }
    cout<<val.top();
}