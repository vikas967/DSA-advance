#include<iostream>
using namespace std;
 class node{                         
    public:
        int val;
        node*next;
        int size;
           node(int val){
            this->val=val;
            this->next=NULL;
            
        }
    };
   
    void display(node*head,int count){
        node*temp=head;
        count=0;
        while(temp!=NULL){
            cout<<temp->val<<endl;
            temp=temp->next;
            count++;
        }
        cout<<"count is/size "<<count; 
    }
    int main(){
        node*a=new node(10);
         node*b=new node(20);
          node*c=new node(30);
           node*d=new node(40);
           a->next=b;
           b->next=c;
           c->next=d;
           int count;
        //    node*temp=a;
        //    while(temp!=NULL){
        //     cout<<temp->val<<" ";
        //     temp=temp->next; 
        //    }
        display(a, count);
    }