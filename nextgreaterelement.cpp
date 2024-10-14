#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4};              // this code have more time complexity because loop do baar chl rhah 
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]<arr[j]){
            cout<<arr[j]<<" ";
            break;  
        }
    }
  }
}