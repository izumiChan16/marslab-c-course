#include <stdio.h>

void apply_adjustment(int * const reading, int adjustment);
void print_readings(const int readings[], int count);

// 检查读取的 5 个整数，传感器和修正值
int check_readings(int readings[], int sensor_number, int adjustment) {

    for (int i = 0; i < 5; i++) {
        if (readings[i] < 0 || readings[i] > 100) {
            printf("读数范围错误：5 个读数必须在 0 到 100 之间。");
            return -1;
        }
    }

    if (sensor_number < 1 || sensor_number > 5) {
        printf("传感器编号错误：编号必须在 1 到 5 之间。");
        return -1;
    }

    if (adjustment < -20 || adjustment > 20) {
        printf("修正量错误：修正量必须在 -20 到 20 之间。");
        return -1;
    }

    // 数据无误返回0
    return 0;
}

int main()
{

    // 设置 input_status 记录一共读取了多少个数
    int input_status = 0;
    // 使用固定长度的 int readings[5] 保存全部传感器读数。(题目要求)
    int readings[5] = {0};

    for (int i = 0; i < 5; i++) {
        input_status = scanf("%d", &readings[i]);
        if (input_status != 1) {
            // 遇到错误立马就输出错误信息并返回
            printf("输入格式错误：需要输入 7 个整数。");
            return -1;
        }
    }

    // 读取需要修正的传感器编号 一个修正量
    int sensor_number, adjustment;
    input_status = scanf("%d %d", &sensor_number, &adjustment);
    if (input_status != 2) {
        printf("输入格式错误：需要输入 7 个整数。");
        return -1;
    }

    // 调用检查程序
    // -1 => 有误
    if (check_readings(readings, sensor_number, adjustment) == -1) {
        return -1;
    }

    // 下面开始修正程序
    //
    //
    // 首先我们要检查修正值是否合法（issue 场景 4）
    // 是因为我们使用下标访问所以需要 -1
    if (readings[sensor_number - 1] + adjustment < 0 || readings[sensor_number - 1] + adjustment > 100) {
        printf("修正结果错误：修正后的读数必须在 0 到 100 之间。");
        return -1;
    }
    
    
    // 我们要打印原始读数
    // 在 main 中通过 sizeof readings / sizeof readings[0] 得到数组元素数量，并显式传给数组参数函数。(题目要求)
    int count = sizeof(readings) / sizeof(readings[0]);
    printf("原始读数：");
    print_readings(readings, count);

    
    // 然后我们要打印目标传感器
    printf("目标传感器：%d\n", sensor_number);

    // 接下来我们开始修正，这里需要传入的是需要修正的传感器的指针
    // 有点绕，回到数组的概念
    // 数组每一个位置代表了一个内存地址
    // 这里说的指向这个传感器的指针，就是一个指向这个位置的指针
    int * reading = &readings[sensor_number - 1]; // 减 1 是因为我们使用下标访问

    apply_adjustment(reading, adjustment);


    // 修正完毕以后，我们还需要打印结果
    printf("修正后读数：");
    print_readings(readings, count);

    return 0;
}


void print_readings(const int readings[], int count) {

   
    for (int i = 0; i < count; i++) {
        printf("%d", readings[i]);

        // 处理换行和空格
        if (i != count-1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

}


void apply_adjustment(int * const reading, int adjustment) {

    // 这里传入的是 常量指针
    printf("修正前：%d\n", *reading);

    printf("修正量：%d\n", adjustment);
    *reading = *reading + adjustment;

    printf("修正后：%d\n", *reading);
}
