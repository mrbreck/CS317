#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;

void bubbleSort(int (&a)[ARRAY_SIZE], int i);

void main(){
	bool swapped = true;
	int j = 0;

	int a[ARRAY_SIZE];
	srand(time(NULL));
	for (int i = 0; i < ARRAY_SIZE; i++){
		a[i] = rand() % 100 + 1;
	}
	clock_t start = clock();
	bubbleSort(a, 0);
	/*while (swapped) {
            swapped = false;
            j++;
            for (int i = 0; i < ARRAY_SIZE - j; i++) {
                  if (a[i] > a[i + 1]) {
                        swap(a[i], a[i+1]);
                        swapped = true;
                  }
            }
      }*/
	clock_t stop = clock();
	double timer = (double)stop - (double)start;
}

void bubbleSort(int (&a)[ARRAY_SIZE], int i){
	if (i == ARRAY_SIZE - 1) return;
	if (a[i] <= a[i+1]) bubbleSort(a, i+1);
	else {
		swap(a[i], a[i+1]);
		bubbleSort(a, 0);
	}
}

// changeroony
