//write a code in C to check if each eleemnt of an array is palindrome or not by using functions and print the count of number of palindromes 
#include<stdio.h>
int palindrome(int num){
    int t,rev,rem;
    t=num;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==t){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int size, i;
    printf("enter the array size: ")
    scanf("%d",&size);
    int arr[size];
    int count;
    printf("enter the elements: ")
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        while(palindrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
