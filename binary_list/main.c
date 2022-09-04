#include <stdio.h>
#include <stdlib.h>
#define N 20

int cnt,n,x[N];
int check(int v, int k)
{
    return 1;
}

void solution()
{
    cnt+=1;
    printf("Solution %d:", cnt);
    for (int i=1;i<=n;i++){
        printf("%d", x[i]);
    }
    printf("\n");
}

void Try(int k)
{
    int v;
    for (int v=0;v<=1;v++){
        if (check(v,k)){
            x[k]=v;
            if (k==n) solution();
            else Try(k+1);
        }
    }
}


int main()
{
    n=3;
    Try(1);
    return 0;
}
