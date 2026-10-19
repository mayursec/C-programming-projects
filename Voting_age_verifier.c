//concept used If else , else if , loops
#include <stdio.h>
int main() {
    int a;
    printf("Enter age:");
    scanf("%d",&a);

    if (a<0) {
        printf("Invalid age");}
    else if (a>=18){
        printf("You can vote");
    }
    else if (a<18 && a>=0) {
        printf("You cannot vote");
    }
    else if (a>=100) {
        printf("Invalid age");
    }
    else if (a>='A' && a<='Z') {
        printf("Invalid age");
    }
    else {
        printf("You cannot vote");
    }
     return 0 ;

}