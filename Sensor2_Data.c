#include <stdio.h>
#include <stdlib.h>
#include "Sender.h"

int create_sensor2_data() 
{
  int i, sensorData;
  FILE *fp;
  fp = fopen("sensor_2.txt","w+");
  for(i=0;i<NUMBER_OF_READINGS;i++)
  {
    sensorData=rand();
    fprintf(fp,"%d\n",sensorData);
  }
  fclose(fp);
  return 0;
}

int PrintSensorData2()
{
  int sensor2Data;
  FILE *fp2;
  create_sensor2_data();
  fp2 = fopen("sensor_2.txt","r+");
  for(;(!feof(fp2));)
  {
    fscanf(fp2,"%d\n",&sensor2Data);
    printf("\n%d\n",sensor2Data);   
  }  
  fclose(fp2);
  return sensor2Data;
}
