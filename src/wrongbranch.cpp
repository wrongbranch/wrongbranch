/*
  wrongbranch.cpp

  > mingw32-make -f makefile.tdmgpp32
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

int main(int ac, char **av)
{
  int i;
  cout << "sizeof(size_t): " << hex << setw(8) << setfill('0') << right
    << sizeof(size_t) << endl;
  for(i = 0; i < ac; ++i)
    cout << i << " " << av[i] << endl;
  return 0;
}
