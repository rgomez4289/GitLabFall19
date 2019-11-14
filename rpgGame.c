//Contributors
//G. Poppe

//Mjkli - room number #3

// Mir Hassan Talpur #17

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include<math.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

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
				 int boss[] = {0,1,0,1,1,1,1};
   char area[9][200] ={
     "You are in a Grave Yard surrounded by cliffs\n",
     "You are standing on a cliff side\nBehind you is a graveyard\nIn front you see a shrine with a fading light\n",
     "You are in a shrine.\nIn the middle you see a small bonfire.\nTo your left you see a wooden door\nForward You see a silver door.\nTo your right you see a black door\n",
     "You are standing in what looks like an old library.\n",
     "You are standing in what looks like an old temple. the ground looks burned from fire and an ominus glow comes from the celing.\n",
     "You are standing on a black island. Surrounded by a lake of fire.\nThe door you came through is encased on light.\n",
     "Black fire seems to spew from the bonfire.\n Filling the room and encompassing the shrine.\nAll Light fades.\nAre you alone?\n",
     "From here adventurer you need to "
   };






   int loc = 0; //used for map placement
   int move; //used for map progression
   int op; // used for in combat options
   int end; //Used to end game
   int wep;
   int health;
   int build;

   int swdmg = 20; //
   int bowdmg = 10; // far range - low dmg
   int sffdmg = 50; // sorsory - far range but 1 move cast time
   int kndmg = 5; //bleed dmg but have to be close

   //wepon ranges
   int wepr;
   int swra = 10;
   int bowra = 30;
   int sffra = 50;
   int knra = 5;


   //Boss Healths
   int zom = 50;


      puts("You awake on the ground in a graveyard.\n");
      puts("You stand up and see 4 weponds at your feet:\n1 - Sword\n2 - Bow\n3 - Knife\n4 - Staff\nWhat do you grab");
      puts("(0) to quit\n");
      int ch;
      scanf("%d",&ch);
      //Wepon choice
      switch(ch)
      {
          case 1:
            wep = swdmg;
            wepr = swra;
            printf("Wepon damage: %d\n",wep);
            printf("Wepon range(units): %d\n",wepr);
            printf("So I see that you have chosen the knight class\n");
            puts("Knights are tough. Lets see if you are tough enough.\n");
            health = 100;
            printf("Health: %d\n",health);
            break;
          case 2:
            wep = bowdmg;
            wepr = bowra;
            printf("Wepon damage: %d\n",wep);
            printf("Wepon range(units): %d\n",wepr);
            printf("So I see that you have chosen the Ranger class\n");
            puts("Rangers are must have quick wits. Lets see if you can think on your feet.\n");
            health = 60;
            printf("Health: %d\n",health);
            break;
          case 3:
            wep = kndmg;
            wepr = kndmg;
            printf("Wepon damage: %d\n",wep);
            printf("Wepon range(units): %d\n",wepr);
            printf("So I see that you have chosen the Theif class\n");
            puts("Theifs rely on getting in close. Can you close the gap?\n");
            puts("Theifs have bleed dmg - every 4 attacks issues 4 x your base damage\n");
            health = 40;
            printf("Health: %d\n",health);
            break;
          case 4:
            wep = sffdmg;
            wepr = sffra;
            printf("Wepon damage: %d\n",wep);
            printf("Wepon range(units): %d\n",wepr);
            printf("So I see that you have chosen the Wizard class\n");
            puts("Wizards are old and wise. Do you have the mind to survive?\n");
            health = 50;
            printf("Health: %d\n",health);
            break;
          case 0:
            puts("I guess that will be the end of it");
            puts("You crawl into an empty grave and die");
            return;
          default:
            wep = 2;
            wepr = 1;
            printf("Wepon damage: %d\n",wep);
            printf("Wepon range(units): %d\n",wepr);
            puts("Empty Handed it will be.");
            puts("You must be a fool....");
            health = 10;
            printf("Health: %d\n",health);
        }

      while(loc != 8){
        printf("%s",area[loc]);
        switch(loc)
        {
            case 0: //Graveyard Site
                puts("1 - Towards cliffs\n");
                scanf("%d",&move);
                if(move == 1){
                  loc++;
                }
                else
                  puts("You are in a canyon!\nOnly can go forward adventurer.");
                break;
            case 1: //Cliffs (Zombie Fight)
                //Zombie fight
                if(boss[loc] == 1)
                {
                  int zomD = 10;
                      puts("\nYou move forward and a zombie holding a knife charges at you");
                      puts("He is 10 units away");
                      puts("What do you do?");
                  while(zom > 0)
                  {
                      printf("Your Health: %d\n",health);
                      printf("Zombie Health: %d\n",zom);
                      printf("Zombie Distance: %d\n",zomD);
                      puts("1 - Attack!\n2 - Dodge left\n3 - Dodge right\n4 - Fall back(Adds 10 units)");
                      scanf("%d",&op);
                      switch (op)
                      {
                        case 1:
                          if(wepr > zomD)
                          {
                            puts("Too close!");
                            puts("The zombie drops his shoulder and you flip over him");
                            puts("Health - 5");
                            health -= 5;
                            puts("You scramble to get up");
                            puts("The zombie turns around and runs at you");
                            zomD = 5;
                            break;
                          }
                          puts("You Attack the zombie!");
                          //Sword Attack
                          if(wepr = 10)
                          {
                            if(zom < 11){
                              puts("You kill the zombie with one final stroke!");
                              puts("");
                            }
                            puts("You slice the zombie as he tumbles over you");
                            puts("Zombie to you - 5 (units)");
                            zomD = 5;
                            puts("Zombie health -10");
                            zom -= wep;
                          }
                          //Knife Attack
                          else if(wepr = 5)
                          {
                            puts("You stab the zombie in the head and flip over him");
                            puts("Zombie to you - 5 (units)");
                            puts("Zombie health -5");
                            if(build == 4)
                            {
                              zom -= wep * 4;
                              build = 0;
                            }
                            else
                            {
                                build++;
                                zom -= wep;
                            }
                          }
                          break;
                        case 2:
                          puts("You dodge left and the zombie stumbles over");
                          puts("Zombie range - 10");
                          break;
                        case 3:
                          puts("You dodge Right and the zombie catches you with with its Knife");
                          puts("Health -5");
                          health -= 5;
                          break;
                        case 4:
                          puts("You fall back from the zombie! - Added 10 Units");
                          zomD += 10;
                          break;
                        default:
                          puts("you freeze and the zombie Stabs you!");
                          health -= 20;
                      }

                  }

                  boss[loc] = 0;
                }
                else
                {
                  move = 0;
                  puts("1 - Go towards Shrine\n2 - Back to GraveYard");
                  scanf("%d",&move);
                  if(move == 1)
                  {
                    loc++;
                  }
                  else if(move == 2)
                  {
                    loc--;
                  }
                  else
                    puts("Error input!");
                }
                break;
            case 2: //Shrine
                if(boss[loc] == 1)
                {

                  
                }


              break;


              default:
                puts("an error has occured!");
                loc = 8;

        }

        }
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
						puts("you find yourself in a room full of dogs");
						puts("you choose:");
						puts("1. pet them all one by one, because you hope they have been trained to wait their turn");
						puts("2. run away, you are deathly allergic to dogs");
						puts("3. dive in, you accept your death by dog snuggles");
						scanf("%d", &choice);
						if (choice ==1)
						{
							puts("\n\nthe dogs start barking as you approach, you run back out the door");
							puts("rejected!");
							break;
						} else if (choice ==2)
						{
							puts("\n\nthe dogs tackle you before you can leave, they sensed your fear!");
							puts("fatality.");
							break;
						} else if (choice ==3) 
						{
							puts("\n\nyou die a quick and easy death by snuggles.");
							puts("R.I.P");
							break;
						} else 
						{
							puts("come on just pick any! \n\n");
						}
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
							puts("you open the door and find an empty space. Suddenly, you heard a voice. It sounded like your friend's mother. 'Please open the door. Your friend and i were in a car accident.. we are badly hurt... please open the door and help us. You tried to open the door again but you saw something on the wall. It said 'TO OPEN THE DOOR AGAIN YOU HAVE TO SPIN THE SPINNING WHEEL AND GET NUMBER 83 .");

							scanf("%d",&choice);
							
							
							int c,n;
							printf("Ten Random Numbers[1,100]\n");
							for (c=1; c<=10; c++)
							{
								n=rand()%100+1;
								printf("%d\n",n);
							}
							return 0;
							
						
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
