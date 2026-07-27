#include <stdio.h>

int range(int a);
void moni(int fuel, int boost);
int jcvp(int fuel, int boost);
int status(int jcvpfuel, int reserve);

int main(void)
{
    int fuel, boost, reserve, input;

    input = scanf("%d %d %d", &fuel, &boost, &reserve);
    if (input != 3)
    {
        printf("格式错误\n");
        return -1;
    }
    if (range(fuel) == -1 || range(boost) == -1 || range(reserve) == -1)
    {
        return -1;
    }

    moni(fuel, boost);

    printf("FUEL_AFTER_SIMULATION仍为%d, ", fuel);

    int jcvpfuel = jcvp(fuel, boost);
    printf("CALIBRATED_FUEL为%d, ", jcvpfuel);

    int status = statusCheck(jcvpfuel, reserve);
    if (status == 0)
    {
        printf("储备足够\n");
    }
    else
    {
        printf("储备不足\n");
    }
    return 0;
}

int range(int a)
{
    if (a < 0 || a > 100)
    {
        printf("范围错误\n");
        return -1;
    }
    return 0;
}

void moni(int fuel, int boost)
{
    int fuel = fuel + boost;
    printf("模拟燃料为%d, ", fuel);
}

int jcvp(int fuel, int boost)
{
    int jcvp = fuel + boost;
    return jcvp;
}

int statusCheck(int jcvpfuel, int reserve)
{
    if (jcvpfuel >= reserve)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
