/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-04 17:58:40
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-04 17:59:15
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week3\Solutions\单调队列.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

int n,k;

const int N = 1e6+10;

int a[N],q[N],tt=-1,hh=0;

int main()
{
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
		cin>>a[i];
		
	for(int i=0;i<n;i++)
	{
		while(tt>=hh&&k<i-q[hh]+1)++hh;
		while(tt>=hh&&a[q[tt]]>=a[i])tt--;
		q[++tt] = i;
		if(i+1>=k)cout<<a[q[hh]]<<' ';
	}
	
	tt=-1,hh=0;
	
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		while(tt>=hh&&k<i-q[hh]+1)++hh;
		while(tt>=hh&&a[q[tt]]<=a[i])tt--;
		q[++tt] = i;
		if(i+1>=k)cout<<a[q[hh]]<<' ';
	}
}