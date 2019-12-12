#include <stdio.h>
int main()
{
    int n = 4;
    printf(" Masukan pola : ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++)
            {printf("* ");}
            printf("\n");
            }
    for (int i=1;i<=n-1;i++){
        for (int j=1;j<=i;j++)
            {printf("* ");}
            printf("\n");
            }
    for (int i=1;i<=n-2;i++){
        for (int j=1;j<=i;j++)
            {printf("* ");}
            printf("\n");
            }
    return 0;
}
