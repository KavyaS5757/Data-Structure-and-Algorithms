#include <stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

//symmetric matrix

/*
int main()                //Approach 1 (using the brute force method)    --c code
{
   int i,j,rows,columns,a[10][10],b[10][10],c=0;

   printf("Enter the number of rows and columns: ");
   scanf("%d %d",&rows,&columns);

   printf("Enter the elements");
   for(i=0;i<rows;i++)
   {
      for(j=0;j<columns;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   //finding the transpose

   for(i=0;i<rows;i++)
   {
      for(j=0;j<columns;j++)
      {
         b[j][i]=a[i][j];
      }
   }

   //finding whether they are symmetric or not

   for(i=0;i<rows;i++)
   {
      for(j=0;j<columns;j++)
      {
         if(a[i][j]!=b[j][i])
         {
            c--;
            break;
         }
      }
   }

   if(c==-1)
   {
      printf("The given matrix is not symmetric");
   }
   else
   printf("The given matrix is symmetric");
   return 0;
}
*/

/*
int main()                //Approach 2 (without using transpose)  => time complexity is low as compared to previous one --c code
{
   int i,j,rows,columns,a[10][10],b[10][10],c=0;

   printf("Enter the number of rows and columns: ");
   scanf("%d %d",&rows,&columns);

   printf("Enter the elements");
   for(i=0;i<rows;i++)
   {
      for(j=0;j<columns;j++)
      {
         scanf("%d",&a[i][j]);
      }
   }

   //finding whether they are symmetric or not

   for(i=0;i<rows;i++)
   {
      for(j=0;j<columns;j++)
      {
         if(a[i][j]!=b[j][i])
         {
            c--;
            break;
         }
      }
   }

   if(c==-1)
   {
      printf("The given matrix is not symmetric");
   }
   else
   printf("The given matrix is symmetric");
   return 0;
}
*/

const int MAX=100;
int main()
{
   int i,j,rows,column,a[10][10],b[10][10],c=0;
   std::cout<<"Enter the size of the elements"<<endl;
   std::cin>>rows>>column;

   std::cout<<"Enter all elements"<<endl;
   for(i=0;i<rows;i++)
   {
      for(j=0;j<column;j++)
      {
         std::cin>>a[i][j];
      }
   }

   //finding the transpose

   for(i=0;i<rows;i++)
   {
      for(j=0;j<column;j++)
      {
         b[j][i]=a[i][j];
      }
   }

   for(i=0;i<rows;i++)
   {
      for(j=0;j<column;j++)
      {
         if(a[i][j]!=b[j][i])
         {
            c--;
            break;
         }
      }
   }

   if(c==-1)
   std::cout<<"This isn't a symmetric matrix"<<endl;
   else
   std::cout<<"This is a symmetric matrix"<<endl;
   return 0;
}

/*
   References I've taken:
   DSA Udemy Course
   https://www.youtube.com/watch?v=kdTpUjd71G8  -- Brute force algorithms   
*/