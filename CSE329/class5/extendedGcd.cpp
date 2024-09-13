// imp for ca

// ax+by=(b%a)x1+ay1

// x=y1-[b/a]*x1
// y=x1

// for finding factors ... x and y are factors;

#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int *x, int *y)
{

    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;

    }

    int x1,y1;  //factors for next iteration

    int gcd=extendedEuclidean(b%a,a,&x1,&y1);

    *x=y1-(b/a)*x1;
    *y=x1;

    return gcd;

}

int main()
{
    
    int x, y;
    cout << extendedEuclidean(25, 35, &x, &y);

    cout<<endl;
    cout<<x<<" "<<y;
}
