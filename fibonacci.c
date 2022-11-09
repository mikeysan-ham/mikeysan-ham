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
    int e;
    printf("which position of Fibonacci series do you want to find out ?\n");
    scanf("%d",&e);
    int z=fibo(e);
    printf("The digit is :%d",z);
    return 0;
}
