#include<stdio.h>
int main(){
    /*this program calculate year,month & days
    from an integer number*/
    printf("Enter a number: ");
    int number;
    int year, oneYear = 365, yearCount = 0;
    int oneMonth = 30, monthCount = 0, month;
    scanf("%d",&number);

    while(number>=oneYear){
        yearCount+=1;
        number = number - oneYear;
    }

    while(number>=oneMonth){
        monthCount+=1;
        number = number-oneMonth;
    }
    printf("%d year\n",yearCount);
    printf("%d month\n",monthCount);
    printf("%d days\n",number);

}
