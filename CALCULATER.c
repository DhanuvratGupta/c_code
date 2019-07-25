main()
{
    int x,a,b,n;
    while(1)

    {


    printf("\n(1).ENTER 1 FOR ADDITION \n (2).ENTER 2 FOR SUPRACTION \n (3).ENTER 3 FOR DIVID \n (4).ENTER 4 FOR NATURAL NUMBER\n ENTER 5 FOR EXIT");
    printf("\nENTER YOUR CHOISE");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("\nENTER YOUR NUMBERS");
        scanf("%d%d",&a,&b);
        printf("\nsum of tow number is %d",a+b);
        break;
        case 2:
        printf("\nENTER YOUR NUMBERS");
        scanf("%d%d",&a,&b);
        printf("\nsupraction of two number is %d",a-b);
        break;
        case 3:
         printf("\nENTER YOUR NUMBERS");
         scanf("%d%d",&a,&b);
         printf("\ndivid of two number is %d",a/b);
         break;
         case 4:
          printf("\nENTER YOUR NUMBER");
        scanf("%d",&n);
        for(a=1;a<=n;a++)
        {
            printf("%d",a);
        }
        break;
        case 5:exit(0);
        default:printf("invalid value");
    }


    }
    getch();
}
