#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void usedNum(int* [], int);

int main()
{
	srand ( time(NULL) );
	int * optval[6];
	int rando = rand() % 5 + 1;
	*optval[0] = rando;
	int * usedNums[5];
	cout << "Yoo" << endl;

	for (int counter = 0; counter < 5; counter++) {
		*optval[counter] = rando;
		rando = rand() % 5 + 1;
		usedNum(usedNums, rando);
	} 
	cout << "Yoo" << endl;
	for(int x = 0; x < 5; x++) {	
		//rando = rand() % 5 + 1;
		//cout << rando << endl;
		cout << optval[x] << endl;
	}
cout << "YEEEP" << endl;
	for (int y = 1; y < 5; y++) {
		for(int z = 0; z < y; z++) {
			while (*optval[y] == *usedNums[z]) {
				rando = rand() % 5 + 1;
				*optval[y] = rando;
			}
		}
	} 
	for (int y = 1; y < 5; y++) {
		for(int z = 0; z < y; z++) {
			while (optval[z] == optval[y]) {
				rando = rand() % 5 + 1;
				*optval[y] = rando;
			}
		}
	} 
		
	for(int x = 0; x < 5; x++) {	
		//rando = rand() % 5 + 1;
		//cout << rando << endl;
		cout << optval[x] << endl;
	}
return 0;
}

void usedNum(int *usedNums[], int rand) {
	cout << "Yoo" << endl;
	if(rand == 1) {
		*usedNums[0] = 1;
	}else if(rand == 2) {
		*usedNums[1] = 2;
	}else if(rand == 3) {
		*usedNums[2] = 3;
	}else if(rand == 4) {
		*usedNums[3] = 4;
	}else if(rand == 5) {
		*usedNums[4] = 5;
	}
	cout << "Yoo" << endl;
}
