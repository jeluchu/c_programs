//PROGRAMA EN C++
//AUTOR: JESÚS MARÍA CALDERÓN - GITHUB JELUCHU
//https://github.com/Jeluchu

#include <stdio.h>
int main(){

   int a=5, b, c, i=10;

   b=a++;
   c=++b;

   printf("a = %d, b = %d, c = %d\n",a,b,c);
   printf("i, i++, i++ = %d, %d, %d\n\n",i,i++,i++);

   printf("%d\n",++i);
   printf("%d\n",--i);
   printf("%d\n",i++);
   printf("%d\n",i--);
   printf("%d\n",-i++);
   printf("%d\n",-i--);

   getchar();

   return 0;
}
