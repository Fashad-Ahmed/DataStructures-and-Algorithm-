// LAB 2
#include <iostream>
using namespace std;

void INDEX(string T, string P){
	
	int index;
	int N = T.length();
	int M = P.length();
	int MAX = N-M+1;
	int K = 0;
	
	while (K <= MAX) {
		int L;
		for (L=0; L<M; L++) {
			if (P[L] != T[K+L-1]) {
				break;
			}
		}
		
		if (L == M) {
			index = K;
			}
		if (index <= 0) {
			index = 1;
			}
		K=K+1;
	}
	cout << index-1 << endl;		
}


int main() {
	string T;
	string P;
	
	cout << "Enter T: " << endl;
	fflush(stdin);
	getline(cin,T);
	fflush(stdin);
	
	cout << "\nEnter P: " << endl;
	fflush(stdin);
	getline(cin,P);
	fflush(stdin);
	
	INDEX(T, P);
	return 0;	
}










//// LAB 2
//#include <iostream>
//#include <conio.h>
//using namespace std;
//
//void INDEX(string T, string P){
//	
//	int index;
//	int N = T.length();
//	int M = P.length();
//	int MAX = N-M+1;
//	int K = 0;
//	
//	while (K <= MAX) {
//		int L;
//		for (L=0; L<M; L++) {
//			if (P[L] != T[K+L-1]) {
//				break;
//			}
//		}
//		
//		if (L == M) {
//			index = K;
//		}
//
//		else {
//			index = 0;
//		}
//		K=K+1;
//	}
//	cout << index << endl;		
//}
//
//
//int main() {
//	string T = "INFORMATION";
//	string P = "FOR";
//	INDEX(T, P);
//	return 0;	
//}






