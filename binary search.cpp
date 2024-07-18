#include<iostream>
using namespace std;
int main()
{
int a[5]={10,20,30,40,50}, lr=0, up=4,f=0,mid, item;
cout<<"Input the search item"<<endl;
cin>>item;
while(lr<=up)
{
mid=(lr+up)/2;
if (a[mid]==item)
{ f=1;
 break;
}
if (a[mid]<item)
lr=mid+1;
else
up=mid-1;
}
if (f==1)
cout<<"item found at location"<<mid<<endl;
else
cout<<"Item not found"<<endl;
return 0;
}