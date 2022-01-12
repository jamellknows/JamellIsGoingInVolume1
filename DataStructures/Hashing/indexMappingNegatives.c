#include <stdlib.h>
#include <stdio.h>
#define MAX 1000;

bool has[MAX + 1][2];

bool search(int x)
{
    if(x >= 0)
    {
        if(has[x][0] == 1){
            return true;
        }else{
            return false
        }
    }
    x = abs(x);
    if(x >= 0)
    {
        if(has[x][1] == 1){
            return true;
        }else{
            return false;
        }
    }
}

void insert(int a[], int n)
{//mapping function 0 index is 1 if posiitve 1 index is 1 if negative
    for(int i = 0; i < n; i++){
        if(a[i] >= 0)
        {
            has[a[i][0] = 1];
        }else{
            has[abs[a[i]]][1] = 1;
        }
    }
}

int main()
{
    int a[] = {-1, 9, -5, -8, -5, -2};
    int n = sizeof(a)/sizeof(a[0]);
    insert(a, n);
    int x = -2;
    if(search(x) == true)
    {
        printf("Present");
    }
    else{
        printf("Not present");
    }
    EXIT_SUCCESS(0);
    return 0;
   
}