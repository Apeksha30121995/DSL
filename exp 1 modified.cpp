#include<iostream>
using namespace std;
int main()
{
char x;
int i; 
int a[5];
int max; 
int min;
int index; 
do
{
cout<<"1 : Create "<<endl;
cout<<"2 : Display"<<endl;
cout<<"3 : Maximum"<<endl;
cout<<"4 : Minimum"<<endl;
cout<<"5 : Indexing"<<endl;
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

case 3: 
max = a[0];
for(i=0; i<5; i++)
{
    if (a[i]>max)
    max = a[i];
    cout<<"This is maximum number";
    i++;
}
break; 

case 4:
min = a[0];
for (i=0; i<5; i++)
{
    if (a[i]<min)
    min = a[i];
    cout<<"This is minimum number";
}
break; 

case 5:
            cout << "Enter index (0 to 4): ";
            cin >> index;

            if (index >= 0 && index < 5)
            {
                cout << "Element at index " << index << " is " << a[index] << endl;
            }
            else
            {
                cout << "Invalid input" << endl;
            }
            break;
}
cout<<"Do you want to continue ?"<<endl;
cin>>x; 
}

while(x=='y'|| x=='y');
return 0; 
}
