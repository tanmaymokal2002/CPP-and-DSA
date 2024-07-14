#include<bits/stdc++.h>
using namespace std;

int findGCD(int a, int b){

	//brute:
	/*
	int gcd=1;

	for(int i=1; i<=min(a, b); ++i){
		if(a%i==0 && b%i==0){
			gcd=i;
		}
	}

	return gcd;
	*/

	//better:
	/*
	int end=min(a, b);
	for(int i=end; i>=1; --i){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
	return 1;
	*/

	//optimal:
	while(a>0 && b>0){
		if(a>b){
			a=a%b;
		}
		else{
			b=b%a;
		}
	}
	if(a==0) return b;

	return a;

}

int findLCM(int a, int b){

	int minNum = min(a, b);
	int maxNum = max(a, b);

	for(int i=maxNum; ; maxNum++){
		if(i%minNum == 0){
			return i;
		}
	}

	return -1;

}


int main(){
	
	int a, b;
	cin >> a >> b;

	int gcd = findGCD(a, b);
	int lcm = findLCM(a, b);
	cout << "gcd => " << gcd << endl;
	cout << "lcm => " << lcm << endl;


}