#include <iostream>
using namespace std;
int main()
{
float *p=new float;
float *v=new float[10];
cout<< sizeof(*p) << ", " << 10 * sizeof(*v) << endl;
delete p;
delete[] v;
return 0;
}
