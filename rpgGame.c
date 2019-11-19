

//Contributors
//Alejandra Villa
//room #23
//G. Poppe

//eclipse496
//

// aperez

//Mjkli - room number #3

// Mir Hassan Talpur #17
// Amado Rodriguez III #21
// Ivan Khaffaji Room #15



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>



int blackPotionEffect();
void bluePotionWorld();
void rm11EnemyName(char *chPtr);
void rm11Dialog(int temp);
void rm11Battle(int *ptr, char *chPtr, char *nmPtr);

int combo();
void countDown();


void main(void)

{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); 
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);

	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);

		switch(choice)
		{
			case 1:
			{
							
					char answer;
					int num, com;
					puts("You open the door then, close it behind you.");
					puts("You start freaking out because the water is starting to rise.");
					puts("You notice that there is a table with 3 boxes and an envelope.");
					puts("One box has the key to freedom it in.\n");
					puts("Open the envelope, read the question and select the right answer from the choices given.");

					while(choice != 99)
					{
						puts("You have 10 seconds to the read the question.\n");
						puts("1. Which of the following is the correct format to compile a c program?\n");
						puts("A. gcc o rpgGame rpgGame.c\n");
						puts("B. gcc -o rpgGame.c rpgGame.c\n");
						puts("C. gcc -o rpgGame rpgGame.c\n");
						countDown();
						printf("Enter a letter (A, B, C) corresponding to your answer or enter Q tot Quit): ");
						scanf("%s", &answer);

						if(answer == 'A' || answer == 'a')
						{
							com = combo();
							printf("You nedd this number combination to open Box A: %d", com);

							printf("\nYou have 10 seconds to memorize the given combination.");
							countDown();
							printf("\nEnter the given comination to unlock the box now:");
							scanf("%d", &num);

							while(num != com)
							{
								puts("Enter the correct combination before a monster grabs you!\n");

								scanf("%d", &num);
							}
							puts("You entered the correct combination and the box is unlocked.\n");
							puts("Open the box, put your hands inside, and grab what is inside.");
							puts("Ouch! you just got bitten by a snake. Try again before the poison takes effect.\n");
						}
						else if(answer == 'B' || answer == 'b')
						{
							com = combo(x);
							printf("You nned this number combination to open Box B: %d", com);
							printf("\nYou have 10 seconds to memorize the given combination.");
							countDown();
							printf("\nEnter the given combination to unlock the box now:");
							scanf("%d", &num);
							
							while(num != com);
							{
								puts("Enter the correct combination before a monster grabs you!\n");
								scanf("%d", &num);
							}
						puts("You entered the correct combination and the bpoz is unlocked.\n");
						puts("Put your hand in box 2 and grab what is inside.");
						puts("Oh no! Your hand is caught in a funnel-web spiders nest. Make another choice before you become paralyzed.\n");
						}
						else if(answer == 'C' || answer == 'c')
						{
							puts("Put your hand in box 3 and grab what is inside");
							puts("You have chosen wisely! Take the key and escape freedom.");
							puts("Choose another room on your way out.\n");
						}
						else
							return 0;	
				        }
					break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
				{ 
				}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
						char arrCh[30], enemyName[30], *chPtr, *nmPtr;     // array for choices
			int health[5] = {10, 15, 20, 0, 0}, temp=0, *ptr; // elem 0: your health, elem 1: dwarf health, elem 2: enemy health
			
           
                        srand(time(NULL));
                        
                        rm11Dialog(1);
                        printf("- yes\n- no\nEnter your choice: ");
                        scanf("%s", arrCh);
                        temp = strcmp(arrCh, "yes");
                        
                        if(temp == 0)
                        {
                            rm11Dialog(2);
                            chPtr = enemyName;
                            rm11EnemyName(chPtr);
                            printf("\"Over there %s! Its a %s!\",\n", name, chPtr);
                            printf("yells the dwarf!\n");
				ptr = health;
				nmPtr = name;
				rm11Battle(ptr, chPtr, nmPtr);
                            printf("\nTo be continued.\n\n");
                            choice = 99;
                        }
                        
                        else
                        {
                            printf("The old dwarf, looking disappointed, sits back down.\n");
                            printf("\nYou turn around and exit the room.\n");
                            choice = 99;
                        }
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
				int i, x, y, z;
					while(choice != 99)
					{
						puts("you open the door and find 3 boxes, select 1, 2, or 3\n");
						scanf("%d", &choice);
						if(choice == 1)
						{
							srand(time(NULL));
							puts("You have chosen box 1, inside you find 2 six sided dice.");
							puts("If you roll a 7, you lose. Lets roll...");
							x = 1 + (rand()%6);
							y = 1 + (rand()%6);
							z = x + y;
							printf("Die 1: %d\n", x);
							printf("Die 2: %d\n", y);
							printf("You rolled a %d\n", z);
							if(z > 7)
							{
								puts("You lose, goodbye!\n");
								break;

							}
							else
							{
								puts("Live to roll again.\n");
				

							}
						}
						if(choice == 2)
						{
							puts("You have chosen box 2, inside you find a basketball and a hoop.\n");
							puts("Lets shoot!\n");
							srand(time(NULL));
							x = 1 + (rand()%100);
							if(x > 40)
							{
								printf("Shot percentage: %d\n", x);
								printf("You made the shot, nice\n");
							}
							else
							{
								printf("Shot percentage: %d\n", x);
								puts("Miss\n");
								break;
							}


						}
						if(choice == 3)
						{
							
						}



					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18:			
			{
				
				
				
						int choice18, i, health =100, attack=0;
						if(choice18 == 1 || choice18 == 2)
						{
							puts("\nThis room is empty\n");
							break;
						}
						puts("You open the door and find two more doors\n");
						puts("One door to the right and one door to the left ... a sign reads enter one of these doors\n");
						puts("Enter 1 to enter the right door or enter 2 to enter left door/n");
						scanf("%d" ,&choice18);
	
						if(choice18 == 1)//blue = 1, red = 2
						{
							puts("you found a chest, you opened the chest and found a sword\n");
							puts("You picked up the sword, congrats you now yield a sword!\n");
						}
						else if(choice18 ==2)
						{
							puts("you found a ray gun, congrats!\n");
							puts("you now wield a ray gun\n");

						}
						puts("Suddenly a dragon appears out of no where.... get ready to fight\n");
						puts("The dragon has 100 health\n");
						puts("Press 5 followed by enter to deal damage to the dragon\n");
						scanf("%d", &attack);
						while(health > 0)
						{
							health-=20;
							printf("You attacked the dragon. the dragon now has %d health\n", health);
							if(health == 0)
							{
								puts("you killed the dragon.... ");
								break;
							}


						
							if(attack != 5)
							{
								puts("you ran away");
								break;
							}
							puts("Press 5 to attack again or any other num to run");
							scanf("%d", &attack);
						}	
				break;
				

			
					
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					puts("you open the door and find a skeleton in a suit.");
					printf("It invites you to play a game of blackjack. ");
					printf("If you win, it will grant you a wish, but if you lose ");
					printf("you must stay trapped in this room as its card playing ");
					puts("buddy forever.");
					puts("Will you play?");
					puts("1. Yes.");
					puts("2. No.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						/*int cont = 0;
						int c1;
						int c2;
						*/
						//while(cont != 1)
						//{
							puts("The Skeleton laughs and deals each of you 2 cards");
							/*c1 = ((1 + rand()) % 13);
							c2 = ((1 + rand()) % 13);
							if(c1 > 10)
							{
								puts
							*/
							printf("Before you can even look at your cards ");
							printf("the skeleton reveals a Blackjack. ");
							puts("you should've known it was a cheater");
						//}
					}
					else if(choice == 2)
					{
						printf("Seeing as it isn't even Halloween season ");
						printf("you decide not to humor The Skeleton. ");
						puts("You exit the room.");
					}
						
					break;
			}
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find another door");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;




			}
		}	
	}
    }


    

