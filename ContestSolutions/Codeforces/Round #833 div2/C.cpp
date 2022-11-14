/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-14 19:35:14
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-14 19:52:38
 * @FilePath: \RandomThings\ContestSolutions\Codeforces\Round #833 div2\C.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
    题目大意 数组中ai=0的点可以进行修改为任意整数。
    根据前缀和的性质可知，修改一个后面都会改变，所以不论是否修改，相同的依旧相同，不同的依旧不同，所以我们只需要找到 0 和 0 之间相同数的数量
    补充：第一个 0 前面 需要 找到 sum 是否为 0 因为 没有前缀的修改。mp[sum]存储的是当前的前缀和出现的次数
    最后一段需要 再次加上最多相同数字
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
const int N = 2e5+10;
const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

map<int,int> mp;

int a[N];

void solve()
{
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	int j = 0;
	int res = 0;
	int sum = 0;
	for(j=0;j<n;j++)
	{
		if(a[j]==0)break;
		sum+=a[j];
		if(sum==0)
		{
			res++;
		}
	}
	int mx = 0;
	for(;j<n;j++)
	{
		if(a[j]==0)
		{
			res+=mx;
			mx = 0;
			sum = 0;
			mp.clear();
		}
		sum+=a[j];
		mp[sum]++;
		if(mx<mp[sum])mx = mp[sum];
	}
	res+=mx;
	cout<<res<<endl;
}

signed main()
{
	init();
	int t = 1;
	cin>>t;
	while(t--)solve();
}