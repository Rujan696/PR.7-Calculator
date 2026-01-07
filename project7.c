#include <stdio.h>

int add(int a , int b){return a + b;}
int sub(int a , int b){return a - b;}
int mlp(int a , int b){return a * b;}
float div(float a , float b){return a / b;}
int mod(int a , int b){return a % b;}

int main() {
    
    int choice;
    
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("6. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&choice);
    
    while(choice != 6){
        
        switch(choice){
            
            case 1:
                int a,b;
                printf("Enter first number :- ");
                scanf("%d",&a);
                printf("Enter second number :- ");
                scanf("%d",&b);
                printf("Answer :- %d\n",add(a,b));
                break;
            
            case 2:
                printf("Enter first number :- ");
                scanf("%d",&a);
                printf("Enter second number :- ");
                scanf("%d",&b);
                printf("Answer :- %d\n",sub(a,b));
                break;
                
            case 3:
                printf("Enter first number :- ");
                scanf("%d",&a);
                printf("Enter second number :- ");
                scanf("%d",&b);
                printf("Answer :- %d\n",mlp(a,b));
                break;
                
            case 4:
                float c,d;
                while(1){
                    printf("Enter first number :- ");
                    scanf("%f",&c);
                    printf("Enter second number :- ");
                    scanf("%f",&d);
                    
                    if(d == 0){
                        printf("Second number cannot be 0 !!\n");
                    }
                    else{
                        break;
                    }
                }
                printf("Answer :- %.4f\n",div(c,d));
                break;
                
            case 5:
                printf("Enter first number :- ");
                scanf("%d",&a);
                printf("Enter second number :- ");
                scanf("%d",&b);
                printf("Answer :- %d\n",mod(a,b));
                break;
                
            default:
                printf("Invalid Choice !!!\n");
                break;
            
        }
        printf("\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("6. Exit\n");
        printf("Enter your choice :- ");
        scanf("%d",&choice);
    }
    

    
}