#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> a =
{
"Ferrari", "Toyota", "Ford", "BMW", "Honda", "Porsche", "Mercedes"
};
cout << "Lista de marcas de carro:" << endl;
for (int i = 0; i < 7; i++)
{
cout << i + 1 << "a marca: " << a[i] << endl;
}
return 0;
}
