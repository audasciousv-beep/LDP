#include <iostream>
using namespace std;
void mudarnumint (int*ponteiro)
{
if (ponteiro != nullptr)
{
*ponteiro=100;
cout<<"Valor mudado para: "<<*ponteiro<<endl;
}
}
int main ()
{
int num = 40 ;
cout << "Antes: "<< num<<endl;
mudarnumint(&num);
cout << "Depois: "<< num<<endl;
return 0;
}
