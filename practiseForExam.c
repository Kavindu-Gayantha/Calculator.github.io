/*project title = calculator
date created = 17 jul 2018
*/

#include<stdio.h>


int main()
{ char decision;
 do
    {


    int num1,num2,result;
    printf("This is a calculator\nIf you want to continue this calculation again press \'y\' after finishing calculation\n\n");
    printf("Enter a number : ");
    scanf("%d",&num1);
    printf("Enter a number : ");
    scanf("%d",&num2);
    printf("what calculation do you want : + or - or * or / ?? \n");
    char calculation;
    scanf("  %c",&calculation);
    switch(calculation)
    {
    case '+': case1(num1,num2); break;
    case '-': case2(num1,num2); break;
    case '*': case3(num1,num2); break;
    case '/': case4(num1,num2); break;
    default : printf("Invalid input plz enter only relevant input as given above !!!\n\n");

    }
    printf("\n\nIf you want to continue this calculation again press \'y\'\n");
    scanf("  %c",&decision);
 }while(decision=='y');
}
int case1(int num1, int num2)
{
    printf("result is : number1+number2 = %d",num1+num2);
    return num1+num2;
}
int case2(int num1,int num2)
{
    printf("result is : number1-number2 = %d",num1-num2);
}
int case3(int num1,int num2)
{
    printf("result is : number1*number2 = %d",num1*num2);
}
int case4(int num1,int num2)
{
    printf("result is : number1/number2 = %d",num1/num2);
}
