#include <stdio.h>
int main() {
    int m,again;

    do{

    printf("Enter your marks:");
    scanf("%d",&m);

    if (m>100 || m<0){
        printf("Invalid Input\n");
    }

    else if(m>=90 && m<=100){
        printf("Your grade is A\n");
    }

    else if (m>=80 && m<=89){
        printf("Your grade is B\n");
    }

    else if (m>=70 && m<=79){
        printf("Your grade is C\n");
    }

    else if (m>=60 && m<=69){
        printf("Your grade is D\n");
    }

    else {
        printf("Your grade is F\n");
    }
    
    printf("Check again (1=yes,0=no):");
    scanf("%d",&again);

    }while(again!=0);
    return 0;
}