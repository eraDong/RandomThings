/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-13 10:56:54
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-13 22:19:46
 * @FilePath: \RandomThings\SFSolutions\2.1模拟\数字统计.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

const int N = 1e5+10;

int find(int x)
{
	int res = 0;
	
	while(x)
	{
		if(x%10==2)res++;
		x/=10;
	}
	
	return res;
}

int main()
{
	int l,r;
	cin>>l>>r;
	int res = 0;
	for(int i = l;i <= r;i++)
	{
		res += find(i);
	}
	cout<<res<<endl;
}