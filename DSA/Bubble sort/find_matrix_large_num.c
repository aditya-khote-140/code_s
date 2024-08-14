#include<stdio.h>
  int main ()
  {
      int mat [3][3],i,j, max;
      printf("Enter the matrix of 3*3 :");
      for (i=0; i<3; i++)
      {
          for (j=0; j<3; j++)
          scanf("%d" , &mat [i] [j] );
      }
      max=mat [0] [0] ;
      for (i=0; i<3; i++)
      {
          for(j=0; j<3; j++)
      
      if (mat < max)
      
          max =mat [i] [j];
  }
  printf("The largest element = %d" , max);
  return 0;
  }