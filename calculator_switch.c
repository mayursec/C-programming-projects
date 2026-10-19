#include <stdio.h>
int main() {
    int a,b,c;
    do{
    printf("\n1.Addition\n");
    printf("2.Subtration\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&a);
     if (a >= 1 && a <= 4) {
            printf("Enter 1st no.: ");
            scanf("%d", &b);
            printf("Enter 2nd no.: ");
            scanf("%d", &c);
        }
    switch(a){
        case 1 : printf("Addtion is %d\n",b+c);
        break;
        
        case 2: printf("Subtration is %d\n",b-c);
        break;

        case 3: printf("Multiplication is %d\n",b*c);
        break;

        case 4: printf("Division is %d\n",b/c);
        break;
    }
    printf("\n-----------------------");
    printf("\nReturning to menu");
    printf("\n-----------------------");
    }while(a!=5);
    return 0 ;
}