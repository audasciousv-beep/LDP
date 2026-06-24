#include <iostream>
#include <vector>
using namespace std;
int main() {
vector<int> a(3);
vector<int> b(3);
vector<int> d(3);
cout << "Digite os 3 elements do vetor a:" << endl;
for (int i = 0; i < 3; i++) {
cin >> a[i];
}
cout << "Digite os 3 elementos do vetor b:" << endl;
for (int i = 0; i < 3; i++) {
cin >> b[i];
}
for (int i = 0; i < 3; i++) {
d[i] = a[i] - b[i];
}
cout << "Resultado do vetor d (a - b):" << endl;
for (int i = 0; i < 3; i++) {
cout << "Posicao " << i << ": " << d[i] << endl;
}
return 0;
}
