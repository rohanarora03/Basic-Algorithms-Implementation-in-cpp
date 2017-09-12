#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int i,j,k,a,b,u,v,n,ne=1;
int mini,mincost=0,cost[9][9],parent[9];
int find(int);
int uni(int,int);
int main()
{
 //clrscr();
 cout<<"\n\tImplementation of Kruskal's algorithm\n";
 cout<<"\nEnter the no. of vertices:";
 cin>>n;
 cout<<"\nEnter the cost adjacency matrix:\n";
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n;j++)
  { 
   cin>>cost[i][j];
   if(cost[i][j]==0)
   cost[i][j]=999;
  }
 }
 cout<<"The edges of Minimum Cost Spanning Tree are\n";
 while(ne < n)
 {
  for(i=1,mini=999; i<=n ; i++)
  {
   for(j=1;j <= n;j++)
   {
    if(cost[i][j]< mini)
    {
     mini=cost[i][j];
     a=u=i;
     b=v=j;
    }
   }
  }
  u=find(u);
  v=find(v);
  if(uni(u,v))
  {
   cout<<ne++<<" edge ("<<a<<", "<<b<<") = "<<mini<<"\n";
   mincost +=mini;
  }
  cost[a][b]=cost[b][a]=999;
 }
 cout<<"\n\tMinimum cost = "<<mincost<<"\n";
 getch();
}
int find(int i)
{
 while(parent[i])
 i=parent[i];
 return i;
}
int uni(int i,int j)
{
 if(i!=j)
 {
  parent[j]=i;
  return 1;
 }
 return 0;
}
