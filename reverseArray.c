
 #include <stdio.h>
 int main()
 {
     int n = 8;
     int ara[8] = {10, 20, 30, 40, 50,60,70,80};
     int temp;
     int i,j;
     for(i = 0,j = n-1;i<n/2-1,j>=n/2;i++,j--)
     {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
     }
     for(i = 0;i<n;i++)
     {

            if(i == 0){
                printf("%d st element: %d \n",i+1,ara[i]);
            }
            else{
                printf("%d th element: %d \n",i+1,ara[i]);
            }
     }
     return 0;
 }
