#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* takeInput(){
    int x;
    cout<<"Enter the values of LinkedList: "<<endl;
    cin>>x;

    Node* head = NULL;
    Node* tail = NULL;
    while (x != -1)
    {
        if (head == NULL)
        {
            Node* a = new Node(x); // remember you should not repeat statements, this could be written upside once
            head = a;
            tail = head;
        }else
        {
            Node* newNode = new Node(x); // repeated
            tail->next = newNode;
            tail = tail->next;
        }

        cin>>x;
    }
    cout<<"LinkedList Created"<<endl;
    return head;
}

void printList(Node* head){
    cout<<"LinkedList Data: ";
    Node*temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

Node* reverseLL(Node* current){
    if (current->next == NULL || current == NULL)
    {
        return current;
    }
    Node* fragment = reverseLL(current->next);
    Node* temp = fragment;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = current;
    //but here current's next is not right, so lets declare it NULL;
    temp->next->next = NULL;
    return fragment;
}


int main(){


    Node* head = takeInput();
    Node* newHead = reverseLL(head);
    printList(newHead);
    return 0;
}