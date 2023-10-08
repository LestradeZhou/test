#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));//是随机数真的是随机的
    int x=rand()%100+1;
    int y;
    int n=0;
    do{
        printf("请输入数字\n");
        scanf("%d",&y);
        if(y>x){
            printf("你太大了\n");
        }
        if (y<x){
            printf("你好小啊\n");
        }
        n++;
    }
    while (y!=x);
    if(n<6){
        printf("你只用了%d次就猜中了,愿幸运女神一直眷顾你\n",n);
    }else{
        printf("你用了%d次才猜中,运气也是实力的一部分，年轻人多积点德\n",n);
    }
    return 0;
}