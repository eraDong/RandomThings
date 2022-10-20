/*
 * @Author: eraDong qq1184434988@gamil.com
 * @Date: 2022-10-20 12:44:05
 * @LastEditors: eraDong qq1184434988@gamil.com
 * @LastEditTime: 2022-10-20 12:44:10
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week1\Solutions\和谐之树.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#define int long long
using namespace std;

int ans;

int depth(int x)
{
    int res = 0;
    //求lgx表示深度
    while(x>1)
    {
        x = (x+1)>>1;
        res++;
    }
    return res;
}

int dfs(int id,int l,int r)
{
    ans = max(ans,id);
    int mid = l+r>>1;
    if(l==r)return ans;
    //判断一下左边的区间的深度是否大于右边的深度
    if(depth(mid-l+1)>depth(r-mid)) return dfs(id<<1,l,mid);
    else return dfs(id<<1|1,mid+1,r);
    return ans;
}

void solve()
{
    ans = 0;
    int n;
    cin>>n;
    cout<<depth(n);
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}