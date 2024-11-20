#include<stdio.h>
#include<string.h>
int main(){
   char data[2];
   double num1;
   double num2;
   double result;

    printf("\nEnter a the operator you want to do work with(+ * - /): ");
    scanf("%s", data);
    if ((strcmp(data,"+") ==0) || (strcmp(data,"-") ==0) || (strcmp(data,"*") ==0) || (strcmp(data,"/") ==0)) {
        printf("Enter num 1:");
        scanf("%lf", &num1 );
        printf("Enter num 2:");
        scanf("%lf", &num2 );
    } else {
        printf("Invalid Input!!");
    }
    int p = 0;
    if (strcmp(data,"+") ==0){
        int p = 1;
    } 
    if (strcmp(data,"-") ==0){
        int p = 2;
    } 
    if (strcmp(data,"*") ==0){
        int p = 3;
    } 
    if (strcmp(data,"/") ==0){
        int p = 4;
    }
    printf("%d",p);

    switch(p){
        case 1:{
            result = num1 + num2;
            printf("result: %lf", result );
            break;
        }
        case 2:{
            result = num1 - num2;
            printf("result: %lf", result);
            break;
        }

        case 3:{
            result = num1 * num2;
            printf("result: %lf" , result);
            break;
        }

        case 4:{
            result = num1/num2;
            printf("result: %lf" , result);
            break;
        }
    
     return 0;

  }
   




    
   



}