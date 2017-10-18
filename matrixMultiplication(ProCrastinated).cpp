#include<iostream>
using namespace std;

int main()
{
  int a[2][2],
      b[2][2],
      c[2][2];
  int i,j,sum;
  cout<<"Enter the elements of array a: "<<endl;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      cin>>a[i][j];
      cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
    }
  }
  cout<<endl;
  cout<<"Enter the elements of array b: "<<endl;
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      cin>>b[i][j];
      cout<<"b["<<i<<"]["<<j<<"]="<<b[i][j]<<endl;
    }
  }
  cout<<endl;
  cout<<"Arranging, we get:"<<endl;
  for(i=0;i<2;i++)
  {
    cout<<endl;
    for(j=0;j<2;j++)
    {
      cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<" ";
    }
  }
  cout<<endl;
  for(i=0;i<2;i++)
  {
    cout<<endl;
    for(j=0;j<2;j++)
    {
      cout<<"a["<<i<<"]["<<j<<"]="<<b[i][j]<<" ";
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<2;j++)
    {
      sum=a[i][j]*b[j]+a[i+1]
    }
  }
  return 0;
}
