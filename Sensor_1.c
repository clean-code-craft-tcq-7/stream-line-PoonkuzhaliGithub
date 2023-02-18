*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_READINGS    50
int create_sensor_data();

int create_sensor_data() 
{
  int sensorData,i;
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
