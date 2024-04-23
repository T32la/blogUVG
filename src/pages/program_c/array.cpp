/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main()
{
  int array[5]; // definir muestra array
  
  array[0] = 10;
  array[1] = 20;
  array[2] = 30;
  array[3] = 40;
  array[4] = 50;
  
  // Variable para obtener el length de mi array
  int length = sizeof(array) / sizeof(array[0]);
  
  // cout << length << endl;
  
  cout << array[3];
  
  return 0;
}