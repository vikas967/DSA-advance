#include <iostream>
#include<queue>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int arr[10];
    Queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==10){
            cout<<"queue is full"<<endl;
            return;
        }
        else
        arr[b]=val;
        b++;
    }
    void pop(){
    if(f-b==0){
         cout<<"Queue is empty";
        return;
    }
    f++;
    }
    int front(){
        if(f-b==0){
         cout<<"Queue is empty";
        return -1;
    }
    return arr[f];
    }
    int back(){
        if(f-b==0){
         cout<<"Queue is empty";
        return -1;
    }
    return arr[b-1];
    }
    int size(){
        return b-f;
    }
   bool empty(){
    if(f-b==0) return true;
    else false;
   }
   void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
    
};

 
int main()
{
   Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.push(50);
    q.push(60);
      q.display();
    q.push(70);
    q.push(80);
    
 
  
  
}