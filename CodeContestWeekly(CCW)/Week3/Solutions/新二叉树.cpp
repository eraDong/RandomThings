/*
 * @Author: eraDong qq1184434988@gmail.com
 * @Date: 2022-11-04 17:45:50
 * @LastEditors: eraDong qq1184434988@gmail.com
 * @LastEditTime: 2022-11-04 17:59:16
 * @FilePath: \RandomThings\CodeContestWeekly(CCW)\Week3\Solutions\新二叉树.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include<iostream>
using namespace std;

struct node
{
	char lc,rc;
}tr[130];

char root;

char lc,rc;

int n;

void build(char root)
{
	if(root=='*')return;
	cout<<root;
	build(tr[root].lc);
	build(tr[root].rc);
}

int main()
{	
	cin>>n;
	
	cin>>root;
	
	cin>>lc;
	
	cin>>rc;
	
	tr[root].lc = lc,tr[root].rc = rc;
	
	for(int i=2;i<=n;i++)
	{
		char h;
		cin>>h;
		cin>>tr[h].lc;
		cin>>tr[h].rc;
	}
	build(root);
}