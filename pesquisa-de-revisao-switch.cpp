#include <iostream>
using namespace std;
int main() 
{
int b;
cout << "Escolha (1-3):";
cout << "1 - Opcao A";
cout << "2 - Opcao B";
cout << "3 - Opcao C";
cout << "Opcao: ";
cin >> b;
switch(b) 
  {
  case 1:
  cout << "Voce escolheu A";
  break;
  case 2:
  cout << "Voce escolheu B";
  break;
  case 3:
  out << "Voce escolheu C";
  break;
  default:
  cout << "Invalido";
  break;
  }
return 0;
}
