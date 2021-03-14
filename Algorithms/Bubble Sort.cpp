#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int N;
	int value;
	
	cout << "\n Enter the length of Array: " << endl; cin >> N;
	
	int data[N] = {};
	int item;	
	
	for(int i=0; i<N; i++) {
		cout << "\n Enter value: " << endl; 
		cin >> value;			
		data[i] = value;
	}
	
	for (int K=0; K<N-1; K++){
		int ptr = 0;
		while (ptr <= N-K-2){
			if (data[ptr] > data[ptr+1]){
				swap(data[ptr],data[ptr+1]);
			}
			ptr++;
		}
	}
	cout << "Sorted Array: " << endl;
	for (int i=0; i<N; i++){
		
		cout << data[i] << " , ";
	}
	return 0;
}
