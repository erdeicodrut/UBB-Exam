#include <iostream> 

using namespace std;

int main() {

	int old[100] = {1}; //declaring the first line of the matrix
	int next[100];		//declaring the placeholder for the 2nd line and the next one and the next one and so on
	int r;cin >>r;		//declaring user input
	int p,j; 			//declaring iterators

	for (int i = 0; i < r; i++) { 				//going trough each line of the matrix 
		for (j = 0; j < i + 1; j++) {			
			if (j == 0 || j == i) {			//setting the margins
				next[j] = 1;
			} else {
				next[j] = old[j-1] + old[j];	//calculating the currents
			}
			cout << next[j];			//showing off		

		}
		cout <<endl;

		for (p = 0; p < j - 1; p++) {			//making the new line the old one because we showed it in the console
			old[p] = next[p];					
		}
		old[p] = 1;					//in Romania is called "treaba de carpaci"
	}

	return 0;
}
