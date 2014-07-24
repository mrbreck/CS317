/*	Breck Bachle
	bb0032@uah.edu
	CS 317-01
	6/4/14
	Homework Assigment 1
	Bubble Sort
	Reference: http://en.wikipedia.org/wiki/Bubble_sort

	The "Bubble" sorting method iterates through a list one pair at a time,
	swaps the pair if they are out of order, and continues until the end of
	the list has been reached. This process is repeated until no pairs need
	be swapped, at which point the list is considered sorted.
*/

#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;

void main(){
	bool done = false;
	int sortedCount = 0;
	int a[ARRAY_SIZE];

	srand(time(NULL));
	for (int i = 0; i < ARRAY_SIZE; i++) a[i] = rand() % ARRAY_SIZE + 1;

	while (!done){
		done = true;
		sortedCount++;
		for (int i = 0; i < ARRAY_SIZE - sortedCount; i++){
			if (a[i] > a[i+1]){
				swap(a[i], a[i+1]);
				done = false;
			}
		}
    }
}