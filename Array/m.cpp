#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct library{
   char bookname[50];
   char author[50];
   int noofpages;
   float price;
};
int main(){
   struct library lib[100];
   char ar_nm[30];
   char bookname[30];
   int i,j, keepcount;
   i=j=keepcount = 0;
   while(j!=6){
      printf("\n1. Add book information\n");
      printf("2.Display book information\n");
      printf("3. List all books of given auther\n");
      printf("4. List the count of books in the library\n");
      printf("5. Exit");
      printf ("\n\nEnter one of the above : ");
      scanf("%d",&j);
      switch (j){
         /* Add book */
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].bookname);
            printf ("Enter author name = ");
            scanf ("%s",lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].noofpages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            keepcount++;
            i++;
            break;
         case 2:
            printf("you have entered the following information\n");
            for(i=0; i<keepcount; i++){
               printf ("book name = %s\n",lib[i].bookname);
               printf ("\t author name = %s\n",lib[i].author);
               printf ("\t pages = %d\n",lib[i].noofpages);
               printf ("\t price = %f\n",lib[i].price);
            }
            break;
         case 3:
             printf("Enter auther name : ");
          scanf("%s",ar_nm);
            for(i=0; i<keepcount; i++)
           {
              if(strcmp(ar_nm, lib[i].author) == 0)
             printf("%s %s %d %f",lib[i].bookname,lib[i].author,lib[i].noofpages,lib[i].price);
            }
              break;
              
           case 4:

             printf("\n Books in library : %d", keepcount);
                break;
         case 5:
            exit (0);
      }
   }
   return 0;
}