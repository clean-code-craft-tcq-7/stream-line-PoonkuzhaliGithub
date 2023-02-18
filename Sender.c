#include <stdio.h>
#include <stdlib.h>
#include "Sender.h"

int main(){
    int sensorData1,sensorData2;
    FILE *fp1, *fp2;
    fp1 = fopen("sensor_1.txt","r+");
    fp2 = fopen("sensor_2.txt","r+");
  
    for(;( (!feof(fp1)) && (!feof(fp2)) );)
    {
        fscanf(fp1,"%d\n",&sensorData1);
        fscanf(fp2,"%d\n",&sensorData2);
        printf("%d\n%d***\n",sensorData1,sensorData2);
    }
    fclose(fp1);
    fclose(fp2);
return 0;
}
