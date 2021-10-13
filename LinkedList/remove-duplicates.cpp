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

void remove_duplictes(struct node *p) {
	struct node *q = p->next;
	while(q != nullptr) {
		if(p->data != q->data) {
			p = q;
			q = q-> next;
		} else {
			p->next = q->next;
			delete q;
			q=p->next;
		}
	}
}

void print(struct node * p) {
	cout<<endl;
	while(p!=nullptr) {
		cout<<p->data<<" ";
		p=p->next;
	}
}

int main() {
	int a[] = {10,10,20,30,30,30};
	create(a,6);
	print(head);
	remove_duplictes(head);
	print(head);
	return 0;
}

