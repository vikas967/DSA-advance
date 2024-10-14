#include<iostream>
using namespace std;
 class node{                         
    public:
        int val;
        node*next;
        node(int val){
            this->val=val;
            this->next=NULL;
        }
    };
    void insertatend(node *head,int val){
        node*t=new node(val);
       while(head->next!=NULL)
        head=head->next;
        head->next=t;
        
    }
    void insertatend(node *head,int val){
        node*t=new node(val);
       while(head->next!=NULL)
        head=head->next;
        head->next=t; 
        
    }
    void display(node*head){           // by using recursion  
        if(head!=NULL){  
            // display(head->next);             // for print in reverse order
            cout<<head->val<<endl;
             display(head->next);             // for in simple order
           
        }
    }
    int main(){
        node*a=new node(10);
         node*b=new node(20);
          node*c=new node(30);
           node*d=new node(40);
           a->next=b;
           b->next=c;
           c->next=d;
           display(a);
           insertatend(a,80);
             display(a);

    }