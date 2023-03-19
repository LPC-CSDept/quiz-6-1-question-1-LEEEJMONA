#include <iostream>
#include <iomanip>
using namespace std;

void swapTwoValues(int& ,int&);
void swapTwoValues(float&,float&);
void getinput (int &, int &);
void getinput (float &, float &);
int n1, n2;
float f1, f2;


void getinput(int &n1, int &n2)
{
    cin >> n1 >> n2;
}

void getinput(float &f1, float &f2)
{
    cin >> f1 >> f2;
}

void swapTwoValues(int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}


void swapTwoValues(float& f1, float& f2)
{
    float temp = f1;
    f1 = f2;
    f2 = temp;
}
