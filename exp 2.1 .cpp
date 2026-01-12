#include<iostream>
using namespace std;
int main()
{
char x;
int a[2][2];
int b[2][2];
int c[2][2];
int i, j;
do
{
cout<<"1 : Create 2 matrix"<<endl;
cout<<"2 : Display"<<endl;
cout<<"3 : Addition"<<endl;
cout<<"4 : Subtraction"<<endl;
cout<<"5 : Multiplication"<<endl;
cout<<"6 : Transpose"<<endl;
int ch;
cout<<"Enter your choice "<<endl;
cin>>ch;
switch(ch){
case 1:
cout<<"Enter matrix1 element"<<endl;
   for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
        cin>>a[i][j];
    }
} 
cout<<"Enter matrix2 element"<<endl;
   for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
        cin>>b[i][j];
    }
} 
break ;

case 2:
cout<<"matrix 1:"<<endl;
for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
        cout<<a[i][j]<<"  ";
    }
 cout<<endl;
} 
cout<<endl; 

cout<<"matrix 2:"<<endl;
   for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
        cout<<b[i][j]<<"  ";
    }
    cout<<endl;
} 

break ;

case 3:
for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
     
c[i][j]=a[i][j]+b[i][j];
cout<<c[i][j]<<" ";
}
cout<<endl;
}
break; 

case 4:
for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
     
 c[i][j]=a[i][j]-b[i][j];
 cout<<c[i][j]<<" ";
}
cout<<endl;
}
break;

case 5:
for(i=0; i<2; i++)
{
    for (j=0; j<2; j++)
    {
     
 c[i][j]=a[i][j]*b[i][j];
 cout<<c[i][j]<<" ";
}
cout<<endl;
}
break; 

case 6:
cout<<"Transpose of matrix a "; 
for(i=0; i<2; i++)
{
    for(j=0; j<2; j++)
    {
    c[i][j]=a[j][i];
    cout<<a[i][j]<< "  ";
    }
    cout<<endl; 
}
break ;
}

cout<<"Do you want to continue ?"<<endl;
cin>>x; 
}
while(x=='y'|| x=='y');
return 0; 
}
