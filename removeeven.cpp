#include <bits/stdc++.h>
using namespace std;
 
void Print(queue<int>& Q)
{
    while (!Q.empty()) {
        cout << Q.front() << " ";
        Q.pop();
    }
}
 
void removeeven(queue<int>& Q){
    int n=Q.size();
    for(int i=0;i<n;i++){
      if(i%2==0) Q.pop();
      else{
        int x=Q.front();
        Q.pop();
        Q.push(x);
      }
    }
}

 
int main()
{
    queue<int> Q;
    Q.push(10);
    Q.push(20);
    Q.push(30);
    Q.push(40);
    Q.push(50);
    Q.push(60);
    Q.push(70);
    Q.push(80);
    Q.push(90);
    Q.push(100);
 
    removeeven(Q);
    Print(Q);
}