#include ".assignment/test.h"
void swap(int &x,int &y)
{
    int t=x;
    x=y;
    y=t;
}
// 比较三个数的大小
void CompareThreeNumbers(int a, int b, int c, Result &result)
{
    if(a > b)
    {
        swap(a, b);

        if(b > c)
        {
            swap(b, c);
        }

        if(a > b)
        {
            swap(a, b);
        }
    }
    result.min = a;
    result.mid = b;
    result.max = c;// 在这里完成你的代码
}
