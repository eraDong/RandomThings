/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-10-27 23:12:45
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-10-27 23:13:10
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week2\Solutions\完全平方数.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<cmath>
using namespace std;

typedef long long ll;

//n*x = m^2
//即让 n * 能让n的所有质因子为偶数的数

int main()
{
    ll n;
    cin>>n;
    ll res = 1;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int s = 0;
            while(n%i==0)s++,n/=i;
            if(s&1)res*=i;
        }
    }
    if(n>1)res*=n;
    cout<<res<<endl;
}