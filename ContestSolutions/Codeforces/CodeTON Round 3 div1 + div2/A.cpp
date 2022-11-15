/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-15 21:00:07
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-15 21:06:34
 * @FilePath: \RandomThings\ContestSolutions\Codeforces\CodeTON Round 3 div1 + div2\A.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
    样例出结论，第一个最小即成立
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

const int mod = 1e9+7;
const int INF = 0x3f3f3f3f;
void init()
{
	cin.tie(0),cout.tie(0);
	ios::sync_with_stdio(false);
}

const int N = 15;

int a[N];

void solve()
{
	int n;
	cin>>n;
	//i j k
	for(int i=0;i<n;i++)
		cin>>a[i];
	//ai>ak ai = ai+aj
	//ai<=ak swap(aj,ak)
	bool f = false;
	int mini = a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[0])f=true;
	}
	if(f)cout<<"NO"<<endl;
	else cout<<"Yes"<<endl;
}

signed main()
{
	init();
	int t;
	cin>>t;
	while(t--)solve();
}