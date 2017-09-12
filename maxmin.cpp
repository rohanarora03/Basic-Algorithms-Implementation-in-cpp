#include<iostream>
#include<conio.h>
using namespace std;

int a[10],maxx,mini,mid,max1=0,min1=0;
void max_min(int i,int j, int &maxx,int &mini)
{
 if(i==j)
 {
  maxx=a[i];
  mini=a[i];
 }
 else if(i==j-1)
 {
  if(a[i]>a[j])
  {
   maxx=a[i];
   mini=a[j];
  }
  else
  {
   maxx=a[j];
   mini=a[i];
  }
 }
 else
 {
  mid=(i+j)/2;
  max_min(i,mid,maxx,mini);
  max_min(mid+1,j,max1,min1);
  if(max1>maxx)
   maxx=max1;
  if(min1<mini)
   mini=min1;
 }
}
int main()
{
 //clrscr();
 int i;
 cout<<"Enter 10 elements : ";
 for(i=0;i<10;i++)
  cin>>a[i];
 maxx=a[0];
 mini=a[0];
 max_min(0,9,maxx,mini);
 cout<<"Maximum : "<<maxx<<"\n";
 cout<<"Minimum : "<<mini<<"\n";
 getch();
}

