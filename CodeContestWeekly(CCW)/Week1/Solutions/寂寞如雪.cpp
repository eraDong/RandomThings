#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_map>
// #pragma GCC optimize(3)
using namespace std;
#define rep(i,x,y) for(int i=x;i<y;i++)
#define scan(x)   scanf("%lld",&x)
#define int long long
#define lowbit(x) x&(-x)
#define PI 3.1415926535
typedef pair<int,int> PII;
int gcd(int a,int b){
	return b>0 ? gcd(b,a%b):a;
}
const int N = 1e6+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

string s;

int a[N],b[N];

void solve()
{
	cin>>s;
	int cnt = 0;
	int idx = 0;
	for(int i=0;i<=s.size();i++)
	{
		if(s[i]=='1')cnt++;
		else if(s[i]=='\0'||s[i]=='0')
		{
			a[idx++]=cnt;
			cnt=0;
		}
	}
// 	rep(i,0,idx)cout<<a[i]<<" ";
//     cout<<endl;
	int id = 0;
	bool flag = true;
	rep(i,0,idx)
	{
		if(a[i]==0)continue;
		if(flag)
		{
			a[i]=a[i]*a[i];
			flag = false;	
		}
		else
		{
			a[i]=-a[i]*a[i];
			flag = true;
		}
		b[id++]=a[i];
	}
	int sub = 0;
	int sum = 0,ans = 0;
	for(int i=0;i<id;i++)
	{
		if(b[i]>0)sum+=b[i];
		if(b[i]<0)sub+=b[i];
		// cout<<sum<<" "<<sub<<endl;
		ans=max(sum+sub,ans);
	}
	cout<<ans<<endl;
}

signed main()
{
	init();
	solve();
}