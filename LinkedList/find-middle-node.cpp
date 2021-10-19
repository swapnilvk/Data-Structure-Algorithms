/*
@author: Swapnil Vivek kulkarni
Find middle node of the linked list
*/
	
#include<iostream>

using namespace std;

struct node {
	int data;
	struct node* next;
}*head;

void create(int a[], const int & size) {
	struct node *last;
	for(int i=0; i<size; i++) {
		if(head == nullptr) {
			head = new node();
			head->data = a[i];
			head->next = nullptr;
			last = head;
		} else {
			struct node *temp = new node();
			temp->data = a[i];
			temp->next = nullptr;
			last->next = temp;
			last = temp;
		}
	}
}

void print(struct node * p) {
	cout<<endl;
	while(p!=nullptr) {
		cout<<p->data<<"->";
		p=p->next;
	}
}

void FindMiddleNode(struct node * f) {
    struct node *p;
    struct node *q;
    p = q = f;
    
    while(q) {
        q = q->next;
        q = q ? q->next : nullptr;
        p = p->next;
    }
    
    cout<<"\n Middle node is "<<p->data;
}

int main() {
	int a[] = {10,20,30,40,50,60};
    
	create(a,6);
    FindMiddleNode(head);
	return 0;
}

