#include<stdio.h>

#define Lower 0
#define upper 300
#define step 10

/*int main()
{
    int huashi;
    
    printf("\t温度转化程序\n");

    for(huashi = Lower;huashi <= upper;huashi += step)
        printf("华氏度:%3d\t摄氏度:%6.1f\n", huashi, (5.0/9.0)*(huashi-32));
}
*/

//编写打印摄氏度转化为华氏度的程序

/*
int main()
{
    float sheshi;
    
    printf("摄氏度转换为华氏度的温度转化程序\n");

    for (sheshi = -273.15;  sheshi <= upper; sheshi++)
        printf("摄氏度:%3.2f \t华氏度:%6.2f\n",sheshi,(9.0/5.0)*sheshi+32.0);
}
*/

//修改温度转换程序，要求以逆序打印温度转化表
/*
int main()
{
    float huashi;

    for (huashi = upper; huashi >=Lower; huashi--)
        printf("华氏度:%3.2f\t摄氏度:%6.2f\n",huashi,(huashi-32)*(5.0/9.0));
}
*/


//getchar与putchar的关系，一般putchar与printf这两个函数可以交替调用，输出的次序与调用的次序一致

/*
    文件复制函数

#include<stdio.h>

int main()
{
    int c;

    c = getchar();
    while (c != EOF)// EOF(end of file,文件结束)
    {
        putchar(c);
        c = getchar();
    }
    
}
*/
//验证表达式getchar() != EOF 的值是0还是1


int main()
{
    int c;
    c = EOF;
    printf("EOF = %d\n",c);

    system("pause");
    
    return 0;

}