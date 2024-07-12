#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int x;
	cin >> x;

	int revNum = 0;
	while(x > 0){
		int ld = x%10;
		revNum = (revNum * 10) + ld;
		x/=10;
	}
	cout << revNum << endl;


}