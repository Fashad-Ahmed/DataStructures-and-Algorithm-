#include <iostream>
#include <stdio.h>
using namespace std;

int stack[90], top = -1, maxStr = 90;

void Push(int item){
	if (top == maxStr){
		cout << "OVERFLOW" << endl;
	}
	else {
		top++;
		stack[top] = item;
	}
}

void Pop(int item){
	if (top == 0){
		cout << "UNDERFLOW" << endl;
	}
	else{
		item = stack[top];
		top--;
	}
}

void display(){
	if (top >= 0){
		cout << "Stack: " << endl;
		for (int i=top; i>=0; i--){
			cout << " | 	" << stack[i] << " 	 | " << endl; 
		}
	}
	else{
		cout << "Stack is  empty" << endl;
	}
}

int main(){
	int item, choice;
	cout << "1) Push a value in Stack." << endl;
	cout << "2) Pop a value from Stack." << endl;
	cout << "3) Display current stack." << endl;
	cout << "4) Exit" << endl;  	
	
	do{
		cout << "Enter the operation you want to perform: " << endl;cin >> choice;
		switch(choice){
			case 1:{
				cout << "Enter value to push: " << endl;cin >> item;
				Push(item); 
				break;
			}
			case 2:{
				Pop(item); 
				cout << item << " removed successfully from stack." << endl;	
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout << "Program terminated" << endl;
				break;
			}
			default:{
				cout << "Invalid Choice" << endl;
			}
		}
	}
	while (choice != 4);
	return 0;
}
