#include <stdio.h>
#include <math.h>

int main() {
    float a, b, result;
    int x, y;
    char op;

    do {
        printf("\nEnter operator (+, -, *, /, %, ^) or q to quit: ");
        scanf(" %c", &op);

        if(op == 'q') {
            printf("Calculator Closed.\n");
            break;
        }

            printf("Enter two numbers: ");
           

        if(op == '%'){
            scanf("%d %d", &x, &y);
        }else{
            scanf("%f %f", &a, &b);
        }

        switch(op) {

            case '+':
                result = a + b;
                printf("Result = %.2f\n", result);
                break;

            case '-':
                result = a - b;
                printf("Result = %.2f\n", result);
                break;

            case '*':
                result = a * b;
                printf("Result = %.2f\n", result);
                break;

            case '/':
                if(b == 0) {
                    printf("Error: Division by zero not allowed\n");
                }
                else {
                    result = a / b;
                    printf("Result = %.2f\n", result);
                }
                break;

            case '%':
                if(b == 0){
                    printf("The modulo by zero not allowed!");
                }else{
                    printf("The result is : %d", x % y);
                }
                break;

            case '^':
                if(y == 0){
                    printf("Mathematical error!");
                } else {
                    result = pow(a, b);
                    printf("result = %.2f \n", result);
                }
                break;

            default:
                printf("Invalid operator\n");
        }

    } while(op != 'q');

    return 0;
}