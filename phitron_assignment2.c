#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int n;
    scanf("%d", &n);
    int space=1, p=1;
    
    for(int line=1; line<=n; line++)
    {
        for(int i=1; i<=p; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        p++;
    }
    p=n-1;

    for(int line=1; line<=(n-1); line++)
    {
        for(int s=1; s<=space; s++)
        {
            printf(" ");
        }
        space++;
        for(int i=1; i<=p; i++)
        {
            printf("%d", i);
        }
        printf("\n");
        p--;
    }
    return 0;
}
