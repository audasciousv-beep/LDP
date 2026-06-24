#include <iostream>
using namespace std;
void dobrar(int &a)
{
a=a*3;
}
int main ()
{
int b = 5;
dobrar(b);
cout<<b;
return 0;
}
