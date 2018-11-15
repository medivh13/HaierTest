#include <iostream>
#include <conio.h>
#include<iostream>
#include<algorithm>
#include<set>
#include<string>
#include<string.h>
#include<unistd.h>

int main()
{
  int array[100], n, c, d, swap;
 
  printf("masukan jumlah maximal element dalam array : \n");
  scanf("%d", &n);
 
  printf("Silahkan input %d kali bilangan integer :\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
//        swap       = array[d];
//        array[d]   = array[d+1];
//        array[d+1] = swap;
		  array[d] = array[d] + array[d+1];  
  		  array[d+1] = array[d] - array[d+1];  
          array[d] = array[d] - array[d+1];  
      }
    }
  }
 
  printf("Hasil bubble sort dalam urutan ascending:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  return 0;
}
