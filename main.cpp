#include <iostream>

#include "function.h"

using namespace std;

int main()
{
  vector<char> ch;
  // string to char
  string sttc;
  getline(cin, sttc, '\n');

  for (size_t i = 0; i < sttc.size(); i++)
  {
    ch.push_back(static_cast<char>(sttc.at(i)));
  }

  vector<string> str;
  for (size_t i = 0; i < ch.size(); i++)
  {
    str = change_decimal_to_binary(static_cast<int>(ch.at(i)));
    if (!(change_binary_to_decimal(dao(str)) <= 32))
    {
      cout << static_cast<char>(change_binary_to_decimal(dao(str)));
    }
    else
    {
      cout << ch.at(i);
    }
  }

  cout << "\ndone!\n";
  return 0;
}

