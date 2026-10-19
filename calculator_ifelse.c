#include <stdio.h>
int main() { 
    int a;
    do{
    printf("\n1.Addition\n");
    printf("2.Subtration\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    printf("Enter your choice :");
    scanf("%d",&a);
    if(a==5){
        printf("Exiting...\n");
    }

    else if (a<1 || a>5){
        printf("Invalid option");
    }

    else{  

        int b,c;
        printf("Enter 1st no.:");
        scanf("%d",&b);
        printf("Enter 2nd no.:");
        scanf("%d",&c);     
        
    if(a==1){
        printf("\nSum is: %d",b+c);
    }
    else if (a==2){
        printf("\nDifference is: %d",b-c);
    }
    else if (a==3){
        printf("\nMultiplication is: %d",b*c);
    }
    else if (a==4) {
         if (c == 0)
        printf("Cannot divide by zero\n");
    else{
        printf("\nDivision is: %d",b/c);
    }
    }

    
    
    printf("\n-----------------------");
    printf("\nReturning to menu");
    printf("\n-----------------------");
}

    }while(a!=5);
    return 0 ;
}