//Contributors
//G. Poppe
//
//
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int blackPotionEffect();
void bluePotionWorld();


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
							char drinkChoice[10];
							puts("You open the door and see a table, on top are three potions.");
							puts("You hear the door lock behind you.");
							puts("The first is a blue potion, the second is a cloudy green,"); 
							puts("the third is as black as the night sky");
							puts("Which potion would you like to drink? (blue / green / black)");
							scanf("%s", &drinkChoice);
							if(strcmp(drinkChoice, "blue") == 0)
							{
								puts("");
								puts("You taste pineapples before you fall asleep and can't help but ask why?");
								bluePotionWorld();
								puts("");
								break;
							}
							else if(strcmp(drinkChoice, "green") == 0)
							{
								puts("You notice it tasted like rancid milk");
								puts("You begin to feel nauseous....");
								puts("You have died.");
								exit(0);
								break;
							
							
							}
							else if(strcmp(drinkChoice, "black") == 0)
							{
								puts("An interesting choice!");
								blackPotionEffect();
								puts("");
								break;
							}
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
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
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

int blackPotionEffect()
{
	int poSelect = rand() % 5;

	switch(poSelect)
	{
	
		case 0:
			puts("You awaken outside and are able to select another door, that all seemed pointless.");
			return 0;
			puts("");
			break;
		case 1:
			puts("You die, bad luck I guess.");
			return 1;
			puts("");
			exit(0);
		case 2:
			puts("That tasted like pineapples, why does everything taste like pineapples?");
			puts("The door behind you unlocks and you leave the room...");
			return 2;
			break;
		case 3:
			puts("You awaken to a new world, one full of hope and promise..... or maybe you're still dreaming?");
			puts("The door behind you unlocks and you leave the room...");
			return 3;
			break;
		case 4:
			puts("It was just oddly colored milk...");
			puts("The door behind you unlocks and you leave the room...");
			return 4;
			break;
		
	}

}

void bluePotionWorld()
{

	int i, j, k;
	char poChoice[5];
	printf("You awaken and notice everything is backwards....\n");
	printf("You see two potions on the table, one black as the night sky, and a green one.\n");
	printf("Which would you like to drink? (black / green)\n");
	scanf("%s", &poChoice);
	if(strcmp(poChoice, "green") == 0)
	{
		i = blackPotionEffect();
	}
	if(strcmp(poChoice, "black") == 0)
	{
		puts("You noticed it tasted like rancid milk");
		puts("You begin to feel nauseous....");
		puts("You have died.");
		exit(0);
	}


}

