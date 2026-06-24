#include <iostream>
using namespace std;
int main() 
{
int a;  
cout << "Digite um número: ";
cin >> a;
if (a > 0) 
{
cout << "Positivo";
} 
else if (a < 0) 
{
cout << "Negativo";
} 
else {
cout << "Zero";
}
return 0;
}
