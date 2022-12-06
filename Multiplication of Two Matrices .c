#include<stdio.h>
int main() {
    int a[10][10], b[10][10], m[10][10], c1, r1, c2, r2, i, j, k;


    printf("Enter the Matrix-A\n");
    printf("Enter the value of Row-A (R <= 10): ");
    scanf("%d", & r1);
    
     printf("Enter the value of Column-A (C <= 10): ");
    scanf("%d", & c1);
    
    printf("Enter the elements of Matrix-A\n");

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    printf("Enter the elements of Matrix-B\n");
    printf("Enter the value of Row-B (R <= 10): ");
    scanf("%d", & r2);
    
     printf("Enter the value of Column-B (C <= 10): ");
    scanf("%d", & c2);
    
    printf("Enter the elements of Matrix-B\n");

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", & b[i][j]);
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            m[i][j] = 0;
            for (k = 0; k < c1; k++) {
                m[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("The Result of the matrices is: \n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
