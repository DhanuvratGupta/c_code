
main()
{
    int w,x,y,z,a;
    printf("ENTER YOUR NUMBER=>");
    scanf("%d",&w);
    for(x=1;x<=w;x++)
    {
        for(y=x;y<=w-1;y++)
        {
            printf(" ");
        }
        for(z=0;z<x;z++)
        {
            printf("*");
        }
            if(x>1)
            {
                for(a=0;a<x-1;a++)
                {
                    printf("*");
                }
            }

        printf("\n");


    }
    getch();
}

