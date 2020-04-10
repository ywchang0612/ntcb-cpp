#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
void f(int ,int& , int& );
int g(int z,int& z1);

int main()
{
    int y = 0, y1, y2;
    int z = 0 ,z1, z2;
    
    f(y, y1 ,y2);
    z2=g(z, z1);
    cout << y1 << " " << y2 << endl;
    cout << z1 << " " << z2 << endl;
    system("pause");
    return 0;
}
int g(int z,int& z1)
{
    int z2=2;
    z1=1;
    return z2;
}

void f(int y, int& y1, int& y2)
{
     y1=1;
     y2=2;
}
