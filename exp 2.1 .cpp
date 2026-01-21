#include<iostream>
using namespace std;
int main()
{
char x;
int a[2][2];
int b[2][2];
int c[2][2];
int i, j;
int k;

do
{
cout<<"1 : Create 2 matrix"<<endl;
cout<<"2 : Display"<<endl;
cout<<"3 : Addition"<<endl;
cout<<"4 : Subtraction"<<endl;
cout<<"5 : Multiplication"<<endl;
cout<<"6 : Transpose"<<endl;
cout<<"7 : Inverse of matrix"<<endl;
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
        c[i][j]=0;
        for(k=0; k<2; k++)
        {
            c[i][j]=a[i][k]*b[k][j];
            cout<<c[i][j]<<" ";
        }
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
    c[j][i]=a[i][j];
    cout<<c[j][i]<< "  ";
    }
    cout<<endl; 
}
break ;
case 7:
        {
            float inv[2][2];
            int det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det == 0)
            {
                cout<<"Inverse does not exist (Determinant = 0)"<<endl;
            }
            else
            {
                cout<<"Inverse of matrix A:"<<endl;
                inv[0][0] =  a[1][1] / (float)det;
                inv[0][1] = -a[0][1] / (float)det;
                inv[1][0] = -a[1][0] / (float)det;
                inv[1][1] =  a[0][0] / (float)det;

                for(i=0;i<2;i++)
                {
                    for(j=0;j<2;j++)
                        cout<<inv[i][j]<<" ";
                    cout<<endl;
                    }
            }
            break;
}
}

cout<<"Do you want to continue ?"<<endl;
cin>>x; 
}
while(x=='y'|| x=='y');
return 0; 
}
