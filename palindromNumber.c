#include<stdio.h>
#include <stdbool.h>
int main(){
    system("Color 0a");
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int isPalindrome = checkPalindrome(n);
    if(isPalindrome == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }



}
int checkPalindrome(int n){
    int x = n;
    int reminder = 0, reversedNumber = 0;
    while(x>0){
        reminder = x%10;
        reversedNumber = reversedNumber*10+reminder;
        x = x/10;
    }
    if(reversedNumber == n){
        return 1;
    }else{
        return 0;
    }
}
