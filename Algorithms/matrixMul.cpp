#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	
	int a[10][10], b[10][10], c[10][10], m, p, n;
	cout << "enter rows for first matrix" << endl;cin >> m; 
	cout << "enter columns for first matrix & rows for second matrix" << endl;cin >> p; 
	cout << "enter columns for second matrix" << endl;cin >> n; 
	
    cout << "FOR MATRIX A" << endl;
    for (int i=0; i<m; i++){
    	for (int j=0; j<p; j++){
    		cout << "enter element A" << (i+1) << (j+1) << endl;cin >> a[i][j];
		}
	}

 	cout << "FOR MATRIX B" << endl;
    for (int i=0; i<p; i++){
    	for (int j=0; j<n; j++){
    		cout << "enter element B" << (i+1) << (j+1) << endl;cin >> b[i][j];
		}
	}
	
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			c[i][j] = 0;
			for (int k=0; k<p; k++){
				c[i][j] += ( a[i][k] * b[k][j] );
			}
		}
	}

	cout << "Final Matrix C: " << endl;
	for (int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cout << " " << c[i][j];
			if ( j == n-1 ){
				cout << endl;
			}
		}
	}	
	
	return 0;
}

