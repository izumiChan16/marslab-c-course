#include <stdio.h>

int range(int a)
{   
    if (a<0 || a>100){
        printf("格式错误\n");
        return -1;
    }
    return 0;

}

int energy(int distance,int cargo)
{
    int consumption;
    consumption = distance*4 + cargo*2;
    return consumption;
}
int ready(int consumption,int sigbal);


int grade(int signal,int consumption)
{
    if(consumption<=500 && signal>=60)
    {
        if(signal >= 85 && consumption <=150)
        {
            printf("等级为%c\n",'S');
        }
        else
        {
            printf("等级为%c\n",'A');
        }
    }
    else
    {
        printf("等级为%c\n",'C');
    }
}

int main()
{
    int distance_km, cargo_kg, signal,input;

    input = scanf("%d %d %d",&distance_km,&cargo_kg,&signal);
    if (input != 3){
        printf("格式错误\n");
        return -1;
    }

    range(distance_km);
    range(cargo_kg);
    range(signal);

    // ------------------------
    int consumption = energy(distance_km, cargo_kg);
    
    ready(consumption,signal);
    // --------------------------

    grade(signal,consumption);

    return 0;
}

int ready(int consumption,int signal)
{
    if(consumption<=500 && signal>=60){
        printf("能耗为%d, ",consumption);
        printf("就绪, ");  
    }
    else{
        printf("未就绪, ");
    }
    return 0;
}