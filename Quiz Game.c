#include<stdio.h>
#include<conio.h>
int firstLevel(int answer);
int secondLevel(int answer);
int thirdLevel(int answer);
int fourthLevel(int answer);
int fifthLevel(int answer);
int sixthLevel(int answer);
int seventhLevel(int answer);
int eighthLevel(int answer);
int ninethLevel(int answer);
int tenthLevel(int answer);
int main()
{
	FILE *fptr;
	int answer=0;
	int money=0;
	char start=0;
	int used=0;
	int used1=0;
	int lifeLine=0;
	printf("\t\t**************************************\n");
	printf("\t\t\t RULES FOR PLAYING \t\t\t\n");
	printf("\t\t**************************************\n\n");
	printf("(1) Game consists of 10 level every level has 5 questions\n(2)their two life lines you can only use them once\n(3)If you give even one answer wrong the game will end\n(4)You are not allowed to use life line in the first level\n(5)If you pressed wrong key for answer or life-line it will be wasted.\n");
	printf("\n\t\t**************************************");
	printf("\n\t\t\t   HOW TO PLAY \t\t\t\n");
	printf("\t\t**************************************\n\n");
	printf("(1)Enter the number for answer\n(2)you will be asked to use life line if yes press 5 or 6 else press 0\n(3)Money will be awarded after the end of  every level\n");
	printf("\n\n ENTER S TO START THE GAME :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		system("cls");
		return 0;
	}


                    /******************************/
		                   /*LEVEL-ONE-START*/
	                /*****************************/


    
	fptr=fopen("levelOne.txt","w");
	printf("\n\n\t\t\t LEVEL-ONE \t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)\nyour answer:");
	fprintf(fptr,"\nQ1).\n(1)\n(2)\n(3)\n(4)\n");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=firstLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)\nyour answer:");
	fprintf(fptr,"\nQ2)\n(1)\n(2)\n(3)\n(4)\n");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=firstLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)\nyour answer:");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=firstLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)\nyour answer:");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=firstLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
	    fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)\nyour answer:");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=firstLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	fclose(fptr);
	system("cls");



                    /******************************/
		                   /*LEVEL-ONE-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL ONE");
	printf("\n\nYOU ARE BEING AWARDED 1000 Rupees\n\n");
	money+=1000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}


                    /******************************/
		                   /*LEVEL-TWO-START*/
	                /*****************************/


    fptr=fopen("levelTwo.txt","w");
	printf("\n\n\t\t\tLEVEL TWO\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	scanf("%d",&lifeLine);
	
	if(lifeLine==5)
	{
		printf("\nCROWD VOTE"); 
		printf("\n1= \t 2= \t 3= \t 4=");
		used=1;
	}
	else if(lifeLine==6)
	{
		printf("\n50-50");
		printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
		used1=1;
	}
	else
	{
		printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=secondLevel(answer);
	if(answer==1)
	{
		printf("\nCorrect!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	scanf("%d",&lifeLine);
	if(lifeLine==5 && used==0)
	{
		printf("\nCROWD VOTE");
		printf("\n1= \t 2= \t 3= \t 4=");
		used=1;
	}
	else if(lifeLine==6 && used1==0)
	{
		printf("\n50-50");
		printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
		used1=1;
	}
	else if(lifeLine==5 && used==1)
	{
		printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	}
	else if(lifeLine==6 && used1==1)
	{
		printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	}
	else
	{
		printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=secondLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=secondLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
		
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		
		
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=secondLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	answer=secondLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-TWO-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL TWO");
	printf("\n\nYOU ARE BEING AWARDED 1000 Rupees\n\n");
	money+=1000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}


                    /******************************/
		                   /*LEVEL-THREE-START*/
	                /*****************************/


    fptr=fopen("levelThree.txt","w");
	printf("\n\n\t\t\tLEVEL THREE\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	answer=thirdLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=thirdLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=thirdLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=thirdLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");

	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=thirdLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-THREE-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL THREE");
	printf("\n\nYOU ARE BEING AWARDED 2000 Rupees\n\n");
	money+=2000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-FOUR-START*/
	                /*****************************/


    fptr=fopen("levelFour.txt","w");
    printf("\n\n\t\t\tLEVEL FOUR\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fourthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\n\n\t\t\tLEVEL FOUR\t\t\t");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fourthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\n\n\t\t\tLEVEL FOUR\t\t\t");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fourthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\n\n\t\t\tLEVEL FOUR\t\t\t");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fourthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\n\n\t\t\tLEVEL FOUR\t\t\t");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fourthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-FOUR-END*/
	                /*****************************/


 
    printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL FOUR");
	printf("\n\nYOU ARE BEING AWARDED 2000 Rupees\n\n");
	money+=2000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-FIVE-START*/
	                /*****************************/


    fptr=fopen("levelFive.txt","w");
    printf("\n\n\t\t\tLEVEL FIVE\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fifthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");

	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fifthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
	    fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fifthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fifthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");	
        fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=fifthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-FIVE-END*/
	                /*****************************/


 
    printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL FIVE");
	printf("\n\nYOU ARE BEING AWARDED 3000 Rupees\n\n");
	money+=3000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-SIX-START*/
	                /*****************************/


    fptr=fopen("levelSix.txt","w");
    printf("\n\n\t\t\tLEVEL SIX\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");                   
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=sixthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=sixthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=sixthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=sixthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=sixthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-SIX-END*/
	                /*****************************/



	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL SIX");
	printf("\n\nYOU ARE BEING AWARDED 3000 Rupees\n\n");
	money+=3000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-SEVEN-START*/
	                /*****************************/


    fptr=fopen("levelSeven.txt","w");
    printf("\n\n\t\t\tLEVEL SEVEN\t\t\t");
	printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=seventhLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=seventhLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=seventhLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");


	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=seventhLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);

	scanf("%d",&answer);
	answer=seventhLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-SEVEN-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL SEVEN");
	printf("\n\nYOU ARE BEING AWARDED 4000 Rupees\n\n");
	money+=4000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}
 


                    /******************************/
		                   /*LEVEL-EIGHT-START*/
	                /*****************************/


    fptr=fopen("levelEight.txt","w");
    printf("\n\t\t\tLEVEL EIGHT\t\t\t");
    printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=eighthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=eighthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=eighthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");

	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=eighthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=eighthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-EIGHT-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL EIGHT");
	printf("\n\nYOU ARE BEING AWARDED 4000 Rupees\n\n");
	money+=4000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-NINE-START*/
	                /*****************************/


    fptr=fopen("levelNine.txt","w");
    printf("\n\t\t\tLEVEL NINE\t\t\t");
    printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=ninethLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=ninethLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=ninethLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=ninethLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=ninethLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");



                    /******************************/
		                   /*LEVEL-NINE-END*/
	                /*****************************/


 
	printf("\nCONGRATULATIONS! YOU HAVE PASSED LEVEL NINE");
	printf("\n\nYOU ARE BEING AWARDED 5000 Rupees\n\n");
	money+=5000;
	printf("\nIF YOU WANT TO CONTINUE PRESS S :");
	scanf(" %c",&start);
	if(start=='s' || start=='S')
	{
		system("cls");
	}
	else
	{
		printf("\nYOU ARE TAKING %d Rupees WITH YOU",money);
		return 0;
	}



                    /******************************/
		                   /*LEVEL-TEN-START*/
	                /*****************************/


    fptr=fopen("levelTen.txt","w");
    printf("\n\t\t\tLEVEL TEN\t\t\t");
    printf("\nQ1).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ1.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=tenthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ2).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ2.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=tenthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ3).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ3.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=tenthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ4).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ4.\n(1)\n(2)\n(3)\n(4)\n");

	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);

	answer=tenthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");
	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}
	system("cls");
	printf("\nQ5).\n(1)\n(2)\n(3)\n(4)");
	fprintf(fptr,"\n\nQ5.\n(1)\n(2)\n(3)\n(4)\n");
	if((used==0 && used1==0) || (used==1 && used1==0) || (used==0 && used1==1))
	{
		printf("\nIF YOU WANT TO USE LIFE LINE PRESS 5 OR 6 ELSE PRESS 0 :");
	    scanf("%d",&lifeLine);
	    if(lifeLine==5 && used==0)
	    {
		    printf("\nCROWD VOTE");
		    printf("\n1= \t 2= \t 3= \t 4=");
		    used=1;
	    }
	    else if(lifeLine==6 && used1==0)
	    {
		    printf("\n50-50");
	       	printf("\nOPTION " "\t and \t OPTION " " IS WRONG");
	    	used1=1;
	    }
	    else if(lifeLine==5 && used==1)
	    {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	    }
	   else if(lifeLine==6 && used1==1)
	   {
		    printf("\nSORRY! YOU HAVE ALREADY USED THIS LIFE LINE");
	   }
	   else
	   {
	   	    printf("\nLIFE LINE WASTED FOR THIS QUESTION!!");
	   }
	}
	printf("\nYOUR ANSWER :");
	scanf("%d",&answer);
	fprintf(fptr,"\nYOUR ANSWER :%d",answer);
	answer=tenthLevel(answer);
	if(answer==1)
	{
		printf("\nCORRECT!!");
		fprintf(fptr,"\nCORRECT!!");

	}
	else
	{
		printf("\nWRONG ANSWER!!");
		fprintf(fptr,"\nWRONG ANSWER!!");
		return 0;
	}



                    /******************************/
		                   /*LEVEL-TEN-END*/
	                /*****************************/


 
	system("cls");
	printf("\nCONGRATULATIONS! YOU HAVE CLEARED ALL LEVELS");
	printf("\n\nYOU ARE BEING AWARDED 10000 Rupees\n\n");
	money+=10000;
	printf("\n\nYOU WON = %d Rupees",money);
	return 0;
}



                    /******************************/
		                   /*LEVEL-ONE-FUNCTION*/
	                /*****************************/


 
int firstLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==1)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-TWO-FUNCTION*/
	                /*****************************/



int secondLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==2)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-THREE-FUNCTION*/
	                /*****************************/



int thirdLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==3)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-FOUR-FUNCTION*/
	                /*****************************/



int fourthLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==4)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-FIVE-FUNCTION*/
	                /*****************************/



int fifthLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==4)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-SIX-FUNCTION*/
	                /*****************************/



int sixthLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==3)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-SEVEN-FUNCTION*/
	                /*****************************/



int seventhLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==2)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-EIGHT-FUNCTION*/
	                /*****************************/



int eighthLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==1)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-NINE-FUNCTION*/
	                /*****************************/



int ninethLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==2)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}



                    /******************************/
		                   /*LEVEL-TEN-FUNCTION*/
	                /*****************************/



int tenthLevel(int answer)
{
	int result=0;
	while((answer>='a' && answer<='z') || (answer<1 && answer>4))
	{
		printf("\nwrong answer");
		return 0;
	}
	if(answer==4)
	{
		result=1;
	}
	else
	{
		result=0;
	}
}