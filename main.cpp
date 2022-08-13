# include <stdio.h>

int open_or_close(int, int);

int main()
{
    int i, j;
    puts("Please enter the val,press q to quit:");
    while (scanf("%d", &i) == 1)
    {
        puts("Enter the position：");
        scanf("%d", &j);
        if (open_or_close(i, j))           //函数返回值为0或1，直接用函数做if条件
            puts("It is a open_bit.");
        else
            puts("It is close_bit");
        puts("Please enter the val:");
    }


    return 0;
}
int open_or_close(int n, int m) //如果为1，返回1，否则返回0
{
    return ((n << (m - 1)) & 1) == 1 ? 1 : 0;
}