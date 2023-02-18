*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#define NUMBER_OF_READINGS    50
int create_sensor1_data();

int create_sensor1_data() 
{
  int sensor1Data,i;
  FILE *fp;
  fp = fopen("sensor_1.txt","w+");
  for(i=0;i<NUMBER_OF_READINGS;i++)
  {
      sensor1Data=rand();
      fprintf(fp,"%d\n",sensor1Data);
  }
  fclose(fp);
  return 0;
}
