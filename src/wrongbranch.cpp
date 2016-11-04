/*
  wrongbranch.cpp

  > mingw32-make -f makefile.tdmgpp32
*/

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <string>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

#define BUFSIZE 8
static char *src = "abcd\nefg\nhijklmn\nop";

int test_sscanf()
{
  char fmt[BUFSIZE], buf[6];
  sprintf(fmt, "%%%d[^\n]", sizeof(buf) - 1);
  int readnum = sscanf(src, fmt, buf);
  fprintf(stderr, "len(fmt): %d\n", strlen(fmt));
  fprintf(stderr, "readnum: %d\n", readnum);
  fprintf(stderr, "len(buf): %d\n", strlen(buf));
  fprintf(stderr, "buf: [%s]\n", buf);
  return 0;
}

int main(int ac, char **av)
{
  int i;
  cout << "sizeof(size_t): " << hex << setw(8) << setfill('0') << right
    << sizeof(size_t) << endl;
  for(i = 0; i < ac; ++i)
    cout << i << " " << av[i] << endl;
  test_sscanf();
  return 0;
}
