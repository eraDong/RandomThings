#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<set>
#include<map>
//#pragma GCC optimize(3)
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define scan(x)   scanf("%lld",&x)
// #define int long long
#define lowbit(x) x&(-x) //二进制最低位所代表的数
#define PI 3.1415926535
inline char nc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
inline int _read(){
    char ch=nc();int sum=0;
    while(!(ch>='0'&&ch<='9'))ch=nc();
    while(ch>='0'&&ch<='9')sum=sum*10+ch-48,ch=nc();
    return sum;
}
typedef pair<int,int> PII;
typedef long long ll;
int gcd(int a,int b){
	return b>0 ? gcd(b,a%b):a;
}
int exgcd(int a,int b,int &x,int &y)
{
	if(!b)
	{
		x = 1,y = 0;
		return a;
	}
	int d = exgcd(b,a%b,y,x);
	y-=a/b*x;
	return d;
}
const int N = 2e6+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

int primes[N],cnt;
bool st[N];
int sum[N];

void get_primes(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(!st[i])primes[cnt++] = i;
		for(int j=0;primes[j]<=n/i;j++)
		{
			st[primes[j]*i] = true;
			if(i%primes[j]==0)break;
		}
	}
}

void solve()
{
	int n;
	cin>>n;
	int res = 0;
	for(int i=31;i>=0;i--)
	{
		if(n>>i&1)
		{
			int a = 1<<i,b = (1<<(i+1))-1;
			res+= sum[b] - sum[a-1];
		}
	}
	cout<<res<<endl;
}

signed main()
{
	init();
	int t;
	cin>>t;
	get_primes(2000000);
	for(int i=2;i<=2000000;i++)
	{
		if(!st[i])sum[i] = sum[i-1] + 1;
		else sum[i] = sum[i-1];
	}
	while(t--)solve();
}