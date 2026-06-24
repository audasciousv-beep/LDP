#include <iostream>
using namespace std;
int main() 
{
int num = 42;
char letra = 'A';
double valor = 3.1415;
cout << "Valor do int: " << num << ", endereço: " << &num << endl;
cout << "Valor do char: " << letra << ", endereço: " << (void*)&letra << endl;
cout << "Valor do double: " << valor << ", endereço: " << &valor << endl;
return 0;
}
