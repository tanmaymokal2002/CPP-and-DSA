#include<bits/stdc++.h>
using namespace std;


bool findArmstrongNum(int x){

	int ans = 0;
	int n = x;
	while(x>0){
		int ld = x%10;
		ans += ld*ld*ld;
		x/=10;
	}
	if(ans == n){
		return true;
	}

	return false;

}


int main(){
	
	int x;
	cin >> x;

	bool ans = findArmstrongNum(x);
	cout << ans << endl;
	

}