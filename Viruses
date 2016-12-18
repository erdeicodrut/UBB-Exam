#include <iostream>

using namespace std;

int main() {
	// n = total number of viruses
	// dropDead = the number of Viruses should remain b4 extinction
	// nrOre = number of hours in which Viruses go extinct
	int n, dropDead, nrOre = 0;

	cin >> n >> dropDead;

	while (n >= dropDead) { 
	//getting the conditions
		if (n%2 == 0) {	
			n/=2;
		} else {	
			n+=1;	
		}
		// incrementing the number of hours bc 1 hour passed
		nrOre++; 
	}

	// giving in the answer
	cout << nrOre << endl;


	return 0;
}
