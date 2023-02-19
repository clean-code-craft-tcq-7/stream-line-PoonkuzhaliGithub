#include <stdio.h>
#include "Sender.h"

int ConvertData1(int convertedData1)
{
    sprintf(str,"%d\n",convertedData1);
    sscanf(str,"%d\n",&convertedData1);
    return convertedData1;
}

int ConvertData2(int convertedData2)
{
    sprintf(str,"%d\n",convertedData2);
    sscanf(str,"%d\n",&convertedData2);
    return convertedData2;
}
int SendSensorData()
{
   int data1, data2;
   data1 = PrintSensorData1();
   ConvertData1(data1);
   data2 = PrintSensorData2();
   ConvertData2(data2);
}
