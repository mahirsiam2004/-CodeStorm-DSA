#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
void print(Node *head){
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void printReverse(Node *tail){
    Node *temp=tail;
    while(temp!=nullptr){
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

int main(){
    Node *head=new Node(10);
    Node *a=new Node(20);
    Node *b=new Node(30);
    Node *c=new Node(40);
    Node *tail=c;
head->next=a;
a->prev=head;
a->next=b;
b->prev=a;
b->next=c;
c->prev=b;

    print(head);
    printReverse(tail);
    return 0;
}