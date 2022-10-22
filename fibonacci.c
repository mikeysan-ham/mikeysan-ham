#include<stdio.h>
int fibo(int n )
    {
      if(n==0)
      {
      return 0; 
      }
      else if(n==1)
      {
      return 1;
      }
      else{
        return (fibo(n-1)+fibo(n-2));
      }
    }
int main(){
    printf("the number that is at the 8th position of the fibonacci series is  : ");
    int z=fibo(8);
    printf("%d",z);
    return 0;
}
