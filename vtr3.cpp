#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<int> a(3);
vector<int> b(3);
int produto_escalar = 0;
cout << "Digite os 3 elementos do vetor a:" << endl;
for (int i = 0; i < 3; i++)
{
cin >> a[i];
}
cout << "Digite os 3 elementos do vetor b:" << endl;
for (int i = 0; i < 3; i++)
{
cin >> b[i];
}
for (int i = 0; i < 3; i++)
{
produto_escalar += a[i] * b[i];
}
cout << "O produto escalar de a por b é: " << produto_escalar << endl;
return 0;
}
