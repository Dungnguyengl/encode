//function.h

#ifndef __FUNCTION__
#define __FUNCTION__

#include <vector>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

vector<string> change_decimal_to_binary(int decimal)
{
  vector<string> binarytemp;
  vector<string> binary;
  string temp;
  for (size_t i = 0; i < 7; i++)
  {
    if (decimal % 2 == 0)
      binarytemp.push_back("0");
    else
      binarytemp.push_back("1");
    decimal /= 2;
  }

  while (!binarytemp.empty())
  {
    binary.push_back(binarytemp.back());
    binarytemp.pop_back();
  }

  return binary;
}

//dao day nhi phan
vector<string> dao(vector<string> temp)
{
  vector<string> binary;
  while (!temp.empty())
  {
    binary.push_back(temp.back());
    temp.pop_back();
  }
  return binary;
}

int change_binary_to_decimal(vector<string> binary)
{
  int decimal = 0;
  string Stemp;
  int Itemp;
  for (size_t i = 0; i < 7; i++)
  {
    Stemp = binary.back();
    istringstream(Stemp) >> Itemp;
    decimal += Itemp * pow(2, i);
    binary.pop_back();
  }
  return decimal;
}

#endif //__FUNCTION__