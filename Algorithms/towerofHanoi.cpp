#include <iostream>
using namespace std;

void towerOfHanoi(int n, char beg, char aux, char end){
	if(n == 1){
		cout << "Move disk " << n << " from " << beg << " to " << end << endl;
		return;
	}
	else{
		towerOfHanoi(n-1, beg, end, aux);
		beg = end;
		cout << "Move disk " << n << " from " << beg << " to " << end << endl;
		return towerOfHanoi(n-1, aux, beg, end);		
	}
}
int main(){
	int n;
	cout << "enter amount of pegs: " << endl;cin >> n;
	towerOfHanoi(n,'A','B','C');
	return 0;
}
