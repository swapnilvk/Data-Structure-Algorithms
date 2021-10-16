/*
@author: Swapnil Vivek kulkarni
Reverse the given linkedlis 
  1.Reverse the pointes of linked list
  2. Reverse the pointers of linked list using recursion
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

void reverse(struct node *start) {
    print(start); //Print existing liked list

    struct node *p = start;
    struct node *q = nullptr;
    struct node *r = nullptr;
	while(p != nullptr) {
	    r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    start = q;

    print(start); //Print reveresed linked list
}


int main() {
	int a[] = {10,10,20,30,30,30};
	create(a,6);
	reverse(head);
	return 0;
}

