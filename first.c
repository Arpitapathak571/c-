#include<stdio.h>
#include<conio.h>
int main()
{   char i,j,count='a';
    for(i='a';i<='e';i++)
    {
     //for(b=1;b<=i-1;b++)
      // cout<<" ";
       for(j='a';j<=i;j++)
       { printf( "%c",count);
        ++count;
    }
    printf("\n");
    }
    return 0;
}