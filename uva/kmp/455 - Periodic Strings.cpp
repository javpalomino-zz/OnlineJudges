#include <bits/stdc++.h>

#define si(n) scanf("%d", &n)
#define sii(n, m) scanf("%d", &n, &m)
#define sc(c) scanf("%c", &c)
#define ss(s) scanf("%s", s)

#define forn(i, n) for(int i = 0 ; i < n ; ++i)
#define forr(i, a, b) for(int i = a ; i < b ; ++i)

#define rforn(i, n) for(int i = n-1 ; i >= 0 ; --i)
#define rforr(i, a, b) for(int i = b-1 ; i >= a ; --i)

#define TEST(t) int T; cin >> T; for(int t = 1 ; t <= T ; ++t)

#define MAX 81

using namespace std;

int ka[MAX];

void kmp_array(char *x, int len){
	ka[0] = 0;
	
	for(int i = 1, j = 0 ; i < len ; ){
		if(x[i] == x[j])ka[i++] = ++j;
		else{
			if(j)j = ka[j-1];
			else ka[i++] = 0;
		}
	}
}

void solve(char *s, int len){
	kmp_array(s, len);
	
	int posi = len - 1, ante;
	int peri = posi - ka[posi - 1];
	int ans = 1;
	
	while(posi != 0){
		ante = posi;
		posi = ka[posi-1];
		if(s[ante] == s[posi] && peri == ante - posi)ans++;
	}
	
	if(ans * peri != len){
		peri = len;
		ans = 1;
	}
	
	printf("%d\n", peri);
}

int main(){
	
	char s[MAX];
	int len;
	
	TEST(t){
		if(t != 1)puts("");
		ss(s);
		len = strlen(s);
		solve(s, len);
	}

	return 0;
}

