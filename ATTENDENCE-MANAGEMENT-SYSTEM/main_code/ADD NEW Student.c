#include<string.h>
#include<stdio.h>
//structure to represent date in format of date,month,year
typedef struct user{
    int date;
    char month[3];
    int year;
    }a;
//function to check that registered phone number is valid or not
int GetValidContactOrNot(char contact[])
{
 int i,flag;
 if(strlen(contact)==10)
  {
   flag=1;
   for(i=0;i<strlen(contact);i++)
   {
    if(!isdigit(contact[i]))
       flag=0;
   }
  }
  else
  {
   return(0);
  }
  return(flag);
}
// MAIN CODE
int main()
{
     a a1,a2;
     int m;
     int flag;
     char contact[10],name[50],fname[50],storeContact[200];
    char wel[20]="**WELCOME**";
    char b[50]="****SMART ATTENDENCE SYSTEM****";
    char c[50]="*CHOSSE YOUR OPTIAN*";
    char d[20]="1. TAKE ATTENDENCE";
    char e[50]="2. SEE ANY DAY ATTENDENCE";
    char f[20]="3. LIST OF STUDENT";
    char g[20]="4. ADD NEW STUDENT";
    printf("                     -------------------------------------------------------------------------\n");
    printf("%75s\n",b);
    printf("%65s\n",wel);
    printf("                     -------------------------------------------------------------------------");
    printf("\n\n\n%65s",c);
    printf("\n\n%65s",d);
    printf("\n%72s",e);
    printf("\n%65s",f);
    printf("\n%65s",g);
   label1: printf("                     ENTER YOUR CHOISE ==>  ");
    scanf("%d",&m);
    switch(m)
    {
        //TAKE AN ATTENDENCE
        case 1: printf("\n*ENTER DATE,MONTH,YEAR=>");
                FILE *fp;
                char str_date[20],str_year[5];
                //taking input of date
                scanf("%d%s%d",&a1.date,a1.month,&a1.year);
                //converting date into a different format and assigning to a different variable
                a2.date=a1.date;
                for(int i=0;i<3;i++)
                {
                    a2.month[i]=a1.month[i];
                }
                a2.year=a1.year;
                //converting integer date and year to string format
                sprintf(str_date, "%d", a2.date);
                sprintf(str_year, "%d", a2.year);
                //concatenating month and year to date
                strcat(str_date, a2.month);
                strcat(str_date, str_year);
                strcat(str_date,".txt");
                //create a file of format ex:2jun2012
                fp = fopen(str_date,"w");
                fclose(fp);
                printf("----START ATTENDENCE----\n");
                FILE *fptr,*fptr1;
                    int count=0,line=1;
                    char filename[100],c,user_input[50],attendence[3];
                    fptr = fopen("stu-name.txt", "r");
                    fptr1=fopen(str_date,"a");
                    if (fptr == NULL)
                    {
                        printf("Cannot open file \n");
                        exit(0);
                    }
                    printf("NAME.\t\t\t\tROLL NO.\t\tPRESENT(YES/NO)\n");
                    fputs("NAME.\t\t\t\tROLL NO.\t\tPRESENT(YES/NO)\n",fptr1);
                    for (c = fgetc(fptr); c != EOF; c = fgetc(fptr))
                    {
                        if (c != '\n')
                        {
                            printf("%c",c);
                            fputc(c,fptr1);
                        }
                        else
                        {
                            printf("\t\t\t");
                            fputs("\t\t\t",fptr1);
                            printf("%d",line);
                            fprintf(fptr1,"%d",line);
                            printf("\t\t\t");
                            fputs("\t\t\t",fptr1);
                            scanf("%s",attendence);
                            fputs(attendence,fptr1);
                            fputs("\n",fptr1);
                            line++;
                        }
                    }
                    fclose(fptr);
                    fclose(fptr1);
                    int new_ch;
                printf("DO U WANT TO CONTINUE?(PRESS 1 FOR YES):- ");
              scanf("%d",&new_ch);
              if(new_ch==1)
              {
                  printf("\n");
                  goto label1;
              }
              else{
                   break;
              }
        //SEE ANY DAY ATTENDENCE
        case 2:
                printf("\n*ENTER ANY DATE (FOR EX. 4jun2011)\n");
                FILE *fp1;
                char c1;
                int new_ch2;
                char user_input1[15];
                scanf("%s",user_input1);
                strcat(user_input1,".txt");
                fp1=fopen(user_input1,"r");
                if(fp1==NULL)
                {
                    printf("SORRY! ATTENDENCE FOR THIS DAY IS NOT AVAILABLE!!");
                }
                else
                {
                        c1 = fgetc(fp1);
                        while (c1 != EOF)
                        {
                            printf ("%c", c1);
                            c1 = fgetc(fp1);
                        }
                }
                fclose(fp1);
              printf("DO U WANT TO CONTINUE?(PRESS 1 FOR YES):- ");
              scanf("%d",&new_ch2);
              if(new_ch2==1)
              {
                  printf("\n");
                  goto label1;
              }
              else{
                   break;
              }
        //LIST OF STUDENT
        case 3:
              printf("\n\n");
              printf("***REGISTERED STUDENTS ARE***\n");
              printf("\n");
              FILE *contactFile;
              contactFile=fopen("contactlist.txt","r");
              char cha;
              int new_ch1;
              while(1)
              {
               if(contactFile==NULL)
               {
                printf("Contact File Not Found\n");
               }
               else
               {
                cha=fgetc(contactFile);
                if(cha==EOF)
                break;
                printf("%c",cha);
               }
              }
              fclose(contactFile);
              printf("DO U WANT TO CONTINUE?(PRESS 1 FOR YES):- ");
              scanf("%d",&new_ch);
              if(new_ch==1)
              {
                  printf("\n");
                  goto label1;
              }
              else{
                   break;
              }
        //ADD NEW STUDNET
        case 4:
            printf("");
                 FILE *m;
                m=fopen("stu-name.txt","a");
                printf("                     ---------------------------------------------------------------------------------------------\n");
                printf("                                         WELCOME TO STUDENT REGISTRATION\n");
                printf("                     ---------------------------------------------------------------------------------------------\n");
                      printf("ENTER STUDENT NAME:- \n");
                      fflush(stdin);
                      gets(name);
                      printf("ENTER FATHER NAME:- \n");
                      gets(fname);

                      for(int k=0;k<strlen(name);k++)
                      {
                          fputc(name[k],m);
                    }
                     fprintf(m,"\n");
                              fclose(m);

                      printf("Enter Mobile Number:- \n");
                      fflush(stdin);
                      gets(contact);
                      flag=GetValidContactOrNot(contact);
                      if(flag==1)
                      {
                       FILE *contactFile;
                       contactFile=fopen("contactlist.txt","a");
                       char c;
                                 strcpy(storeContact,"Name    : ");
                                 strcat(storeContact,name);
                                 strcat(storeContact,"           ");
                                 strcat(storeContact,"Father Name  : ");
                                 strcat(storeContact,fname);
                                 strcat(storeContact,"\n");
                                 strcat(storeContact,"Contact : ");
                                 strcat(storeContact,contact);
                                 strcat(storeContact,"\n");
                                 fputs(storeContact,contactFile);
                                  fputs("----------------------------------------------------\n",contactFile);
                                 printf("Contact has been added Successfully\n");
                                fclose(contactFile);
                       }
                      else
                      {
                       printf("Invalid Contact Number.It should contain only numbers and should have 10 digits\n");
                      }
                              printf("DO U WANT TO CONTINUE?(PRESS 1 FOR YES):- ");
                      scanf("%d",&new_ch);
                      if(new_ch==1)
                      {
                          printf("\n");
                          goto label1;
                      }
                      else{
                           break;
                      }

    }
    return 0;
}
