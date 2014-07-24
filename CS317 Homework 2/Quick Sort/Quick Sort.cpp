#include <vector>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;
const int MAX_NUM = 100;

void quickSort(vector<int> &a, int l, int r);
int partitionArray(vector<int> &a, int l, int r);

void main(){

	vector<int> a;

	srand(time(NULL));
	for (int i = 0; i < ARRAY_SIZE; i++) a.push_back(rand() % MAX_NUM + 1);

	quickSort(a, 0, ARRAY_SIZE-1);
}

void quickSort(vector<int> &a, int l, int r){
	if (l < r){
		int s = partitionArray(a, l, r);
		quickSort(a, l, s-1);
		quickSort(a, s+1, r);
	}
}

int partitionArray(vector<int> &a, int l, int r){
	int p = a[l];
	int i = l+1;
	int j = r;
	while (i <= j) {
		while (i <= r && a[i] <= p) i++;
		while (j >= l && a[j] >= p) j--;
		if (i < j) swap(a[i], a[j]);
	}
	if (j > l){
		swap(a[l], a[j]);
		return j;
	} else return l;
}