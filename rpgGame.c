//Contributors
//G. Poppe
//Mjkli - room number #3
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
                          if(wepr == 10)
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
                          else if(wepr == 5)
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

