/*
    题目意思是找出字符串中子串有多少个diverse,diverse定义为子串出现的 最大相同数字的数量 ≥ 出现不同数字的次数
    由于数字只有 0 ~ 9 所以 最坏情况是 0 ~ 9都出现且都出现十次 即 10*10 最大步进≤100
    优化后可以 就可以进行暴力 算法复杂度是 O(100 * 10 * n)
    
    犯蠢的点：两个循环是可以枚举完所有子串情况的。
*/


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
//#define int long long
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
const int N = 6e6+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

int cnt[15];

string s;

int n;

void solve()
{
	ll ans = 0;
	cin>>n>>s;
	for(int i = 0;i < n;i ++)
	{
		for(int j = 0;j < 10;j ++)cnt[j] = 0;
		
		int diff = 0,mx = 0;
		
		for(int j = i;j < min(i+100,n);j ++)
		{
			if(cnt[s[j]-'0']==0)diff++;
			cnt[s[j]-'0']++;
			mx = max(cnt[s[j]-'0'],mx);
			if(mx<=diff)ans++;
		}
	}
	cout<<ans<<endl;
}

signed main()
{
	init();
	int t = 1;
	cin>>t;
	while(t--)solve();
}