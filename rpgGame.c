//Contributors
//G. Poppe
// Mir Hassan Talpur #17
// Amado Rodriguez III #21
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;
	srand(time(NULL));

	printf("Please enter your name: "); //Input any number of array inputs
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
				while(choice != 99)
				{

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
							puts("the loop monster!");
							while(choice != 99)
							{
								puts("the loop monster will end its reign of terror if you enter");
								puts("the magic number it seeks");
								scanf("%d", &choice);
								//if (choice == 99) break;
							}
							puts("the loop monster has seized to exist");
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
							puts("you open the door and find a hideous cat. It's wearing a cloak to hide from the bright light.\n");
							puts("It's so ugly you stare amazed, and forget to close the door.");
							puts("Choice 1: Say hello\n.");
							puts("Choice 2: Tell the cat your a dog person.\n");
							puts("Choice 3: Tell the cat your on a search for treasure..\n");
							puts("Choice 4: Just stare... like a weirdo\n");
							puts("What do you do?");
							scanf("%d",&choice);

							if(choice == 1)
							{
								puts("Leave me be, stranger.\n.");
							}
							
							else if(choice == 2)
							{
								puts("About a year ago, I came upon a wishing well and approached it with the few coins I had left. I wished to be born as a great husky in the next life.");
							}
							
							else if(choice == 3)
							{
								puts("Your search ends here, you seem to have searched far and wide. I'll tell you the treasure is hidden further inside. The dungeon is filled with 25 rooms, your search is almost over.");
							}
							
							else if(choice == 4)
							{
								puts("Stop staring you weirdo or you might get turned to stone.");
							}
							break;

								
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
					while(choice != 99)
					{
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
						char userOption[256];
						char red[256]={"red"};
						char blue[256]={"blue"};
						char yellow[256]={"yellow"};
					
						puts("You open the door and find 3 pills. A man wearing all back asks you to take one. There is a red pill, a blue pill, and a yellow pill. Which one do you choose?");
						scanf(" %s",&userOption);
						
						if(strcmp(userOption,red) == 0)
							puts("You chose the red pill!");
						if(strcmp(userOption,blue) == 0)
							puts("You chose the blue pill!");
						if(strcmp(userOption,yellow) == 0)
							puts("You chose the yellow pill!");

						puts("Please enter a room to enter:");
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
							puts("you open the door and find a basketball.");
							puts("All of a sudden Shaq pops out of the dark.");
							puts("He challenges you to a 1 on 1 game.");
							printf("1. You accept his challenge because Shaq aint ready for you.\n");
							printf("2. You decline his challenge because it's SHAQ.\n");
							printf("3. You decide to do something else.\n");
							scanf("%d",&choice);
							if (choice == 1)
							{
								puts("Unfortunately, since Shaq is 7 feet 300 pounds. He dunks on you and says bbq chicken.");
								break;
							}
							else if (choice == 2)
							{
								puts("You tell Shaq you're good. Shaq picks you up and dunks you instead.");
								break;
							}
							else
							{
								puts("You call Charles Barkely. Barkley hypocritically calls Shaq fat. Shaq tells Barkely he has no rings.");
								puts("They continue to argue and you slip past Shaq's insane 1 on 1 challenge. Success.");
								break;
							}
					}
					break;
			}
			case 18:
			{
					while(choice != 99)
					{
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
							puts("you open the door and find ........");
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
