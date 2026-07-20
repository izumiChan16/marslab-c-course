#include<stdio.h>

int main(){

    int energy = 50, distance = 0, samples = 0, Sol = 1;
    

    while (Sol<11) {
        printf ("Sol %d ",Sol);

        if (Sol == 4) { 
            printf ("| STORM | action skipped\n");
        }
        else  {
            switch(Sol % 3) {
                case 1:
                    energy -= 12; distance += 3;
                    printf ("| MOVE ");
                    break;
                case 2:
                    energy -= 8; samples += 1;
                    printf ("| SAMPLE ");
                    break;
                case 0:
                    energy +=10;
                    printf("| CHARGE ");
                    break;
            }
            printf("| energy=%d | distance=%d | samples=%d ",energy, distance,samples);
            
            if (energy <= 22){
                printf("| status=CRITICAL\n");
                printf("Mission stopped: critical energy\n");
                break;
            }
            if (energy > 22 && energy <= 35){
                printf("| status=LOW\n");
            }
            if (energy > 35){
                printf("| status=NORMAL\n");
            }
       }
        Sol++;   
    }
     
    return 0;
    
}