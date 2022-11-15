/*
    结论题：01串题意就是改变A串[l,r]，b串也会改变[0,l][r,n]，然后输出能否改变，若可以改变那么输出路径
    分析：如果初始是0串可以知道，奇数操作两串每处的字符都不一样，偶数操作每次字符都一样，
    所以我们可以知道相等的数量=0或=n的时候是可以操作为0的，
    改变的方法就是把A串所有1变成0，然后再对B进行操作，这时候B要么全0，要么全1（如果操作是奇数次的话就是全1
    然后用[1,1][1,n][2,n]的方法就可以修改完毕
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
const int N = 2e5+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

int a[N],b[N];

int n;

string s1,s2;

void solve()
{
	vector<PII> ans;
	
	cin>>n;
	
	cin>>s1>>s2;
	
	for(int i=0;i<n;i++)
	{
		a[i] = s1[i] - '0';
	}
	
	for(int i=0;i<n;i++)
	{
		b[i] = s2[i] - '0';
	}
	
	int cnt = 0;
	
	for(int i=0;i<n;i++)
	{
		cnt += (a[i]==b[i]);
	}
	
	if(cnt!=0&&cnt!=n)
	{
		cout<<"NO"<<endl;
		return;
	}//全相等或全不相等
	
	//先把A变成全0然后看B
	bool flag = cnt == n ? 0 : 1;
	//操作是否为奇数
	//奇数为1，偶数为0 每做一次操作转换奇偶
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)continue;
		int j = i;
		while(j+1<n&&a[j+1]==1)j++;
		ans.push_back({i+1,j+1});
		i = j;
		flag ^= 1;
	}

	if(flag)
	{
		ans.push_back({1,n});
		ans.push_back({1,1});
		ans.push_back({2,n});
	}
	cout<<"YES"<<endl;
	cout<<ans.size()<<endl;
	for(auto x:ans)
	{
		cout<<x.first<<' '<<x.second<<endl;
	}
}

signed main()
{
	init();
	int t;
	cin>>t;
	while(t--)solve();
}