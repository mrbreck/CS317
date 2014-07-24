/*	Breck Bachle
	bb0032@uah.edu
	CS 317-01
	6/4/14
	Homework Assigment 1
	Insertion Sort
	Reference: http://en.wikipedia.org/wiki/Insertion_sort

	The "Insertion" sort method interates through a list one element at
	a time and moves the current element up the list until it is in proper
	order. Once the current element is sorted, the process repeats with
	the next unsorted element until the end of the list is reached, by which
	point the list should be sorted.
*/

#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;

void main(){
	int placeholder;
	int a[ARRAY_SIZE];

	srand(time(NULL));
	for (int i = 0; i < ARRAY_SIZE; i++) a[i] = rand() % ARRAY_SIZE + 1;

	for (int i = 1; i < ARRAY_SIZE; i++){
		placeholder = i;
		for (int j = i-1; j >= 0; j--){
			if (a[i] < a[j]){
				swap(a[i],a[j]);
				i = j;
			}
		}
		i = placeholder;
	}
}