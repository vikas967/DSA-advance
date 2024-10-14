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
    node* deletenode(node*head,int target){
        if(head->val==target){
            head=head->next;
            return head;
        }
    node*temp=head;
    while(temp->next->val !=target){
temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    }
     void display(node*head){          
        if(head!=NULL){  
            
            cout<<head->val<<endl;
             display(head->next);            
           
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
           node*head=a;
           display(a);
           head=deletenode(a,20  );
           cout<<endl;
            display(head);
    }