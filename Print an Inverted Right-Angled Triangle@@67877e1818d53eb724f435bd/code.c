#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    printf("number of rows entered: %d",N);
    for(int i=N ; i<=N ; i--){
        for(int j=1 ; j<=i ; j++){
            printf("* ");
    }
        printf("\n");}
        
        return 0;
}