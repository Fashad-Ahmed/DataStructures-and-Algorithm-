#include <iostream>
using namespace std;

int main()
{
	int N;
	int value;	
	cout << "\n Enter the length of Array: " << endl; cin >> N;
	int data[N] = {};
	
	for(int i=0; i<N; i++) {
		cout << "\n Enter value: " << endl; cin >> value;
		data[i] = value;
	}	
	int loc = 0;
	int max = data[0];
	int K = 0;
	
	while (K <= N) {
		if (max < data[K]) {
			loc = K;
			max = data[K];
		}
		K++;
	}
	
	cout << "	Highest Value: " << max << endl;
	cout << "\n	Index of Highest Value: " << loc << endl;
    return 0;
}
