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
    class linkedlist{
        public:
        node*head;
        node*tail;
        int size;
        linkedlist(){
            head=NULL;
            tail=NULL;
            size=0;
        }
        void insertend(int val){
            node*temp=new node(val);
            if(size==0){
                head=tail=temp;

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
                head=tail=temp;

            }
            else{
                temp->next=head;
                head=temp;
            }
            size++;
        }
        void insertidx(int idx,int val){    
           if(idx<0 || idx>size) cout<<"invalid input";
            if(idx==0) insertbeg(val);
            if(idx==size) insertend(val);
            else{
                node*t=new node(val);
                node*temp=head;
                for(int i=0;i<idx-1;i++){
                    temp=temp->next;

                }
                t->next=temp->next;
                temp->next=t;
                size++;
            }
        }
        int  getelementidx(int idx ){  // searching
        if(idx<0 || idx>=size){
            cout<<"invalid ";
            return -1;

        }
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
        else{
            node*temp=head;
            for(int i=0;i<=idx;i++){
                temp=temp->next;
            }
            return temp->val;
        }
       }


       void deletehead(){
        if(size==0) cout<<"list is empty";
        if(size==1){
            head=tail=NULL;
            size=size-1;
        }
        if(size>1){
            head=head->next;
            size=size-1;
        }
       }
       void deleteidx(int idx){
        if(idx==0) deletehead();
        else{
            node*temp=head;
            for(int i=1 ;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
        }
       }


        void display(){
           node*temp=head;
           while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
           }
           cout<<endl;
        }
       

    };
    int main(){
        linkedlist ll;
        ll.insertend(10);
       ll.display();
       ll.insertend(20);
       ll.display();
       ll.insertbeg(50);
       ll.display();
       ll.insertidx(1,100);
       ll.display();
       ll.deletehead();
       ll.display();
       ll.deleteidx(1);
       ll.display();
       cout<<ll.getelementidx(1);
      
    //    cout<<endl;
    //    cout<<ll.getelementidx(2 );

    }