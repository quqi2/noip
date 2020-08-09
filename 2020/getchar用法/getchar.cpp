#include <bits/stdc++.h>
//http://www.cplusplus.com/reference/cstdio/getchar/
using namespace std;
int main ()
{

  int c;
  puts ("Enter text. Include a dot ('.') in a sentence to exit:");
  do {
    c=getchar();
    putchar (c);
  } while (c != '.');
  return 0;
}