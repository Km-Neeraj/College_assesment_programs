
   #include<stdio.h>
   int main()
   {
                         int arr[]={ 1,0,2,3,0,4,0,1};
                         int i,j,temp;
                         for(i=0;i<8;i++)
                         {
                            for(j=i+1;j<8;j++)
                            {
                                if(arr[i]==0)
                                {
                                   temp=arr[i];
                                   arr[i]=arr[j];
                                   arr[j]=temp;
                                }
                            }
                         }
                         for(i=0;i<8;i++)
                         {
                            printf("%d",arr[i]);                      
                         }
       return 0;
   }