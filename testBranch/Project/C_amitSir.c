#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void about();
void help();
int main()
{

  	typedef struct aisystem
 	{
    	int countr,r,r1,count,i,n;
    	float score;
    	char choice;
    	char playername[20];
  		}z_ai; //z means Zaman AI


     	z_ai zaman;
     	mainhome:
     	system("cls");
    
     	printf("\n\t\t   WELCOME to ZaMaN's c-AI!!!!!!!!!!    ");
     	printf("\n\t\t________________________________________");
     	printf("\n\t\t________________________________________");
     	printf("\n\t\t > Press S to Enter to The Program      ");
     	printf("\n\t\t > Press H for Help                     ");
     	printf("\n\t\t > press A for About Developer          ");
     	printf("\n\t\t > press Q to quit                      "); 
     	printf("\n\t\t________________________________________\n\n");


     	zaman.choice=toupper(getch());
     	if (zaman.choice=='A')
	    {
	    about();
	    goto mainhome;
    	}
     	else if (zaman.choice=='H')
	    {
	    help();getch();
	    goto mainhome; 
	    }
	    else if (zaman.choice=='Q')
	    exit(1);
      	else if(zaman.choice=='S')
      		{
      			system("cls");

      			printf("\n\n\n\n\n\n\n\n\n\n\t\t\tWhat is Your Name:");
      			gets(zaman.playername);

      			system("cls");
      			printf("\n ------------------  Welcome %s to ZaMaN's c-AI--------------------------",zaman.playername);
      			printf("\n\n Here are some tips for:          ");
      			printf("\n -------------------------------------------------------------------------");
      			printf("\n >>Must  Ans two questions to check your Abilities: ");
	  			printf("\n >>Then Ans 20 Questions: ");
      			printf("\n\n\n Press Y  to start the game!\n");
      			printf("\n Press any other key to return to the main menu!");   
      		}
      		if (toupper(getch())=='Y')
	    	{
		    goto home;
        	}
	    	else
		    {
        		goto mainhome;
        		system("cls");
        	}
    		home:
    			system("cls");
    			zaman.count=0;
    			for(zaman.i=1;zaman.i<=2;zaman.i++)
    			{
      				system("cls");
      				zaman.r1=zaman.i;
      				switch(zaman.r1)
		  			{
		    			case 1:
		    			printf("\n\nWho is OUR CSE 122 class Teacher?");
		    			printf("\n\nA.Amit Sir\t\tB. Zaman Sir\n\nC.Kobir Sirt\tD.Raju Sir");
		    			if (toupper(getch())=='A')
			  			{
			    			printf("\n\nCorrect!!!");zaman.count++;
			    			getch();
			    			break;
        				}
		    			else
		       			{
		           			printf("\n\nWrong!!! The correct answer Amit Sir");
		           			getch();
		       				break;
		       			}
 
        				case 2:
		    			printf("\n\n\nWhat is the full meaning of CSE?");
		    			printf("\n\nA.Computer Science and Engineering\t\tB.WWW\n\nC.Daffodil\t\tD.Computer Science");
		    			if (toupper(getch())=='A')
			    		{
            				printf("\n\nCorrect!!!");zaman.count++;
			  				getch();
			  				break;
						}
		    			else
		    			{
           					printf("\n\nWrong!!! The correct answer is A.Computer Science and Engineering");
		      				getch();
		       				break;
        				}
     			 	}
    			}

    	if(zaman.count>=2)
	  	{
      		goto test;
    	}
	  	else
	  	{
	  		system("cls");
	  		printf("\n\nHey Bro! See you not for mind. Relux and Get OUT");
	  		getch();
	  		goto mainhome;
	  	}

    	test:
     	system("cls");
     	printf("\n\n\t*** CONGRATULATION %s Bro! Lets Play ***",zaman.playername);
     	printf("\n\n\n\n\t!Press P to Start the Game!");
     	if(toupper(getch())=='P')
		{
        	goto game;
      	}


    	game:
     	zaman.countr=0;
     	for(zaman.i=1;zaman.i<=20;zaman.i++)
     	{
       		system("cls");
     		zaman.r=zaman.i;
    
     		switch(zaman.r)
			{
				case 1:
				printf("\n\n	--------- is the father of computer.?");
				printf("\n\nA.Herman Hollerith\t\tB. Ada Byron\n\nC.Blaise Pascal\t\tD.Charles Babbage");
				if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       			}
				else
		   		{
			   		printf("\n\nWrong!!! The correct answer is D.Charles Babbage");
       				getch();
		    		goto scoreboard;
		    		break;
       			}

    			case 2:
				printf("\n\n	A desktop computer is also known as__");
				printf("\n\nA.PC\t\tB.Laptop\n\nC. Mainframe\t\tD.Palmtop");
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       			}
				else
		   		{
					printf("\n\nWrong!!! The correct answer is A.PC");
       				getch();
		    		goto scoreboard;
		    		break;
        		}
    			case 3:
				printf("\n\n	CPU is the --------- of computer.");
				printf("\n\nA.Brain\t\tB.Ear\n\nC.Eye\t\tD.All above these");
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
				else
		   		{
					printf("\n\nWrong!!! The correct answer is A.Brain");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 4:
		  		printf("\n\n	Which of the following is not Computer Hardware?");
		  		printf("\n\nA.Mouse\t\tB.Monitor\n\nC.Printer\t\tD.Antivirus");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is D. Antivirus");
       				getch();
		    		goto scoreboard;
		    		break;
        		}
    
    			case 5:
		  		printf("\n\n Which of the following is an example of web browser?");
		  		printf("\n\nA.C++\t\tB.Tally\n\nC.Wide area network\t\tD.None of these");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
				 	break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Wide area network");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 6:
		 		printf("\n\n 	What of these full form of e-mail?");
		  		printf("\n\nA.Electric mail\t\tB.Electromagnetic mail\n\nC.Electronic mail\t\tD.None of these");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Electronic mail");
       				getch();
		    		goto scoreboard;
		    		break;
        		}
    			case 7:
		  		printf("\n\n	Which one of the following is not a computer language?");
		  		printf("\n\nA.BASIC\t\tB. C\n\nC. Fast\t\tD.FORTRAN");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Fast");     			
				    getch();		    	
					goto scoreboard;
		    		break;
        		}


    			case 8:
		  		printf("\n\n	A -------- is a computer connected to two networks.");
		  		printf("\n\nA.Server\t\tB.Gateway\n\nC.Bridge way\t\tD.Link");
		  		if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is A.Server");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 9:
		 		printf("\n\n Who was the inventor and founder of www?");
		  		printf("\n\nA.Russel\t\tB.Bill gates\n\nC.Lee N.Fiyong\t\tD.Tim Berners lee");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is D.Tim Berners lee");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 10:
		  		printf("\n\n How many kilobytes make a megabyte?");
		  		printf("\n\nA.256\t\tB. 512\n\nC. 1024\t\tD.2048");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. 1024");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 11:
		  		printf("\n\n	IBM stands for.");
		  		printf("\n\nA.Indian Business Machine\t\tB.Internal Business Machine\n\nC.International Business Machine\t\tD.Integrated Business Machine");
		  		if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is B. Internal Business Machine");
       				getch();
		   	 		goto scoreboard;
		    		break;
        		}

    			case 12:
		  		printf("\n\n ___ is used in fourth generation computer.");
		  		printf("\n\nA.Transistors\t\tB.Vacuum tubes\n\nC.Microprocessor\t\tD.Integrated circuit");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Microprocessor");
      	 			getch();
		    		goto scoreboard;
		    		break;
        		}


    			case 13:
		  		printf("\n\n A _____ is a software application for retrieving, presenting and traversing information.");
		  		printf("\n\nA.HTTP\t\tB.E-mail\n\nC.Web browser\t\tD.Search engine");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Web browser");
       				getch();
		    		goto scoreboard;
		    		break;
        		}


    			case 14:
		  		printf("\n\n 	An online backing storage system capable of storing larger quantities of data is");
		  		printf("\n\nA.Temporary storage\t\tB.Secondary storage\n\nC.Mass storage\t\tD.Memory");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C. Mass storage");
       				getch();
		    		goto scoreboard;
		    		break;
        		}


    			case 15:
		  		printf("\n\n 	POST stands for");
		  		printf("\n\nA.Power Off System Test\t\tB.Program On System Test\n\nC.Power On System Test\t\tD.Power On Self Test");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{printf("\n\nWrong!!! The correct answer is D. Power On Self Test");
      				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 16:
		  		printf("\n\n	Which is the first mechanical computer?.");
		  		printf("\n\nA.The Babbage Difference Engine\t\tB.Abacus\n\nC.Super computer\t\tD.All above these");
		  		if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is A.The Babbage Difference Engine");
       				getch();
		    		goto scoreboard;
		    		break;
       		 	}
    			case 17:
		  		printf("\n\n	 MS-Word is an example of ___.");
		  		printf("\n\nA. An operating system\t\tB.A processing device\n\nC.Application software \t\tD. An input device ");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is  C.An input device ");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

    			case 18:
		  		printf("\n\n	A computer cannot *boot* if it does not have the ___.");
		  		printf("\n\nA.Compiler\t\tB) Loader \n\nC. Operating system\t\tD.Assembler");
		  		if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is C) Operating system ");
       				getch();
		    		goto scoreboard;
		    		break;
        		}
    			case 19:
		  		printf("\n\nStorage capacity of magnetic disk depends on..	.");
		  		printf("\n\nA.disk pack in disk surface \t\tB.tracks per inch of surface \n\nC.bits per inch of tracks \t\tD.All of the above ");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is D. All of the above ");
       				getch();
		    		goto scoreboard;
		    		break;
        		}

      			case 20:
		  		printf("\n\nWhich key is used in combination with another key to perform a specific task?	 .");
		 		printf("\n\nA.Function\t\tB.Spacebar\n\nC.Arrow\t\tD.Control");
		  		if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");zaman.countr++;
      				getch();
			 		break;
       				getch();
       			}
		  		else
		   		{
					printf("\n\nWrong!!! The correct answer is D. Control");
       				getch();
		    		goto scoreboard;
		    		break;
        		}
    		}
		}
    
    scoreboard:
    {
    	system("cls");
  		printf("\n\n\t*********************Your Score*********************************");
    	printf("\n\n\t******Your Score is %d out of 20******************",zaman.countr);
    	getch();

		seggestion:
		system("cls");
    	if(zaman.countr<8){
        printf("You got %d out of 20!\n", zaman.countr);
        printf("Now, that's not a good grade. But don't let one");
        printf("\nbad grade define your abilities. It's a minor setback.");
        printf("\nHow you choose to overcome it, is what sets you apart from the rest.");
        printf("\nI am going to recommend you a book called \"The C programing language\" by Dennis Ritchie.\n");
        printf("Study this throughly and come back later.\n");
        printf("Hopefully you can do better next time.\n\nGood Luck...");
    	}
    	else if(zaman.countr>7 && zaman.countr<15){
        printf("You got %d out of 10!\n", zaman.countr);
        printf("It is a good mark. But you need to improve.\n");
        printf("I am going to recommend you a book called \"The C programing language\" by Dennis Ritchie.\n");
        printf("Study this throughly and come back later.\n");
        printf("Hopefully you can do better next time.\n\nGood Luck...");
    	}
    	else{
        printf("Excellent! You got %d out of 10!\n", zaman.countr);
        printf("You seems pretty good at C programming.\n");
        printf("You now need to move on to next stage.\n");
        printf("You can now study discrete mathematics or DSA.");
        printf("\n\nGood Luck...");
    	}
    	go:
	  	puts("\n\n Press Y if you want to play Again?");
	  	puts("Press any key if you want to go main menu");
	  	if (toupper(getch())=='Y')
		goto game;
	  	else{
		goto mainhome;
        }
    }



  
}

void help()
	{
      	system("cls");
      	printf("\n ------------------  Welcome to ZaMaN's c-AI--------------------------");
      	printf("\n\n Here are some tips for:          ");
      	printf("\n -------------------------------------------------------------------------");
      	printf("\n >>Must  Ans two questions to check your Abilities: ");
	  	printf("\n >>Then Ans 20 Questions: ");
      	printf("\n Press any other key to return to the main menu!");
      	getch();
    }

void about()
	{
		system("cls");
  		printf("\n\n\t*********************About Developer*********************************");
  		printf("\n\n\t*****ZaMaN's c-AI is Made By ZaMaN4031********");
    	printf("\n\n\t*****www.zamansheikh.com********");
    	printf("\n\n\t*****Thanks********");
    	getch();
    }