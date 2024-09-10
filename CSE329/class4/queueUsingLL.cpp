#include<iostream>
using namespace std;


struct node{
    int data;
    node* next;

    node(int val){
        this->data=val;
        next=NULL;
    }

};

node* enqueue(node* head,int key){ // insert from end in LL
    node* toAdd=new node(key);
    node* temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=toAdd;
 
    

    return head;

}

node* dequeue(node* head){  // pop fn
    if(!head) return NULL;

    node* temp=head;
    head=head->next;
    delete(temp);
    return head;
}

void printList(node* head){
    if(head==NULL) return;

    node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
node* head=new node(11);
head=enqueue(head,22);
head=enqueue(head,23);
head=enqueue(head,21);
head=dequeue(head);
head=dequeue(head);

printList(head);


}