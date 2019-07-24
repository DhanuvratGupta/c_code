main()
{
    printf("WELCOME\n");
    int a,b,c,ch;
    printf(" INFORMATION- \n ENTER 1 FOR ADDING \n ENTER 2 FOR SUBTRACTION\n ENTER 3 FOR MALTIPLY\n ENTER 4 FOR DIVID\n ENTER 5 FOR MODULAS\n ENTER HEAR YOUR NUMBER=>");

    scanf("%d",&ch);
    printf("ENTER YOUR TOW NUMBERS=>");
    scanf("%d%d",&a,&b);
    if(ch==1)
    {
        c=a+b;
        printf("ADD IS %d",c);
    }
    else if(ch==2)
    {
        c=a-b;
        printf("SUBTRACTION  IS %d",c);

    }
    else if (ch==3)
    {
        c=a*b;
        printf("MALTIPLY  IS %d",c);
    }
    else if(ch==4)
    {
        c=a/b;
       printf("DIVIDED IS %d",c);
    }
    else if(ch==5)
    {
        c=a%b;
        printf("MODUIAS IS %d",c);
    }



    getch();

}
