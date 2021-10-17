/*
@author: Swapnil Vivek kulkarni
Concatenating two linked lists
    1. Create two lists 
    2. Print both the list
    3. Merge two lists
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

void merge (struct node *p, struct node *q) {
    struct node *last;
    if(p->data < q->data) {
        third = last = p;
        p = p->next;
    } else {
        third = last = q;
        q = q->next;
    }
    third->next = nullptr;

    while(p && q) {
        if(p->data < q->data) {
            last->next = p;
            last = p;
            p = p->next;
            last->next = nullptr;
        } else {
            last->next = q;
            last = q;
            q= q->next;
            last->next = nullptr;
        }
    }
    if(p)
        last->next = p;
    else
        last->next = q;
}

int main() {
	int a[] = {1,2,5,6,9};
    int b[] = {0,3,4,7,8};
	create1(a,5);
	create2(b,5);
    print(first); 
    print(second); 
    merge(first, second);
    print(third);
	return 0;
}

