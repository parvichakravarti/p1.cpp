#include <stdio.h>
int p();
int main()
{
	p();
	p();
	return 0;
}
int p()
{   
    int n,r,at,i,a,b,c,d,e,total;
    int pascount=0;
    int failcount=0;
    char sn;
    float percent;
    printf("Enter no. of students:\n");
    scanf("%d",&n);
    printf("-------------------------------------\n");
    for (i=1; i<=n; i++)
    {
        printf("Enter roll no:");
        scanf("%d",&r);
        printf("Enter attendance of student:");
        scanf("%d",&at);
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
        total=a+b+c+d+e;
	    printf("total=%d",total);
	    if((a+b+c+d+e<=500)&&((a>39)&&(a<=100))&&((b>39)&&(b<=100))&&((c>39)&&(c<=100))&&((d>39)&&(d<=100))&&((e>39)&&(e<=100)))
	    {
		    printf("\nstudent pass");
	        percent=((a+b+c+d+e)/5);
            printf("\nPercentage=%0.1f\n",percent);
	    }
	    else
	    {
		    printf("\nstudent fail\n");
	    }
        printf("--------------------------------------\n");
        printf("\t----------------------------------------------------------------\n");
        printf("\t----------------------------------------------------------------\n");
        printf("\t||roll no ||attendence ||subject        ||total  ||percentage ||\n"); 
		printf("\t||%d       ||%d         ||maths=%d       ||%d    ||           ||\n",r,at,a,total);
		printf("\t||        ||           ||               ||       ||%0.3f     ||\n",percent);
        printf("\t||        ||           ||science=%d     ||       ||           ||\n",b);
        printf("\t||        ||           ||socialsci=%d   ||       ||           ||\n",c);
        printf("\t||        ||           ||hindi=%d       ||       ||           ||\n",d);
        printf("\t||        ||           ||english=%d     ||       ||           ||\n",e);
        printf("\t----------------------------------------------------------------\n");
        printf("\t----------------------------------------------------------------\n");
        if((percent>40)&&((a>39)&&(a<=100))&&((b>39)&&(b<=100))&&((c>39)&&(c<=100))&&((d>39)&&(d<=100))&&((e>39)&&(e<=100)))
        {
        	printf("\n\t\t\tstudent pass\n");
        	pascount++;
        	printf("___________________________________________________________________________\n");
		}
		else 
		{
		    printf("\n\t\tstudent fail\n");
		    failcount++;
		    printf("-----------------------------------\n");
        	printf("\tbacklog\n\n");
        	printf("fill this form:\n");
        	printf("\t---------------------------------------------------------------\n");
        	printf("\t---------------------------------------------------------------\n");
        	printf("\t||                   Backlog Form                            ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||Name:                                                      ||\n");
        	printf("\t||Date of Birth:                                             ||\n");
        	printf("\t||Year:                                                      ||\n");
        	printf("\t||Rollno:                                                    ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||No of back subject:                                        ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||marks obtain in maths:                                     ||\n");
        	printf("\t||marks obtain in science:                                   ||\n");
        	printf("\t||marks obtain in socialsci:                                 ||\n");
        	printf("\t||marks obtain in hindi:                                     ||\n");
        	printf("\t||marks obtain in english:                                   ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||signature of student:                                      ||\n");
        	printf("\t||                                                           ||\n");
        	printf("\t||signature of invigilator:                                  ||\n");
        	printf("\t---------------------------------------------------------------\n");
        	printf("\t---------------------------------------------------------------\n");
        	printf("\n____________________________________________________________________________\n");
		}
    }
    printf("\n\t %d students pass",pascount);
    printf("\n\t %d students fail\n",failcount);
    printf("\n*******************************************************************************************************************\n");
    printf("\n******************************===================000000000==================***************************************\n");
    printf("\n*******************************************************************************************************************\n");
    return 0;
}











