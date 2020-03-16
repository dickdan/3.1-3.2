#include<iostream>
using namespace std;
const int maxn = 10001;
int T[maxn];
int binarySearch(int x, int n){
	int left = 1, right = n, mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(T[mid] == x)
		return mid;
		else if(T[mid] > x)
		right = mid - 1;
		else
		left = mid + 1;
	}
	return 0;
}
int main(){
	int x, i, n;
	cin >> n;
	for(i = 1; i <= n; i++)
	cin >> T[i];
	cin >> x;
	cout << "j=" << binarySearch(x, n) << endl;
	return 0; 
} 
