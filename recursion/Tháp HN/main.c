#include <stdio.h>

int count;
void move(int n, char A, char B, char C)
{
    if(n==1){
        count += 1;
        printf("Step %d: Move from %c to %c \n", count, A, B);
    }
    else {
        move(n-1,A,C,B);
        move(1,A,B,C);
        move(n-1,C,B,A);
    }
}

int main()
{
    count = 0;
    move(5,'A','B','C');
    return 0;
}
