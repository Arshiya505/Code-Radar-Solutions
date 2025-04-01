#include<stdio.h>
int main() {
    int findMSB(int num);
    if ( num==0)
    return 0;
    int msb = 1;
    while(num>1){
        num >>= 1;
        msb <<= 1;
    }
    return msb ;
int main(){
    int num ;
    scanf("%d", &num);
    int msb = findMSB(num);
    if (msb==1)
    printf("Set");
    else 
    printf("Not Set")
    return 0;
}
}
