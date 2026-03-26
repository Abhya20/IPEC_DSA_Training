#include <iostream>
using namespace std;
class nodeList{
    public:
    int val;
    nodeList* next;

    nodeList(int x){
        val=x;
        next=NULL;
    }
};
void printList(nodeList* head){
    nodeList* temp = head;
    while(temp!=NULL){
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void middleNode(nodeList* head){
    nodeList* slow = head;
    nodeList* fast = head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;
    }
    cout << slow->val;
}
int main(){
    nodeList* head = new nodeList(1);
    nodeList* second = new nodeList(2);
    nodeList* third = new nodeList(3);
    nodeList* fourth = new nodeList(4);
    nodeList* fifth = new nodeList(5);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
      
    printList(head);
    middleNode(head);
}
