/*
http://stackoverflow.com/questions/22746429/c-decimal-to-binary-converting
*/

#include <iostream>
using namespace std;

void ConvertToBinary(int n) /*Alex says: Good to use unsigned int if u can*/
{
    if (n / 2 != 0)
    {
        ConvertToBinary(n / 2);
    }
    cout<<n%2;
}

int main()
{
    /*std::string binary = std::bitset<8>(128).to_string(); //to binary
    std::cout<<binary<<"\n";

    unsigned long decimal = std::bitset<8>(binary).to_ulong();
    std::cout<<decimal<<"\n";*/
    int a;
    cin>>a;
    ConvertToBinary(a);
    return 0;
}
