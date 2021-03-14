#include <iostream>
using namespace std;

int front = 0, rear = 4;

void qDelete(int queue[], int N, int front, int rear){
	if (front == -1){
		cout << "Queue UNDERFLOW occured!" << endl;
	}
	
	int item = queue[front];
	cout << "Item deleted: "<< item << endl;	
	if(front == rear){
		front = -1;
		rear = -1;
		}
	else if(front == N-1){
		front = 0;
		}
	else{
		front += 1;
	}
	
}

int main(){
	
	int queue[5] = {1,2,3,4,5};
	int N = 5;
	qDelete(queue, N, front, rear);
	qDelete(queue, N, front, rear);
	qDelete(queue, N, front, rear);
	
	return 0;
}
