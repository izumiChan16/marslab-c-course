#include <stdio.h>

int main(void)
{
    int i, j;
    int board[3][4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            int input = scanf("%d", &board[i][j]);
            if (input != 1)
            {
                printf("输入格式错误：需要输入 12 个整数信号等级。\n");
                return -1;
            }
            if (board[i][j] < 0 || board[i][j] > 9)
            {
                printf("信号等级错误：所有信号等级必须在 0 到 9 之间。\n");
                return -1;
            }
        }
    }

    printf("信号矩阵：\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", board[i][j]);
        }
        printf("\n\n");
    }

    printf("各行信号总和: ");
    int sum;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 4; j++)
        {
            sum += board[i][j];
        }
        printf("%d ", sum);
    }
    printf("\n");

    int x = board[i][j];
    double sumsum = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            sumsum += board[i][j];
        }
    }
    printf("平均信号等级: %.2f\n\n", sumsum / 12);

    printf("各等级出现次数: \n");
    int level[10] = {0};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            level[board[i][j]]++;
        }
    }
    int a;
    for (a = 0; a < 10; a++)
    {
        printf("等级 %d: %d 次\n", a, level[a]);
    }
    printf("\n");
    
    int max_level = 0, min = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (level[board[i][j]] > max_level)
            {
                max_level = level[board[i][j]];
                min = board[i][j];
            }
        }
    }
    printf("最高频等级: %d\n", min);
    printf("出现次数: %d\n", max_level);

    return 0;
}