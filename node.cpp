
#include<iostream>
using namespace std;
 class node{                           // proper linked list code in a systematic way
    public:
        int val;
        node*next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
    };
int main(){

    node a(10);                                                                 // overall summary is we call all node using a single node 

    node b(20); 
    node c(30);
    node d(140);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    // (a.next)->val=70;
    // cout<<(a.next)->val; // it's printed value of b using a
    // cout<<b.val;
    // cout<<((a.next)->next)->val;  // it's printed value of c using of a
    // cout<<(((a.next)->next)->next)->val; // it's printed value of d using a       
  node temp=a;
  cout<<&a.val<<endl;
    cout<<temp.val<<endl<<&temp.val;
    
    cout<<(temp.next)->val<<endl;
    
    
    
    
  
}

