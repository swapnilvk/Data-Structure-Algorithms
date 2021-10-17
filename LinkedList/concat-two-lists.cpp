/*
@author: Swapnil Vivek kulkarni
Concatenating two linked lists
    1. Create two lists 
    2. Print both the list
    3. Concat lists
    4. print concatenated list
*/
	
#include<iostream>

using namespace std;

struct node {
	int data;
	struct node* next;
}*first, *second, *third;

void create1(int a[], const int & size) {
	struct node *last;
	for(int i=0; i<size; i++) {
		if(first == nullptr) {
			first = new node();
			first->data = a[i];
			first->next = nullptr;
			last = first;
		} else {
			struct node *temp = new node();
			temp->data = a[i];
			temp->next = nullptr;
			last->next = temp;
			last = temp;
		}
	}
}

void create2(int a[], const int & size) {
	struct node *last;
	for(int i=0; i<size; i++) {
		if(second == nullptr) {
			second = new node();
			second->data = a[i];
			second->next = nullptr;
			last = second;
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
    cout<<"NULL"<<endl;
}

void concat(struct node *p, struct node *q) {
    third = p;
    while(p->next != nullptr) {
        p = p->next;
    }
    p->next = q;
}

int main() {
	int a[] = {10,20,30,40,50};
    int b[] = {1,2,3,4,5};
	create1(a,5);
	create2(b,5);
    concat(first, second);
    print(first); 
    print(second); 
    print(third);
	return 0;
}

