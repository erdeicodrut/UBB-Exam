#include <iostream>

using namespace std;

void citire(int n, int *v) { //getting the user input into the array
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
}

void permut(int n, int *v) {	//moves all the elements of the array one unit to left
	v[n] = v[0];			
	for (int i = 0; i < n - 1; i++) {
		v[i] = v[i + 1];
	}	
}

bool verificarePalindrom(int n, int *v) {	//checking the array if it's a palindrom
	for (int i = 0; i < n/2 ; i++) {
		if (v[i] != v[n-i]) {
			return false;
		}
	}
	return true;
}

int nrPermutari(int n, int *v) {	//finds out the number of moves of permut(n,v) untill verificarePalindom(n,v) == true
	int NrPermutari = 1;
	while (verificarePalindrom(n,v) == false ||	 NrPermutari == (n + 1)) {	//if nothing works aka you crossed the n number 
																			//(which represents the total number of numbers) 
																			//the number the function returns is n+1
																			//otherwise the number returned is the number of permutations needed
																			// to make it palindrome 
		permut(n,v);
		NrPermutari++;
	}
	return NrPermutari;
}

void afisare(int n, int *v) {
	// cout << nrPermutari(n,v); // debuging
	if (nrPermutari(n,v) > n) {
		cout << "Nu"; //Nu means No and basicaly says that it's not possibile to get the array to a palindrome state by permuting
	} else {
		cout << "Da"; //Da means Yes and says that it can be done 
	}
	cout <<endl;
}


int main() {
	int n; cin >> n;
	int v[100];
	citire(n,v);
	afisare(n,v);
}
