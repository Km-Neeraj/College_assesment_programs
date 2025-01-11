
  #include<stdio.h>
  int find_sum(int);    //Function declaration
  int main()
  {
                         int num=123,sum;
                         sum=find_sum(num);
                         printf("sum=%d",sum);
  return 0;

  }
  int find_sum(int num)
  {
      int rem,sum=0;
      if(num==0)
        return sum;
else
{
  rem=num%10;
  sum=sum+rem;
  return sum+find_sum(num/10);                       
}                      
}