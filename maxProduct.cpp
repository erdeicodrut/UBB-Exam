#include <iostream>

using namespace std;

int main() {

	int n,i, sum = 0, sumTemp = 0, a, b, c; cin >> n;

	int v[n]; //initializing the vector

	for (i = 0; i < n; i++) { 	//reading numss
		cin >> v[i];	
	}

	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				sumTemp = v[i]*v[j]*v[k];
				if (sumTemp > sum) {	//storing the max sum
					sum = sumTemp;		
					a = v[i];			//memorising the values
					b = v[j];
					c = v[k];
				}
			}		
		}		
	}

	cout << a << " " << b << " " << c;

	return 0;
}
