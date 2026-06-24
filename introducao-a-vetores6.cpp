#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
vector<string> a =
{
"Ana", "Bruno", "Carlos", "Diana", "Eduardo",
"Fernanda", "Gabriel", "Helena", "Igor", "Julia"
};
vector<double> n =
{
8.5, 7.0, 9.2, 6.5, 10.0,
5.8, 7.4, 8.9, 4.5, 9.0
};
cout << "Aluno 5: " << a[4] << endl;
cout << "Nota: " << n[4] << endl;
return 0;
}
