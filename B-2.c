#include<stdio.h>
//hello version3
void check(int a){
if(a%2==0){
printf("even");
}
else{
printf("odd");}}
int main(){
    int a,b;
    printf("enter the two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    int x;
    x=a;
    b=a;
    b=x;
    printf("a=%d,b=%d",a,b);
    printf("the number is\n");
    check(a);
    return 0;
}