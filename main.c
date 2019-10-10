#include<stdio.h>
int add(int a,int b);
int minus(int a,int b);
int div(int a,int b);
int main(){
    int num1,num2;
    int method;
    printf("１．足し算\n２．引き算\n３．割り算\n計算方法を数字で入力：");
    scanf("%d",&method);
    if(method<1||method>4){
        printf("入力が違います\n");
    }
    printf("一つ目の数字：");
    scanf("%d",&num1);
    printf("\n二つ目の数字：");
    scanf("%d",&num2);
    
    switch(method){
        case 1:
        printf("\n答えは%dです",add(num1,num2));
        case 2:
        printf("\n答えは%dです",minus(num1,num2));
        case 3:
        printf("\n答えは%dです",div(num1,num2));
    }
}



int add(int a,int b){



}



int minus(int a,int b){



}



int div(int a,int b){

    

}