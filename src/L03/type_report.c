#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

// INT_MAX

int main(void){
    unsigned int code;
    double threshold;
    char mode;

    int n = scanf("%u %lf %c",&code,&threshold,&mode);
    if(n != 3){
        printf("错误,scanf的返回值错误\n");
        return -1;
    }

    if (-100.0 > threshold || threshold > 100.0) {
        return -1;
    }
    if (code < 0 ||code > 100){
        return -1;
    }
    if (mode !='A' && mode != 'M' && mode != 'S'){
        return -1;
    }

    printf ("sizeof(char) = %d\n",sizeof(char));
    printf ("sizeof(int) = %d\n",sizeof(int));
    printf ("sizeof(unsigned int) = %d\n",sizeof(unsigned int));
    printf ("sizeof(float) = %d\n",sizeof(float));
    printf ("sizeof(double) = %d\n",sizeof(double));

    int imax = INT_MAX,imin =INT_MIN;
    unsigned int uimax = UINT_MAX;
    printf("int的最大值为%d,int的最小值为%d,unsigned的最大值为%u\n",imax,imin,uimax);

    printf("十进制code为%d,八进制code为%o,十六进制的code为%#x\n",code,code,code);

    printf("threshold的小数形式为%f,转换为int的结果为%d\n",threshold,(int)threshold);

    printf("mode为\"%c\"\n",mode);

    // 最后两个不会
    

    return 0;
}
