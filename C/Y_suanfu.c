#include<stdio.h>
int main(){
    //隐式转换
    //把取值小的变成大的,用于不同类型的运算
    int a = 10;
    double b = 12.3;

    c = a + b;
    printf(scanf(c));//c应该是double

    //short char运算时候会变成int进行计算
    short d = 10;
    short e = 12;
    f = d + e;
    printf(scanf(f));

    //强制转换 取值范围大的赋值给取值范围小的要进行强制转换
    int a1 = 10;
    short b1 = (short)a1;//把a1从int类型变成short

    //字符相加
    //字符转数字
    printf("%d\n",'a');

}