#include <bits/stdc++.h>

#define si(n) scanf("%d", &n)
#define sii(n, m) scanf("%d %d", &n, &m)
#define sc(c) scanf("%c", &c)
#define ss(s) scanf("%s", s)

#define forn(i, n) for(int i = 0 ; i < n ; ++i)
#define forr(i, a, b) for(int i = a ; i < b ; ++i)

#define sz(x) (int)x.size()

#define rforn(i, n) for(int i = n-1 ; i >= 0 ; --i)
#define rforr(i, a, b) for(int i = b-1 ; i >= a ; --i)

#define mset(x, y) memset(x, y, sizeof(x))
#define all(x) x.begin(), x.end()

#define TEST(t) int T; cin >> T; for(int t = 1 ; t <= T ; ++t)

#ifdef ONLINE_JUDGE
	#define sll(x) scanf("%I64d", &x)
#else
	#define sll(x) cin >> x
#endif

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

typedef complex<long double> cd;

typedef vector<int> vi;
typedef vector<cd> vcd;

const double PI = 4*atan(1);
const double TPI = 2*PI;

int main(){
	vi a;
	int n, x;
	si(n);
	
	a.resize(6);
	
	forn(i, n) {
		si(x);
		a[x]++;
	}
	forn(i, n) {
		si(x);
		a[x]--;
	}
	
	int sum = 0;
	bool odd = false;
	
	forr(i, 1, 6) {
		if(abs(a[i]) %2 == 1) {
			odd = true;
		}
		sum += abs(a[i]);
	}
	
	if(odd)puts("-1");
	else {
		printf("%d\n", sum/4);
	}
	
	return 0;
}
