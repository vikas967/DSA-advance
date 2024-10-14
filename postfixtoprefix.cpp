#include<iostream>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);
    s += val1;
    
s += val2;
return s;

}
int main(){
    // int x=2*3/4-1;
    string s="79+4*8/3-"; // infix expression
    // we need two stacks, 1 for vals,1 for ops
    stack<string>val;
    for(int i=0;i<s.length();i++){
        // check if s[i] is a digit (0-9)
        int ascii=(int)(s[i]);
        if(ascii>=48 && ascii<=57){
            val.push(to_string(ascii-48));
        }
        else{
           string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
        }
       
        
    }
   
    
   cout<<val.top();
}