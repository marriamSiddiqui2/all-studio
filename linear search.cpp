#include <iostream>
using namespace std;
int main()
{
int a[5]={10,20,30,40,50};
int i=0;
int item;
cout<<"Input the search item"<<endl;
cin>>item;
while(i<5)
{if (a[i]==item)
{
cout<<"Item found at position"<<i<<endl;
break;
 }
i++;
 }
 if(i>=5)
 {
 cout<<"Number not found"<<endl;
}
return 0;
}
