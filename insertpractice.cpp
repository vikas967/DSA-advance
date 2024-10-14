#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(){
        this->val=val;
        this->next=NULL;
    }
    };

    class linklist{
        public:
        node* head;
        node* tail;
        int size;
        linklist(){
            head=NULL;
            tail=NULL;
            size=0;
        }
        void insertend(int val){
            node*temp=new node(val);
            if(size==0){
                head=tail=NULL;
            }
            else{
                tail->next=temp;
                tail=temp;
            } 
            size++;
        }
        void insertbeg(int val){
            node*temp=new node(val);
            if(size==0){
                head=tail=NULL;
            }
            else{
                temp->next=head;
                temp=head;
            } 
            size++;
        }
        void insertatidx(int val,int idx){
            node*t=new node(val);
            node*temp=head;
           if(idx==0) insertbeg(val);
            if(idx==size) insertend(val);
            else{
                for(int i=0;i<idx-1;i++){
                   temp=temp->next;
                }
                t->next=temp->next;
                temp->next=t;
            }
        }
        void display(){
            node*temp=head;
            while(temp!=NULL){
                cout<<temp->val<<" ";
                temp=temp->next;
            }

        }

    };

int main(){
    linklist ll;
    ll.insertbeg(10);
    ll.display();

}