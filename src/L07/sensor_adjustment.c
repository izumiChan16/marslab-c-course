#include <stdio.h>

int readingsrange(int reading);
int sensorrange(int sensor_number);
int adjustmentrange(int adjustment);
void apply_adjustment(int * const reading, int adjustment);
void print_readings(const int readings[], int count);

int main(void)
{
    int readings[5];
    int sensor_number, adjustment;

    for(int i = 0; i < 5; i ++)
    {
        int input1 = scanf("%d", &readings[i]);

        if(input1 != 1)
        {
            printf("输入格式错误：需要输入 7 个整数。\n");
            return -1;
        }

        if(readingsrange(readings[i]) == -1)
        {
            printf("读数范围错误: 5 个读数必须在 0 到 100 之间。\n");
            return -1;
        }
        
    }
    
    int input2 = scanf("%d",&sensor_number);
    if(input2 != 1)
    {
        printf("输入格式错误：需要输入 7 个整数。\n");
        return -1;
    }
    
    if(sensorrange(sensor_number) == -1) return -1;

    int input3 = scanf("%d",&adjustment);
    if(input3 != 1)
    {
        printf("输入格式错误：需要输入 7 个整数。\n");
        return -1;
    }

    if (adjustmentrange(adjustment) == -1) return -1;
    

    if(readingsrange(readings[sensor_number - 1] + adjustment) == -1)
    {
        printf("修正结果错误：修正后的读数必须在 0 到 100 之间。\n");
        return -1;
    }

    printf("原始读数：");
    print_readings(readings, sizeof readings / sizeof readings[0]);
    printf("目标传感器: %d\n",sensor_number);

    int *target = &readings[sensor_number - 1]; 
    printf("修正前: %d\n",*target);
    printf("修正量: %d\n",adjustment);

    apply_adjustment(target,adjustment);
    
    printf("修正后: %d\n",*target);

    printf("修正后读数: ");
    print_readings(readings, sizeof readings / sizeof readings[0]);


    return 0;
}


int readingsrange(int reading)
{
    if(reading < 0 || reading > 100)
    {
        return -1;
    }
    return 0;
}

int sensorrange(int sensor_number)
{
    if(sensor_number < 1 || sensor_number > 5)
    {
        printf("传感器编号错误：编号必须在 1 到 5 之间。\n");
        return -1;
    }
    return 0;
}

int adjustmentrange(int adjustment)
{
    if (adjustment < -20 || adjustment > 20)
    {
        printf("修正量错误：修正量必须在 -20 到 20 之间。\n");
        return -1;
    }
    return 0;
}

void apply_adjustment(int *const reading, int adjustment)
{
    *reading += adjustment;
}

void print_readings(const int readings[], int count)
{
    
    for (int i = 0; i < count; i++) {
        printf("%d ", readings[i]);
    }
    printf("\n");
}

