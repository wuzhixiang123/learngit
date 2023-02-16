#include <bits/stdc++.h>
struct stuff{
        char job[20];
        int age;
        float height;
};
 
int main()
{
        struct stuff huqinwei987;//定义stuff结构体的变量huqinwei987
 
        struct stuff &ref = huqinwei987;//定义huqinwei987的引用ref
 
        ref.age = 100;//通过ref修改huqinwei987的变量
        //打印对比
        printf("huqinwei987.age is %d\n",huqinwei987.age);
        printf("ref.age is %d\n",ref.age);
 
        struct stuff *ptr = &huqinwei987;//定义到huqinwei987的指针
        ptr->age = 200;//通过指针修改huqinwei987的变量
        //打印对比
        printf("huqinwei987.age 是 %d\n",huqinwei987.age);
        printf("ptr->age is %d\n",ptr->age);
 
        //既然都写了，把指针引用也加上吧
        struct stuff *&refToPtr = ptr;//定义到指针ptf的引用，通过指针引用修改huqinwei987的变量
        refToPtr->age = 300;
        printf("huqinwei987.age 是 %d\n",huqinwei987.age);
        printf("refToPtr->age 是 %d\n",refToPtr->age);
 
 
}
