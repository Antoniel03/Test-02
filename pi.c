#include<stdio.h>
 
int main()
{
      int i, j = 1;
      float pi = 0, c;
 
      for (i = 0; i < 1000000000; i++){
          c = 4 / (float)j;
 
               if (i % 2 == 1){
			   pi -= c;
			   }
                  
               else{
			   pi += c;
			   }
                   
          j += 2;
      }
 
      printf("Valor de Pi: %.6f", pi);
 
      return 0;
}
 

