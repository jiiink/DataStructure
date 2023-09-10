#include <bits/stdc++.h>

using namespace std;
using uint = unsigned int;
using ll = long long;
#define int ll
template<class T> using V = vector<T>;
template<class T> using VV = V<V<T>>;
constexpr ll TEN(int n) { return (n == 0) ? 1 : 10 * TEN(n-1); }

#define show(x) cerr << #x << " = " << (x) << endl
#define rep(i, N) for(int i=0;i<(int)(N);i++)
#define rep1(i,N) for (int i =1; i <=(int)(N); i++)
#define FOR(i, a, b) for (int i=int(a); i<int(b); i++)
#define REP(i,b) FOR(i,0,b)
#define fs first
#define sc second
#define pb push_back
#define PB push_bac
#define all(x) x.begin(),x.end()
#define ALL(x) x.begin(),x.end()

ll read(){
	ll i;
	scanf("%lld",&i);
	return i;
}

void print(ll x,int suc){
	printf("%lld",x);
	if(suc==1)
		printf("\n");
	if(suc==2)
		printf(" ");
}

using pi=pair<int,int>;
using vi=vector<int>;

pi Calc(){
	int s=read(),x[3];
	REP(i,3)
		x[i]=read();
	int ans=0;
	REP(i,3){
		int a=x[i], b=x[(i+1)%3];
		ans-=(s-a  )*(s-a  )*(s-a  );
		ans-=(s-b  )*(s-b  )*(s-b  );
		ans+=(s-a-b)*(s-a-b)*(s-a-b);
	}
	return pi(ans,s*s*s);
}

signed main() {
	int n=read();
	vector<pair<pi,int>> waf;
	REP(i,n)
		waf.emplace_back(Calc(),i);
	sort(ALL(waf),[&](pair<pi,int>a,pair<pi,int>b){
		int x=a.first.first*b.first.second;
		int y=a.first.second*b.first.first;
		if(x!=y)
			return x<y;
		else
			return a.second<b.second;
	});
	REP(i,n)
		print(waf[i].second+1,i==n-1?1:2);
}
