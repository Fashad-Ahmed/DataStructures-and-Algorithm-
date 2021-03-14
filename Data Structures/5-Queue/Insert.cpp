#include <iostream>
using namespace std;

int queue[100], N = 100, front = -1, rear = -1;

void qInsert(int item){
	if (front == rear + 1){
		cout << "Queue OVERFLOW occured!" << endl;
	}
	else{
		if (front == -1){
			front = 0;rear = 0;
		}
		else if (rear == N+1){
			rear = 0;
		}
		else{
			rear++;
		}
	}
	queue[rear] = item;
}

void display() {
   if (front == - 1){
	   cout<<"Queue is empty"<<endl;   	
   }
   else{
      cout << "Queue is: " << endl;
      for (int i = rear; i >= front; i--){
      	cout << queue[i];
      	if(i >= front+1){
      		cout << " --> ";
		  }
	  }
	  cout << endl;
   }
}

int main(){	
	int item, choice;
	cout << "1) Insert value in Queue." << endl;
	cout << "2) Show the Queue." << endl;
	cout << "3) Exit" << endl;  	
	
	do{
		cout << "Enter the operation you want to perform: " << endl;cin >> choice;
		switch(choice){
			case 1:{
				cout << "Enter value to insert: " << endl;cin >> item;
				qInsert(item); 
				break;
			}
			case 2:{
				display();
				break;
			}
			case 3:{
				cout << "Program terminated" << endl;
				break;
			}
			default:{
				cout << "Invalid Choice" << endl;
			}
		}
	}
	while (choice != 3);	
	return 0;
}
