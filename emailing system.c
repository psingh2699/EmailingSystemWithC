#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main ()
{
    system("color 4e");
    FILE *fp,*a,*b,*cp,*b1,*b2;
    int p,x,c,d,e,l=0,i,j,k;
    long int dob,dob1[25];
    char message1[100],message2[100],emailid1[25],username[25],firstname1[100][10],lastname1[100][10],password[15],password1[15],password2[3][15],firstname[100][10],lastname[100][10],emailid[25],username1[100][25],password3[100][15],username2[100][25];
    input:

    system("cls");
    printf("1.LOG IN \n2.SIGN UP\n");
    printf("enter your choice");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        {

            printf("username\n");
            scanf("%s",username);
            printf("password\n");
            scanf("%s",password);
            fp=fopen("email.txt","r");

            for(i=0;i<100;i++)
            {
               fscanf(fp,"%s",username1[i]);
                d=strcmp(username,username1[i]);
               i++;
               fscanf(fp,"%s",password3[i]);
               e=strcmp(password,password3[i]);
               if((d==0)&&(e==0))
               {                                   //if starting
             system("cls");
                   fclose(fp);
                 input1 :
                     system("cls");

                   printf("WELCOME \n");
                   a=fopen("info.txt","r");
                   for(k=0;k<=i;k++)
                   {
                   fscanf(a,"%s ",firstname1[k]);

                   }
                   printf("%s ",firstname1[i-1]);
                   printf("%s\n",firstname1[i]);
                   fclose(a);


             printf("1.MESSAGES\n2.PROFILE\n3.SIGN OUT\n");
scanf("%d",&p);
    switch(p)
    {
    case 1:
        {

            message:

            printf("enter the email you want to send message\n");
            scanf("%s",emailid1);
            fp=fopen("email.txt","r");
            fflush(stdin);
            for(j=0;j<100;j++)
            {
            fscanf(fp,"%s",username2[j]);

            p=strcmp(emailid1,username2[j]);




                if(p==0)
                {
                if((i-1==0&&j==2)||(j==0&&i-1==2))
                {
                   input2 :
                  b1=fopen("message01.txt","a+");
                  while((fgets(message2,10,b1)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b1,"%s: ",lastname1[i-1]);
                fprintf(b1,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b1);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input2;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==0&&j==4)||(j==0&&i-1==4))
                {
                  input3 :
                  b2=fopen("message02.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input3;
}
else
{
    goto input1;
}
break;

                }

           else if((i-1==0&&j==6)||(j==0&&i-1==6))
                {
                 input4 :
                  b=fopen("message03.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input4;
}
else
{
    goto input1;
}
break;

                }
           else if((i-1==0&&j==8)||(j==0&&i-1==8))
                {
                  input5:
              printf("%d",j);
                  b=fopen("message04.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");

                              printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input5;
}
else
{
    goto input1;
}
break;

                }
           else if((i-1==2&&j==4)||(j==2&&i-1==4))
                {
                  input6:
                  b=fopen("message05.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input6;
}
else
{
    goto input1;
}
break;

                }
           else if((i-1==2&&j==6)||(j==2&&i-1==6))
                {
                  input7:
                  b=fopen("message06.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input7;
}
else
{
    goto input1;
}
break;

                }
                else if((i-1==2&&j==8)||(j==2&&i-1==8))
                {
                 input8:
                  b=fopen("message07.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input8;
}
else
{
    goto input1;
}
break;

                }
          else if((i-1==4&&j==6)||(j==4&&i-1==6))
                {
                  input9 :
                  b=fopen("message08.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input9;
}
else
{
    goto input1;
}
break;

                }
                else if((i-1==4&&j==8)||(j==4&&i-1==8))
                {
                     input10:
                  b=fopen("message09.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input10;
}
else
{
    goto input1;
}
break;

                }
                else if((i-1==6&&j==8)||(j==6&&i-1==8))
                {

                input11 :
                  b=fopen("message10.txt","a+");
                  while((fgets(message2,10,b)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b,"%s: ",lastname1[i-1]);
                fprintf(b,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input11;
}
else
{
    goto input1;
}
break;


                }

                 else if((i-1==0&&j==10)||(j==10&&i-1==0))
                {
                  input12 :
                  b2=fopen("message11.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input12;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==0&&j==12)||(j==12&&i-1==0))
                {
                  input13 :
                  b2=fopen("message12.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input13;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==2&&j==10)||(j==10&&i-1==2))
                {
                  input14 :
                  b2=fopen("message13.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input14;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==2&&j==12)||(j==12&&i-1==2))
                {
                  input15 :
                  b2=fopen("message14.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input15 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==4&&j==10)||(j==10&&i-1==4))
                {
                  input16 :
                  b2=fopen("message15.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input16 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==4&&j==12)||(j==12&&i-1==4))
                {
                  input17 :
                  b2=fopen("message16.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input17 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==6&&j==10)||(j==10&&i-1==6))
                {
                  input18 :
                  b2=fopen("message17.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input18 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==6&&j==12)||(j==12&&i-1==6))
                {
                  input19 :
                  b2=fopen("message18.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input19 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==8&&j==10)||(j==10&&i-1==8))
                {
                  input20 :
                  b2=fopen("message19.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input20 ;
}
else
{
    goto input1;
}
break;

                }
else if((i-1==8&&j==12)||(j==12&&i-1==8))
                {
                  input21 :
                  b2=fopen("message20.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input21 ;
}
else
{
    goto input1;
}
break;

                }

                 else if((i-1==10&&j==12)||(j==12&&i-1==10))
                {
                  input22 :
                  b2=fopen("message21.txt","a+");
                  while((fgets(message2,10,b2)!=NULL))
                  {
                      printf("%s",message2);
                  }
                printf("\n");


                printf(" enter your message \n");

                fflush(stdin);
                gets(message1);
                a=fopen("info.txt","r");
                for(k=0;k<=i;k++)
                {
                    fscanf(a,"%s",lastname1[k]);
                }
                fprintf(b2,"%s: ",lastname1[i-1]);
                fprintf(b2,"%s\n",message1);

                printf("message sent\n");
                fclose(fp);
                                fclose(a);
                                fclose(b2);
printf("Press 1 to enter the message again and 2 for going back home");
scanf("%d",&p);
if(p==1)
{
    goto input22 ;
}
else
{
    goto input1;
}
break;

                }


                 }
           else if(j!=99)
           {
               continue;
           }
           else if(j==99)
           {
           printf("invalid username\n");
           printf("press 1 to go back to home else press 2 to re enter the message");
    scanf("%d",&k);
    if(k==1)
    {
        goto input1;
    }
    else
    {
    goto message;
    }

         break;


           }
           }
break;
        }
        case 2:
        {
printf("NAME: ");
a=fopen("info.txt","a+");
for(k=0;k<=i;k++)
{
    fscanf(a,"%s",firstname1[k]);
}
printf("%s ",firstname1[i-1]);
printf("%s\n",firstname1[i]);
fclose(a);
printf("DATE OF BIRTH: ");
cp=fopen("dob.txt","r");
for(k=0;k<=i;k++)
{
    fscanf(cp,"%ld",&dob1[k]);
}
printf("%ld\n",dob1[(i/2)]);
printf("EMAIL-ID:  ");
fp=fopen("email.txt","a+");
for(k=0;k<i;k++)
{
    fscanf(fp,"%s",username1[k]);
}
printf("%s",username1[i-1]);
fclose(fp);
fclose(cp);
  getch ();
goto input1;
break;
        }
        case 3:
        {
goto input;
break;
        }
        }                      //switch ended

break;
               }           //if ended

               else if (i!=99)
               {
                continue;
               }
          else if (i==99)
          {
              printf("invalid username or password");
getch();
              goto input;
              }



               }
      break;
            }

case 2:
        {
int j=0,l=0;

         printf("FIRST NAME\n");
         scanf("%s",firstname);
         printf("LAST NAME\n");
         scanf("%s",lastname);
         printf("Date Of Birth  \n");
         printf("FORMAT-26041999\n");
         scanf("%ld",&dob);
         cp=fopen("dob.txt","a");
         fprintf(cp,"%ld",dob);
         printf("E-MAIL\n");
         scanf("%s",emailid);
         printf("CREATE A PASSWORD\n");
         scanf("%s",password1);
         passwords:{
         printf("RE ENTER THE PASSWORD\n");

         scanf("%s",password2[j]);
         c=strcmp(password1,password2[j]);
         {
            if(c==0)
            {
                printf("your account is created\n");

            }
            else
            {
                printf("incorrect password\n");
               j++;
                goto passwords;
            }
            }
         }
        fp=fopen("email.txt","a");
            fprintf(fp,"%s\n",emailid);
            fprintf(fp,"%s\n",password2[j]);
         fclose(fp);
         a=fopen("info.txt","a");
         fprintf(fp,"%s\n",firstname);
         fprintf(fp,"%s\n",lastname);
         fclose(fp);
         fclose(a);
getch();


              goto input;


        }

    }



    return 0;
getch();
}



