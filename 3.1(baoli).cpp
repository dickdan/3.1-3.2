#include<iostream>
using namespace std;
const int maxn = 10001;
int T[maxn];
int search(int x, int n){
	int i;
	for(i = 1; i <= n; i++){
		if(T[i] == x)
		return i;
	}
	return 0;
}
int main(){
	int x, i, n;
	cin >> n;
	for(i = 1; i <= n; i++)
	cin >> T[i];
	cin >> x;
	cout << "j=" << search(x, n) << endl;
	return 0; 
} 
