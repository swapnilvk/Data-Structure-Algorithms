/*
@author: Swapnil Vivek kulkarni
Checking for Loop in Linked List
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

bool isLoop(struct node *f) {
    struct node *p;
    struct node *q;
    p = q = f;

    do {
        p = p->next;
        q = q->next;
        q = q ? q->next : nullptr;
    } while(p && q && p != q);
    
    if(p == q)
        return true;
    else
        return false;
} 

int main() {
	int a[] = {10,20,30,40,50,60};
    
	create(a,6);
    //Create loop in linked list
    
    struct node *t1 = head->next->next;
    struct node *t2 = head->next->next->next->next->next;
    t2->next = t1;
    //print(head);    
    cout<<endl<<isLoop(head)<<endl;

	return 0;
}

