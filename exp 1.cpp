#include<iostream>
using namespace std;
int main()
{
char x;
int i; 
int a[5];
do
{
cout<<"1 : Create 2 matrix"<<endl;
cout<<"2 : Display"<<endl;
int ch;
cout<<"Enter your choice "<<endl;
cin>>ch;
switch(ch){
case 1:
cout<<"Enter element"<<endl;
   for(i=0; i<5; i++)
{
        cin>>a[i];
    }
 
break ;

case 2:
for(i=0; i<5; i++)
{
      cout<<a[i]<<"  ";
}
 cout<<endl;
break ;
}
cout<<"Do you want to continue ?"<<endl;
cin>>x; 
}

while(x=='y'|| x=='y');
return 0; 
}
