/* Name-Tushar Rastogi
   date-13/06/2020 */


#include<stdio.h>
int main()
{
      FILE *fp;
      int size;
      int sum=0;
      
      fp=fopen("num.txt","r");
       
       fscanf(fp,"%d",&size);
        
         int a[size];
         
         for(int i=0;i<size;i++)
         {
           fscanf(fp,"%d",&a[i]);
           
           }
           
           fclose(fp);
             
         for(int i=0;i<size;i++)
         {
             sum=sum+a[i];     
           
           }
           
           printf("Avg=%f ",(float)sum/size);
           
           
           int max=a[0];
           
           for(int i=0;i<size;i++)
           {
               if(a[i]>=max)
               max=a[i];
               
               }
               
               
               printf("Max=%d",max);
               
           
           
           
           
           
           return 0;
           
           
           
           
           
           }
