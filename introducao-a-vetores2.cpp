#include <iostream>
#include <vector>
using namespace std;
int main()
{
vector<double> a =
{
4.50, 2.99, 5.20, 3.80, 7.15,
1.99, 8.40, 6.30, 12.50, 4.10,
3.25, 9.90, 14.20, 5.75, 2.50
};
cout << "Preço na posição 14: R$ " << a[13] << endl;
return 0;
}
