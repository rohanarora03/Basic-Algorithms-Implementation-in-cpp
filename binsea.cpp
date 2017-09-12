#include <iostream>
#include <conio.h>
using namespace std;
int bin_srch(int a[], int n, int key, int low, int high)
{
 int mid;
 if(low <= high)
 {
  mid = (low + high)/2;
  if(a[mid] == key)
  {
   return mid;
  }
  else if(key < a[mid])
  {
   return bin_srch(a, n, key, low, mid-1);
  }
  else if(key > a[mid])
  {
   return bin_srch(a, n, key, mid+1, high);
  }
 }
 return -1;
}
int main()
{
 //clrscr();
 int a[10], n, key, low, mid, high, i, indx;
 cout<<"\nEnter size of array: ";
 cin>>n;
 cout<<"\nEnter elements of array: ";
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 cout<<"\nEnter the key element to be searched: ";
 cin>>key;
 low = 0;
 high = n-1;
 indx = bin_srch(a, n, key, low, high);
 if(indx == -1)
 {
  cout<<"\nSearch unsuccessful";
 }
 else
 {
  cout<<"\nElement found at position "<<indx+1<<"\n\n";
 }
 getch();
}

