#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,nr,best,id,t,marks[20];
	char e[20][20];
	cout<<"\n enter no. of candidates interviewed";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>e[i][ ];
		cin>>marks[i];
	}
	nr=n*rand();
	cout<<"\n Recruitment results";
	for(int i=0;i<nr;i++)
	{
		t=nr*rand();
		if(best<marks[t])
		{
			best = marks[t];
			id=t;
		}
		cout<<"Randomised :"<<e[id][];
		for(int i=0;i<n;i++)
		{
			if(best<marks[i])
			{
				best = marks[i];
				id=i;
			}
		}
		cout<<"\n Deterministic: "<<e[id][];
	}
}
