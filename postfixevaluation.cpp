#include<iostream>
#include<stack>
using namespace std;
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-')  return val1-val2;
    if(ch=='*')  return val1*val2;
    if(ch=='/')  return val1/val2;

}
int main(){
    // int x=2*3/4-1;
    string s="79+4*8/3-"; // infix expression
    // we need two stacks, 1 for vals,1 for ops
    stack<int>val;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0-9)
        int ascii=(int)(s[i]);
        if(ascii>=48 && ascii<=57){
            val.push(ascii-48);
        }
        else{
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
       
        
    }
    // the operator stack can have some values
    // so make it empty
    
   cout<<val.top();
}