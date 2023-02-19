#include <stdio.h>
#include <stdlib.h>
#include "Sender.h"

int create_sensor1_data() 
{
  int sensorData;
  FILE *fp;
  fp = fopen("sensor_1.txt","w+");
  for(i=0;i<NUMBER_OF_READINGS;i++)
  {
    sensorData=rand();
    fprintf(fp,"%d\n",sensorData);
  }
  fclose(fp);
  return 0;
}

int PrintSensorData1()
{
  FILE *fp1;
  create_sensor1_data();
  fp1 = fopen("sensor_1.txt","r+");
    
  for(;(!feof(fp1));)
  {
    fscanf(fp1,"%d\n",&sensor1Data);     
    printf("%d\n",sensor1Data);
    sprintf(str,"%d\n",sensor1Data);
    sscanf(str,"%d\n",&sensor1Data);       
  }
  fclose(fp1);  
  return sensor1Data;
}
