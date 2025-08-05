#include<stdio.h>
\\this is the first change in A2
//theres an update
//new version for A2
int main(){
    int arr[20];
    unsigned int a,i=0;
    printf("The number is\n");
    scanf("%d",&a);
    while(a/2!=0){
        arr[i]=a%2;
        a/=2;
        i++;
        if(a==1){
            arr[i]=1;
        }
    }
    int j=i;
    
    while(j>=0)
    {
        printf("%d",arr[j]);
        j--;
    }
}This is the first code