int combo()
{
	int n;
	srand(time(NULL));
	return n = (rand() % (1000-0+1)) + 0;
}

void countDown()
{
	int c, d;

	for(c = 1; c <= 32767; c++)
	{
		for(d = 1; d <= 32767; d++)
		{
		}
	}
			
	printf("\nTime's Out!\n");
}


void rm11EnemyName(char *chPtr)
{
    FILE *rptr;
    
    char chTemp[30];
    
    int itr=0, temp=0;
    
    if((rptr = fopen("enemynames.txt", "r")) == NULL)
    {
        
        printf("Error: File could not be opened.\n\n");
        strcpy(chPtr, "Angry Wild-Beast");
    }
    
    else
    {
        // scans for the desciptive verb of the enemy in the file
        temp = 1 + (rand() % 30);
        fscanf(rptr, "%s", chTemp);
        while(itr != temp)
        {
            itr++;
            fscanf(rptr, "%s", chTemp);
        }
        
        strcpy(chPtr, chTemp);
        
        // the words lists are separated by the digit 2
        while(!isdigit(chTemp[0]))
        {
            fscanf(rptr, "%s", chTemp);
        }
        
        // scans for the name of the enemy in the file
        itr=0;
        temp = 1 + (rand() % 19);
        
        fscanf(rptr, "%s", chTemp);
        while(itr != temp)
        {
            fscanf(rptr, "%s", chTemp);
            itr++;
        }
        
        strcat(chPtr, chTemp);
    }

	fclose(rptr);
}

void rm11Dialog(int temp)
{
    if(temp == 1)
    {
        printf("\nYou open the door and find yourself at the edge of a forest.\n");
        printf("Sitting on an old fallen log is an old, grey bearded dwarf\n");
        printf("smoking his pipe.\n");
        printf("The dwarf gets up and greets you.\n");
        printf("\"Hello there! I am in need of help crossing this forest!\"\n");
        printf("\"What do you say, will you help me\", asks the old dwarf.\n");
        printf("------------------------------------------------------------\n\n");
    }
    
    else if(temp == 2)
    {
        printf("\n\"Excellent! Let us depart then before sunsut!\"\n");
        printf("The old dwarf and you begin your journey into the\n");
        printf("forest. The forest is quiet, errie, and unsettling but the\n");
        printf("dwarf is calm. He recounts to you old stories of his past\n");
        printf("but is interrupted by the howl of some beast!\n");
        printf("\"Quiet..\" says the old dwarf.. \n");
        printf("------------------------------------------------------------\n\n");
    }

}

void rm11Battle(int *ptr, char *chPtr, char *nmPtr)
{
	printf("\nThe old dwarf and you have now entered into a battle!\n");
	printf("------------------------------------------------------\n\n");
	printf("%s's health: %d ",nmPtr, *(ptr+0));
	printf("|| Old Dwarf's health: %d\n\n", *(ptr+1));
	printf("%s's health: %d\n", chPtr, *(ptr+2));
	printf("------------------------------------------------------\n\n");

}
