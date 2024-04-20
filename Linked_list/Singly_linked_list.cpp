#include <iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(node* &head,int data)
{
    node* temp = new node(data);
    temp->next = head;
    head = temp;
}

void InsertAtTail(node* &head,int data)
{
    node* tempTravel = head;
    
    while(tempTravel->next)
    {
        tempTravel = tempTravel->next;
    }
    node* temp = new node(data);
    temp->next = NULL;
    tempTravel->next = temp;
}

void PrintLinkedList(node* head)
{
    node* temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    node* head = new node(-1);
    InsertAtHead(head,50);
    InsertAtHead(head,40);
    InsertAtHead(head,30);
    InsertAtHead(head,20);
    InsertAtHead(head,10);
    PrintLinkedList(head);

    return 0;
}