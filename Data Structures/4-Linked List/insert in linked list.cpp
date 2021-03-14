#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

struct node{
	string data;
	struct node*next;
};
struct node*head;
void insert(string data, int n);
void show();
void insert(string data, int n){
	node*temp1 = new node;
	temp1-> data = data;
	temp1-> next = NULL;
	if(n == 1){
		temp1-> next = head;
		head = temp1;
		return;
	}
	node*temp2 = head;
	for(int i=0; i<n-2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void show(){
	cout << "LIST:" << endl;
	node*temp = head;
	while(temp != NULL){
		cout << " " << temp->data;
		temp = temp->next;
	}
	cout << "\n";
}
int main(){
	head = NULL;
	insert("2015", 1);
	insert("Nokia", 2);
	insert("8gb", 3);
	
	show();
	return 0;
}
