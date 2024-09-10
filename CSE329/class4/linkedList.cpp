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

//implementing stack with ll

node* insertAtbegin(node* head,int key){ // push in stack
    node* toAdd=new node(key);
    toAdd->next=head;
    head=toAdd;

    return head;

}

node* deletion(node* head){  // pop fn
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

void printReverseList(node* head){
    if(!head) return;

    printReverseList(head->next);
    cout<<head->data<<" ";

}

node* reverseList(node* head){
    if(!head) return NULL;

    node* curr=head;
    node* prev=NULL;
    node* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
       
    }

    return prev;
}
int main(){
node* head=new node(11);
head=insertAtbegin(head,22);
head=insertAtbegin(head,23);
head=insertAtbegin(head,21);
// head=deletion(head);
// head=deletion(head);

printList(head);
cout<<endl;
head=reverseList(head);
printList(head);
// printReverseList(head);

}