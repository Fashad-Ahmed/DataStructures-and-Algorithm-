#include <iostream>
using namespace std;

int main() {

	int N;
	string value;	
	string item;
	cout << "Enter the length of Array: " << endl; cin >> N;
	string data[N] = {};
	
	for (int i=0; i<N; i++) {
		
			cout << "\nEnter Item Name : " << endl;

			fflush(stdin);
			getline(cin, value);
			fflush(stdin);	
			
			data[i] = value;		
	}

	cout << "Enter ITEM you want to abstract from the Array: " << endl;
	fflush(stdin);
	getline(cin,item);
	fflush(stdin);	
	int loc = 0;
	int K = 0;
	
	while (loc == 0 and K <= N) {
		if ( item == data[K]) {
			loc = K;
		}
		K=K+1;
	}
	if (loc == 0) {
		cout << "Item is not in Array Data" << endl;
	}
	else {
		cout << loc <<" is the location of " << item << " in Array" << endl;
	}	
	return 0;
}


//	string data[] = {"cricket", "football", "baseball", "basketball", "badminton"};
//	string item = "football";
//	int N = *(&data + 1) - data;
