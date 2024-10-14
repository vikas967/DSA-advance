#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={100,80,60,81,70,60,75,85}; 
    stack<int>st;
    int ans[5];            
  int n=sizeof(arr)/sizeof(arr[0]);
  ans[0]=-1;
  int span[n];
  st.push(0);
  for(int i=1;i<n;i++){
   while(arr[st.top()]<=arr[i]){
   st.pop();
   }
   if(st.size()==0) ans[i]=-1;
   else ans[i]=st.top();
   st.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        span[i]=i-ans[i];
        cout<<span[i]<<" ";
    }
  }