#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> a =
{
3500000, 150000, 550000, 600000, 160000, 900000, 320000
};
cout << "Lista de precos dos carros:" << endl;
for (int i = 0; i < 7; i++)
{
cout << i + 1 << "o preco: R$ " << a[i] << endl;
}
return 0;
}
