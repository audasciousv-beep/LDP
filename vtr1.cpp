#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> a = {5, 10, 15};
vector<int> b = {2, 4, 6};
vector<int> c = {1, 2, 3};
vector<int> resultado(3);
for (int i = 0; i < 3; i++)
{
resultado[i] = a[i] + b[i] + c[i];
}
cout << "Resultado da soma dos 3 vetores:" << endl;
for (int i = 0; i < 3; i++)
{
cout << "Posição " << i+1 << ": " << resultado[i] << endl;
}
return 0;
}
