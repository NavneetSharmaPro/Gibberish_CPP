#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Hello world! \nRand: " <<rand();
    return 0;
}
