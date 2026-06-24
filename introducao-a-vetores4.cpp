#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> a =
{
"F40", "Corolla", "Mustang", "M3", "Civic", "911 Carrera", "Classe C"
};
cout << "Lista de modelos de carro:" << endl;
for (int i = 0; i < 7; i++) {
cout << i + 1 << "o modelo: " << a[i] << endl;
}
return 0;
}
