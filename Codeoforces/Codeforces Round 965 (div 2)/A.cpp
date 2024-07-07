#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std; 
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout); 
#define ll long long 
#define ld long double 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#define eb emplace_back 
#define pll pair<long long ,long long > 
#define ppll pair < pll , pll > 
#define sd(x) scanf("%d",&x) 
#define sld(x) scanf("%lld",&x) 
#define INF 1e18 
#define eps 0.00001 
#define le length 
#define debug(n1) cout << n1 << endl 
#define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--) 
// #define M_PI 3.1415926536
const ll N = 3e5 + 5; 
const ll MAX = 3e5 + 5; 
const ll M = 1e6 + 5; 

ll MODULAR_POWER(ll a , ll b , ll MOD) { 
    if(b == 0) return 1LL; 
    ll d = MODULAR_POWER(a , b / 2 , MOD); 
    d *= d; 
    d %= MOD; 
    if(b % 2) d *= a; 
    d %= MOD; 
    return d; 
} 
ll BINARY_SEARCH(ll dp[] , ll n , ll key) { 
    ll s = 1; 
    ll e = n; 
    while(s <= e) { 
        ll mid = (s + e) / 2; 
        if(dp[mid] == key) return mid; 
        else if (dp[mid] > key) e = mid - 1; 
        else s = mid + 1; 
    } 
    return -1; 
} 
string CONVERT_TO_BINARY(ll s) { 
    string res = ""; 
    while(s != 0) { 
        res += (char)('0' + s % 2); 
        s /= 2; 
    } 
    reverse(res.begin() , res.end()); 
    return res; 
} 



int main() {

	double pi = 3.1415926536;
    // Set the precision of the output stream
    
	// int n;
	// cin >> n;

	// vector<ld> a(n);
	// for(ll i=0; i<n; ++i){
	// 	cin >> a[i];
	// }

	// sort(a.rbegin(), a.rend());

	

	// for(ll i=n-2; i>=0; --i){
	// 	a[i] = M_PI * (a[i]*a[i]); 
	// }

	// ld ans = a[n-1];

	// for(ll i=n-2; i>=0; --i){

	// 	if(n%2==0){

	// 	}
	// 	else{

	// 		if(i%2==0){
	// 			ans+=a[i];
	// 		}
	// 		else{
	// 			ans-=a[i];
	// 		}

	// 	}

		
	// }

	// cout << ans << endl;

	// for(auto it: a){
	// 	cout << it << " ";
	// }

	// cout << endl;

	// cout << M_PI << " ";
   

}


