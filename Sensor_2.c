#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_READINGS    50
int create_sensor2_data();

int create_sensor2_data() 
{
  int sensor2Data,i;
  FILE *fp;
  fp = fopen("sensor_2.txt","w+");
  for(i=0;i<NUMBER_OF_READINGS;i++)
  {
      sensor2Data=rand();
      fprintf(fp,"%d\n",sensor2Data);
  }
  fclose(fp);
  return 0;
}
