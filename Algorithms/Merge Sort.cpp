#include <iostream>
using namespace std;

void merging(int low, int mid, int high, int a[], int b[]){
	int l1, l2, i;
	for(l1 = low, l2 = mid+1, i = low; l1 <= mid && l2 <= high; i++){
		if(a[l1] <= a[l2]){
			b[i] = a[l1++];
		}
		else{
			b[i] = a[l2++];
		}
	}
	
	while(l1 <= mid) {
		b[i++] = a[l1++];
	}
	while(l2 <= high){
		b[i++] = a[l2++];
	}
	for(i = low; i <= high; i++){
		a[i] = b[i];
	}
}

void sort(int low, int high, int a[], int b[]){
	int mid;
	if(low < high){
		mid = (low + high)/2;
		sort(low,mid,a,b);
		sort(mid+1,high,a,b);
		merging(low,mid,high,a,b);
	}
	else{
		return;
	}
}

int main(){
	int N;
	int value;	
	cout << "Enter the length of Array: " << endl; cin >> N;
	int a[N] = {};
	int len = N-1;
	int b[len];
	
	for(int i=0; i<N; i++) {
		cout << "Enter value: " << endl; cin >> value;
		a[i] = value;
	}	
	
	int x;
	cout << "Before Sorting: " << endl;
	for(x = 0; x <= len; x++){
		cout << a[x] << " ";
	}
	cout << endl;
	sort(0,len, a, b);
	cout << "After Sorting: " << endl;
	for(x = 0; x <= len; x++){
		cout << a[x] << " ";
	}
	return 0;
}
