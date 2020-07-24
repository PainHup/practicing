//----------------------------------------------------------------------
//	Project      : Problem Solving Practice
//	Problem name : Nth Smallest Value
//	Problem URL  : a2oj.com/p?ID=159
//	Author       : PAiN
//	
//---------------------------------------------------------------------
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int t, arr[10];
	cin >> t;
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> arr[j];
		}
		sort(arr, arr + 10);
		cout << arr[1] << endl;
	}
}
