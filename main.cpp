#include <iostream>

using namespace std;

int ciag(int n);
int main()
{
    int nr;
    cout<< "Podaj nr wyrazu: ";
    cin>> nr;
    cout<< ciag(nr);
    return 0;
}
int ciag(int n)
{
    if(n<=2) return 1;
    return ciag(n-2)+ciag(n-1);
}
