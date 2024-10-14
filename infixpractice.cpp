#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="2*(6+3)/3-2";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<str.size();i++){
        int ascii=(int) str[i];
        if(str[i]>48 || str[i]<57){
            val.push(str[i]-48);
        }
      else{
        if(op.size()==0) op.push(str[i]);
        if()
      }
    }

}