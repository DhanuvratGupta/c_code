#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,n;
    scanf("%d",&n);
    for(x=0;x<n;x++)
    {
        for(y=x;y>=0;y--)
        {
            printf("*");
            if(y>0)

            {
                for(int k=1;k>0;k--)
                {
                    printf("*");
                }

            }
        }
        printf("\n");
    }
    getch();
}



