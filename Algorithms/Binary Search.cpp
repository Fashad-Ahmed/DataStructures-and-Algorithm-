#include <iostream>
using namespace std;

int main() {
	
	int N;
	string value;
	
	cout << "\n Enter the length of Array: " << endl; cin >> N;
	
	string data[N] = {};
	string item;	
	
	for(int i=0; i<N; i++) {
		cout << "\n Enter value: " << endl; 
		
		fflush(stdin);
		getline(cin, value);
		fflush(stdin);
			
		data[i] = value;
	}
	
	cout << "Enter item to search: " << endl;
	fflush(stdin);
	getline(cin, item);
	fflush(stdin);
	
	int loc;
	int beg = 0;
	int end =  (*(&data + 1) - data) - 1;
	int mid = ((beg + end)/2);
	
	while (beg <= end && data[mid] != item) {
		if (item < data[mid]) {
			end = mid - 1;
		}
		else {
			beg = mid + 1;
		}
		
		mid = ((beg + end)/2);
	}
	if (data[mid] == item) {
		loc = mid;
		cout << loc << " index is the location of " << item << " in Array." << endl;
	}
	else {
		loc = NULL;
		cout << item << " is'nt present in Array, therefore location of item is NULL." << endl; 
	}
	
	return 0;
}
