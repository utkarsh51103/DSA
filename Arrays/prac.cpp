#include <iostream>
using namespace std;

int divide(int dividend, int divisor) {
    if(dividend==divisor)return 1;
    bool sign = true;
    if(dividend<=0 && divisor>0)sign=false;
    if(dividend>=0 && divisor<0)sign=false;
    long n = abs(dividend);
    long d = abs(divisor);
    long sum=0;
    while(n>=d){
      int count=0;
      while(n>=(d<<(count+1))){
          count++;
      }
      sum+= (1<<count);
      n -= (d<<count);
    }
    if(sum==(1<<31) && sign)return INT_MAX;
    if(sum>=(1<<31) && !sign)return INT_MIN;
    return sign ? sum : -sum;
}

int main()
{
    cout << divide(-10,4)<< " ";
}