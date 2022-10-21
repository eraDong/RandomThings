/*
 * @Author: eraDong qq1184434988@gamil.com
 * @Date: 2022-10-20 19:28:46
 * @LastEditors: eraDong qq1184434988@gamil.com
 * @LastEditTime: 2022-10-20 19:28:49
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week1\Solutions\签到.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
#include<unordered_map>
#include<algorithm>
#define int long long
using namespace std;

const int N = 1e3+10;

int a[N];

int n;

signed main()
{
    unordered_map<int,int> mp;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            mp[a[i]+a[j]]=1;
        }
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(mp[a[i]-a[j]])
            {
                cout<<"Yes"<<endl;
                return 0;
            }
    
    cout<<"No"<<endl;
    return 0;
}