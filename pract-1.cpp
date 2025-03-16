#include <stdio.h>
int p();
int main()
{
	p();
	return 0;
}
int p()
{   
    int n,r,at,i,a,b,c,d,e;
    char sn;
    printf("Enter no. of students:\n");
    scanf("%d",&n);
    printf("-------------------------------------\n");
    for (i=1; i<=n; i++)
    {
        printf("Enter roll no:");
        scanf("%d",&r);
        printf("Enter name of student:");
        scanf("%s",&sn);
        printf("Enter attendance of student:");
        scanf("%f",&at);
        printf("enter the marks of maths:");
	    scanf("%d",&a);
	    printf("enter the marks of science:");
	    scanf("%d",&b);
	    printf("enter the marks of socialsci:");
	    scanf("%d",&c);
	    printf("enter the marks of hindi:");
	    scanf("%d",&d);
	    printf("enter the marks of english:");
	    scanf("%d",&e);
        int total=a+b+c+d+e;
	    printf("total=%d",total);
	    if((a+b+c+d+e<=500)&&((a>39)&&(a<=100))&&((b>39)&&(b<=100))&&((c>39)&&(c<=100))&&((d>39)&&(d<=100))&&((e>39)&&(e<=100)))
	    {
		    printf("\nstudent pass");
	        float percent=((a+b+c+d+e)/5);
            printf("\nPercentage=%0.3f\n",percent);
	    }
	    else
	    {
		    printf("\nstudent fail\n");
	    }
        printf("--------------------------------------\n");
    }
        return 0;
}





