#include <vector>
#include <time.h>

using namespace std;

const int ARRAY_SIZE = 50;
const int MAX_NUM = 100;

vector<int> mergeSort(vector<int> a);
vector<int> mergeArray(vector<int> a, vector<int> b);

void main(){
	vector<int> a;

	srand(time(NULL));
	for (int i = 0; i < ARRAY_SIZE; i++) a.push_back(rand() % MAX_NUM + 1);

	a = mergeSort(a);
}

vector<int> mergeSort(vector<int> a){
	int n = a.size();
	int m = ceil(n/2);
	if (n > 1){
		vector<int> b = a;
		a.erase(a.begin()+m,a.end());
		b.erase(b.begin(),b.begin()+m);
		a = mergeSort(a);
		b = mergeSort(b);
		return mergeArray(a,b);
	}
	return a;
}

vector<int> mergeArray(vector<int> a, vector<int> b){
	vector<int> c;
	while (a.size() > 0 || b.size() > 0){
		if (a.size() == 0){
			c.push_back(b[0]);
			b.erase(b.begin());
		} else if (b.size() == 0){
			c.push_back(a[0]);
			a.erase(a.begin());
		} else if (a[0] <= b[0]){
			c.push_back(a[0]);
			a.erase(a.begin());
		} else {
			c.push_back(b[0]);
			b.erase(b.begin());
		}
	}
	return c;
}

//another change
