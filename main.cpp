# include <stdio.h>

int open_or_close(int, int);

int main()
{
    int i, j;
    puts("Please enter the val,press q to quit:");
    while (scanf("%d", &i) == 1)
    {
        puts("Enter the position��");
        scanf("%d", &j);
        if (open_or_close(i, j))           //��������ֵΪ0��1��ֱ���ú�����if����
            puts("It is a open_bit.");
        else
            puts("It is close_bit");
        puts("Please enter the val:");
    }


    return 0;
}
int open_or_close(int n, int m) //���Ϊ1������1�����򷵻�0
{
    return ((n << (m - 1)) & 1) == 1 ? 1 : 0;
}