#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> &q){  // printing of queue
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<" ";
        q.pop();
        q.push(q.front());
    }
}
int main(){
    queue<int>q;
    //push
    //pop
    //front->top
    //size
    // back->last
    q.push(10);
     q.push(120);
      q.push(102);
       q.push(210);
       cout<<q.front()<<endl;
       cout<<q.size()<<endl;
        display(q);

}