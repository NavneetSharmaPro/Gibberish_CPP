#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
  string yourCpp;
  string gcc="gcc";
  string gPlus="g++";
  string command;
  string s;
  cout<<"***PROGRAM TO COMPILE AND RUN CPP AND C PROGRAMS IN THE SAME FOLDER***"<<endl;
  cout<<"Weather you want to compile a C program or C++?"<<endl;
  cin>>s;
  if(s=="cpp" || s=="CPP" || s=="Cpp" || s=="c++" || s=="C++") //I wanted to cover all(who knows how humans may reply)
  {
    cout<<"Enter filename"<<endl;
    cin>>yourCpp;
    command=gPlus+" "+yourCpp+".cpp -o "+yourCpp+".exe && "+yourCpp+".exe";
    const char *comm=command.c_str(); //Converts string to const char because system() can only take const char;
    system(comm);
  }
  else if(s=="c" || s=="C")
  {
    cout<<"Enter filename"<<endl;
    cin>>yourCpp;
    command=gcc+" "+yourCpp+".c -o "+yourCpp+".exe && "+yourCpp+".exe";
    const char *comm=command.c_str(); //Converts string to const char because system() can only take const char;
    system(comm);
  }
  system("pause");
}
