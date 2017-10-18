#include<iostream>
using namespace std;
int main()
{
  int *a=new int[20];
  int *b=new int[20];
  int *c=new int[30];
  int i,j,k,sizeA,sizeB,sizeC;
  cout<<"Number of elements in Array 1:"<<endl;
  cin>>sizeA;
  cout<<"Enter the elements in array:"<<endl;
  for(i=0;i<sizeA;i++)
  {
    cout<<"A["<<i<<"]="<<endl;
    cin>>a[i];
  }
  cout<<"Number of elements in Array 2:"<<endl;
  cin>>sizeB;
  cout<<"Enter the elements in array:"<<endl;
  for(i=0;i<sizeB;i++)
  {
    cout<<"B["<<i<<"]="<<endl;
    cin>>b[i];
  }
  sizeC=sizeA+sizeB;
  i=0;
  j=0;
  k=0;

  while(i<sizeA && j<sizeB)
  {
    if(a[i]<=b[j])
    {
      c[k]=a[i];
      i++;k++;
    }
    else
    {
      c[k]=b[j];
      j++; k++;
    }
  }
  cout<<"i"<<i<<"j"<<j;
  while(i<sizeA)
  {
    c[k]=a[i];
    k++;
    i++;
  }
  while (j<sizeB)
  {
    /* code */
    c[k]=b[j];
    k++;
    j++;
  }

  for(i=0;i<sizeC;i++)
  {
    cout<<"C["<<i<<"]="<<c[i]<<endl;
  }
  delete a;
  delete b;
  delete c;
  return 0;
}
