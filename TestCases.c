#include <stdio.h>
#include "Sensor.h"
#include <assert.h>

void TEST_CASE_01();
void TEST_CASE_02();

void TEST_CASE_01()
{
  int sentData = PrintSensorData1();
  int convertData = ConvertData1(sentData);

  assert( sentData == convertData);
}
void TEST_CASE_02()
{
  int sentData = PrintSensorData2();
  int convertData = ConvertData2(sentData);

  assert( sentData == convertData);
}
int main()
{
   TEST_CASE_01(); 
   TEST_CASE_02(); 
}
