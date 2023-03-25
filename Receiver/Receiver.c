#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_READINGS   50

int create_sensor1_data();
int Calculate_MaxMin_SensorData(int *sensor1Data[NUMBER_OF_READINGS]);
int ReadSensorData1();

int create_sensor1_data()
{
  int i, sensorData;
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

int ReadSensorData1()
{
  FILE *fp1;
  int nums[5];
  int sensor1Data;
  int min,max,i;
  create_sensor1_data();
  fp1 = fopen("sensor_1.txt","r+");
  fscanf(fp1,"%d",&sensor1Data);
  min = max = sensor1Data;
    while( fscanf(fp1,"%d",&sensor1Data) > 0 )
    {
        if( sensor1Data < min ) min = sensor1Data;
        if( sensor1Data > max ) max = sensor1Data;
    }

    printf("maximum: %d\n",max);     
    printf("minimum: %d\n",min);     
  fclose(fp1);  
  return sensor1Data;
}

int main()
{
    ReadSensorData1();
    return 0;
}
