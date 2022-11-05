#include "euclidean.h"

Eucl::Eucl()
{
    FirstNum = 0; 
    SecondNum = 0; 
}
Eucl::Eucl(int first, int second)
{
    FirstNum = first; 
    SecondNum = second;
}
int Eucl::FindGCD()
{
    int dividend, newdividend, divisor, remainder, GCD, count = 0; 
    //Finding the larger number to start the dividing process
    if(FirstNum > SecondNum)
    {
        dividend = FirstNum;
        divisor = SecondNum; 
    }
    else
    {
        divisor = FirstNum;
        dividend = SecondNum;
    }

    //Default GCD
    if(dividend % divisor == 0)
    {
        GCD = dividend % divisor; 
        return GCD;
    }
    else
    {
        //if not it conducts the euclidean algorithm
        while(dividend % divisor != 0)
        {
            count++;
            newdividend = divisor;
            divisor = (dividend % divisor);
            dividend = newdividend;
        }
            GCD = divisor;
            return GCD;
    }
}