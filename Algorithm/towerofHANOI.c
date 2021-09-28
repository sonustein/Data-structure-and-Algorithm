#include <stdio.h>
//Tower of hanoi problem in c language
static int move;
void TOH(int n,int A,int B,int C){
    if(n>0){
        TOH(n-1,A,C,B);
        printf("%c to %c \n",A+64,C+64);
        move++;
        TOH(n-1,B,A,C);
    }
}
int main()
{
    int n=3;
    printf("program to solve tower of hanoi follow the steps below\n");
    TOH(n,1,2,3);
    printf("moves taken to solve above problem is %d",move);
    
    return 0;
}
