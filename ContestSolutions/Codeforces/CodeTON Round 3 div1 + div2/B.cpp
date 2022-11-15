/*
    两种 要么 0或1(max)平方，要么就是连续最长的0和1相乘
    没开longlong wa了一发
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
#define int long long
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

const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

const int N = 15;

string s;

void solve()
{
	int n;
	cin>>n;
	cin>>s;
	int cnt0=0,cnt1=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')cnt1++;
		else cnt0++;
	}
	int tep0=0,tep1=0;
	int max0=-INF,max1=-INF;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			tep0++;
			tep1=0;
		}
		else
		{
			tep1++;
			tep0=0;
		}
		max0=max(max0,tep0);
		max1=max(max1,tep1);
	}
	int maxi = max(max0,max1);
	cout<<max(maxi*maxi,cnt0*cnt1)<<endl;
}

signed main()
{
	init();
	int t;
	cin>>t;
	while(t--)solve();
}