#include <iostream>
using namespace std;
int main ()
{
int valor =5;
int *ponteiro=&valor;
cout<<valor<<endl;
*ponteiro = *ponteiro*3;
cout<<*ponteiro<<endl;
return 0;
}
