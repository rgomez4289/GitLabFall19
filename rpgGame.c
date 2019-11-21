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
#include<math.h>

int goblin(int choice);

int blackPotionEffect();
void bluePotionWorld();

int randomAscii(void);
void fillSumArray(int* ptr, int size);
void printSumArray(int* ptr, int size);

int randGen(int topNum);

void blackJack(int *cards);

// enemynames.txt needed to run functions
void rm11EnemyName(char *enPtr);
void rm11Dialog(int temp, char *enPtr, char *nmPtr);
void rm11Battle(int *ptr, char *enPtr, char *nmPtr);

void rollDiceRoom17(int *arr); //allocates array with random numbers using a pointer to array (room 17)


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
							int num;
							int arr[5];
							int* ptr1 = arr;
							num = randomAscii();
							fillSumArray(ptr1, 5);

							puts("you open the door and find ........");
							puts("the loop monster!");
							while(choice != num)
							{
								puts("the loop monster will end its reign of terror if you enter");
								puts("the magic number it seeks");
								printf("hint: the ascii value for %c\n", num);
								scanf("%d", &choice);
							}
							puts("the loop monster has seized to exist");
							puts("but a new evil lurks ahead...");
							puts("the array monster!");
							printSumArray(ptr1, 5);
							return;
					}
					break;
			}

case 6:
{
	while(choice != 99)
	{
		puts("You walk into a warehouse, and inside is large dark and damp  mechanical room");
		puts("You wander further in and notice it must have been abandoned for years");
		puts("All of a sudden,a young man wearing a coat leaps down from a catwalk above");
		puts("Hello there - said the man");
		puts("How do you respond?");
	 	puts("1. Respond with Hello");
		puts("2. Ignore him and walk away");
		puts("3. Respond with General Kenobi");
		scanf("%d", &choice);
		if(choice ==1)
		{
			puts("You respond with Hello, sit down and he brings out a small kettle from his bag and brews tea for two");
			puts("Congradualations on making a friend");
			puts("Achievement unlocked ... The happy ending!");
			break;
		}
		else if(choice ==2)
		{
			puts("you ignored the man and attempt to walk away out of the building. He tells you to freeze and pulls out a broom stick. As you stare at him confused, he charges towards you and knocks you out... To be continuted....");
			break;
		}
		else if (choice ==3)
		{
		puts("You respond with 'General Kenobi'. He stares at you and says 'how do you know that name?' He takes out a broomstick and is ready to attack, when you are able to dodge his attack and run towards a wall. There is a large metal door, you run in and slam it shut behind you and it locks, keeping you safe... for now.");
			break;
		}
		else
		{
		puts("You have choices, this isn't one of them.");
		}
	}
break;
}
			case 7:
			{
					while(choice != 99)
					{
						puts("You open the door and close it behind you");
                                                puts("You appear to be standing on a small patch of land in the middle of a small lake.");
                                                puts("Then, your body feels light, and you slowly begin floating in mid air");
                                                puts("You then notice that you are beginning to float upwards, and you feel as if you should be afraid, but are instead curious as you see three sources of light above you");
                                                puts("The three sources of light appear to be gateways to alternate dimensions, so you must wade through the air to put yourself in a position to enter the dimension of your choosing");
                                                puts("The three choices are 1) light 2) grey 3) dark");
                                                scanf("%d", &x);

                                                if(x == 1)
                                                 {
                                                         puts("You make it through the light portal and land face first in a field of grass.");
                                                         puts("As you look up, you are in awe of the environment around you. You see green, grassy, plains and hills extending out to the horizon in every possibile direction you look");
                                                         puts("You begin flying, feeling the slight breeze in your face, and looking down at all of the waterfalls and lakes within all of the green hills and plains.");
							 puts("You are taking the entire scene in, and as you look out to the horizon you see the sun shining very brightly, which temporarily distorts your vision");
                                                         puts("Once your vision clears up, you notice that you are rapidly falling through the sky, and brace for impact as you are about to land in a lake."); 
                                                         puts("The end");

                                                         break;
                                                 }

                                                 else if(x == 2)
                                                 {
                                                         puts("You make it through the grey portal and immediately feel the cold weather.");
							 puts("You look around you, and all you see is mountains and hills completely covered in snow");
                                                         puts("You begin flying through this cold, white, mysterious terrain, then you notice that the snow is falling a lot quicker");
                                                         puts("The snow makes it so hard to see that you decide to fly all the way up but lose control of your flying and become trapped in a snowstorm");
                                                         puts("The end");          

                                                         break; 
                                                 }

                                                 else if(x == 3)
                                                 {
							puts("You make it through the dark portal and fall face first into a field of white grass");
                                                        puts("You look up and notice the sunset, and white, grassy, plains and hills that extend out to the horizon in every direction you look");
                                                        puts("You begin flying, taking in the scenery, and feeling the rain in your face, when suddenly you see a black void destroy everything behind you.");
                                                        puts("The end");


        
                                                         break;
                                                 }
				        	 else
                                                 {
                                                         puts("Wrong choice");
                                                 }

					



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

							puts("you open the door and find a unicorn eating gold bars");
							printf("Save the gold bars? Enter 1 for yes. 2 for no.");
							scanf("%d",&choice);


							if(choice==1)
							{
								puts("As you try to pick up the gold bar a goblin comes out and attacks you");
								puts("You pull out your sword.");
								printf("Try to attack or run away? Enter 1 to fight. 2 to run ");
								scanf("%d",&choice);
								goblin(choice);
							//	printf("%d\n",choice);
								choice=99;

							}
							else
							{
								printf("You decided not to pick up the gold. You leave and the goblin goes back into hiding\n");
								printf("You decide to walk past the unicorn and come to a pathway labled 'Pathway A' and 'Pathway B'\n");

								//goblin(choice);
								choice=99;
							}
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
						char arrCh[30], enemyName[30], *enPtr, *nmPtr;
                                int health[5] = {10, 15, 20, 0, 0}, temp=0, *ptr;
                                srand(time(NULL));
                                ptr = health;
                                nmPtr = name;
                                enPtr = enemyName;

                                rm11Dialog(1, enPtr, nmPtr);
                                scanf("%s", arrCh);

                                if(strcmp(arrCh, "yes") == 0)
                                {
                                    rm11EnemyName(enPtr);
                                    rm11Dialog(2, enPtr, nmPtr);
                                    rm11Battle(ptr, enPtr, nmPtr);
                                    choice = 99;
                                }

                                else
                                {
                                    rm11Dialog(0, enPtr, nmPtr);
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
			case 13: // this is mine
			{
				while(choice != 99)
				{
					puts("You open the door and enter, closing it shut behind you. The door seals airtight, so hopefully no water will leak...");
					puts("There is a single lightbulb hanging from the ceiling. Underneath it is a yellow sphere...");
					puts("The dimly lit sphere floats in place, slowly bobbing up and down...");
					puts("You cannot see anything else in the room.");
					puts("What will you do?");
					puts("1. Inspect the sphere.");
					puts("2. Open the door.");
					scanf("%d",&choice);

					if(choice == 1)
					{
						puts("The sphere turns slowly, revealing a an emoji-esque face...");
						puts("Its eyes widen, pupils dilated.");
						puts("A human-like hand uncloaks itself from the darkness, holding a gun...");
						puts("You hear the gun click, and the sphere opens its mouth, revealing 2 rows of large molars");
						puts("The gun's barrel is fixated on you, and before you have time to preemptively act...");
						puts("The words sound from the its mouth, reverberating through the room, ringing clear through your eardrums.");
						puts("\n=-=-= \" V I B E  C H E C K \" =-=-=\n");
						puts("What do you do?");
						puts("1. Open the door.");
						puts("2. Laugh nervously.");
						puts("3. Laugh wholeheartedly.");
						puts("4. Sob in terror.");
						puts("5. Growl in anger.");
						scanf("%d",&choice);
						if (choice == 1)
						{
							puts("The water from outside rushes in, filling the room!");
							puts("With your last breath you can see the emoji-sphere shaking its head in disappointment...");
							choice = 99;
						}
						else if (choice == 2)
						{
							puts("\n=-=-= VIBE CHECK FAILED =-=-=\n");
							puts("The last thing you hear is a single gunfire...");
							choice = 99;
						}
						else if (choice == 3)
						{
							puts("The gun lowers, as does the emoji-sphere's head, in affirmation.");
							puts("The lightbulb quickly glows increasingly brighter, and in a flash...");
							puts("the room is fully lit, and empty, save for a door at the other end.");
							puts("You enter the door.");
						}
						else if (choice == 4)
						{
							puts("\n=-=-= VIBE CHECK FAILED =-=-=\n");
							puts("The last thing you hear is a single gunfire...");
							choice = 99;
						}
						else if (choice == 5)
						{
							puts("\n=-=-= VIBE CHECK FAILED =-=-=\n");
							puts("The last thing you hear is a single gunfire...");
							choice = 99;
						}
						choice = 99;
					}
					else if (choice == 2)
					{
						puts("The water from outside rushes in, filling the room!");
						puts("After a brief moment of unconsciousness, you wake up in the previous room");
						choice = 99;
					}
					// PART 2
					int gear1 = 0;
					int gear2 = 0;
					puts("You enter another room, nearly identical to the previous one.");
					puts("There is a table with various items, clearly made for self-defense.");
					puts("There is also another door at the other end of the room, emanating an ominous VIBE");
					puts("You had best prepare yourself. On the table are: ");
					puts("1. A large, heavy shield. (50\% damage reduction, speed penalty)");
					puts("2. A smaller, more mobile buckler. (25\% damage reduction)");
					puts("3. A magic wand, with an embedded red crystal. (enables fire magic)");
					puts("4. A six-inch slim dagger (enables second action after attacking)");
					puts("5. A poleaxe-like naginata (capable of area attacks)");

					while(gear1 < 1 || gear1 > 5)
					{
						puts("Seems like you can hold two of these five items. For your first item, you choose... (1 - 5)");
						scanf("%d", &gear1);
						if (gear1 < 1 || gear1 > 5)
						{
							puts("Invalid choice.");
						}
					}
					while(gear2 < 1 || gear2 > 5)
					{
						puts("And for your second choice... (each combination is unique)");
						scanf("%d", &gear2);
						if (gear1 == gear2)
						{
							puts("You can't choose the same item twice!");
							gear2 = 0;
						}
					}
					int gearCombo = gear1 * 10 + gear2;
					if (gearCombo == 12 || gearCombo == 21)
					{
						puts("Two shields? You'll make do somehow.");
						puts("(Shield Showdown unlocked)");
						gearCombo = 12;
					}
					else if (gearCombo == 13 || gearCombo == 31)
					{
						puts("Mage tank, an unorthodox yet versatile match.");
						puts("(Self-Immolation unlocked)");
						gearCombo = 13;
					}
					else if (gearCombo == 14 || gearCombo == 41)
					{
						puts("The weight of the shield is offset by the dagger.");
						puts("(Counter-Parry unlocked)");
						gearCombo = 14;
					}
					else if (gearCombo == 15 || gearCombo == 51)
					{
						puts("The combination of heavy gear gives you confidence.");
						puts("(Steadfast Swing unlocked)");
						gearCombo = 15;
					}
					else if (gearCombo == 23 || gearCombo == 32)
					{
						puts("You notice your buckler can sustain the flames from your wand.");
						puts("(Flaming Boomerang unlocked)");
						gearCombo = 23;
					}
					else if (gearCombo == 24 || gearCombo == 42)
					{
						puts("The combination of light gear somehow makes you feel even faster.");
						puts("(Rapid Rushdown unlocked)");
						gearCombo == 24;
					}
					else if (gearCombo == 25 || gearCombo == 52)
					{
					}



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
						char userOption[256];
						char red[4]={"red"};
						char blue[5]={"blue"};
						char yellow[7]={"yellow"};
						char stay[5]={"stay"};
						char yes[4]={"yes"};
						srand(time(NULL));

						puts("You open the door and find 3 pills sitting on a tray. A man wearing all black asks you to take one. There is a red pill, a blue pill, and a yellow pill. Which one do you choose?");
						scanf(" %s",&userOption);

						if(strcmp(userOption,red) == 0)
						{
							puts("You chose the red pill!");
							puts("Whoa! Whats going on?? All of a sudden, the bookcase in the back of the room swings wide open! The man wearing black says, \"Any choice you want, the decision is yours and yours only.\" Do you enter the opened room or stay where you are? (Enter \"stay\" or \"go\")");
							scanf(" %s",&userOption);
							if(strcmp(userOption,stay)==0)
							{
								puts("Why are you scared? You should just go into the room anyways. Are you sure you want to stay? (Enter \"yes\" or \"no\")");
								scanf(" %s",&userOption);
								if(strcmp(userOption,yes)==0)
								{
									printf("Fine. You're no fun. Game over, %s.\n",name);
									choice = 99;
									break;
								}
								else
								{
									puts("Wow! You changed your mind and entered the hidden room! What happens next?");
									puts("A wizard appears in front of you immediately as soon as you enter the hidden room. He asks you to pick a random number between 1 and 10.");
									scanf(" %s",&userOption);
									int i,j;
									i = atoi(userOption);
									j = randGen(10);
									if(i==j)
										printf("You guessed right! The number was %d!\n",j);
									else
									{
										printf("Awww man! Better luck next time. The secret number was %d.\n",j);
										choice = 99;
										break;
									}
								}
							}
							else
							{
								puts("A wizard appears in front of you immediately as soon as you enter the hidden room. He asks you to pick a random number between 1 and 10.");
								scanf(" %s",&userOption);
								int i,j;
								i = atoi(userOption);
								j = randGen(10);
								if(i==j)
								{
									printf("You guessed right! The number was %d!\n",j);
									choice = 99;
								}
								else
								{
									printf("Awww man! Better luck next time. The secret number was %d. Game over, %s.\n",j,name);
									choice = 99;
									break;
								}
							}

						}
						if(strcmp(userOption,blue) == 0)
						{
							puts("You chose the blue pill!");
							printf("All of a sudden, the floor starts shifting. A huge crack starts forming just a few feet from where you are. You try your hardest to outrun the crack, but your shoes get caught. You fall into the bottomless pit of despair and are never heard from again. Game over, %s.\n",name);
							choice = 99;
							break;
						}
						if(strcmp(userOption,yellow) == 0)
						{
							puts("You chose the yellow pill!");
							puts("WHOA! What on Earth is going on? All of a sudden, you are transported to a random room!");
							choice  = randGen(25);
							break;
						}
						if(strcmp(userOption,"99") == 0)
							choice = 99;
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
			  // used input output (lab 2)
			  // used conditionals (lab 3)
			  // used functions (lab 4)
			  // used loops (lab 5)
			  // used random (lab 6)
			  // used arrays (lab 7)
			  // used pointers (lab 8)
			  // used string manipulation (lab 9)
			  // used files (lab 10)
			    while(choice != 99)
			    {
			        puts("\nYou open the door and find a basketball.");
			        puts("\nAll of a sudden Shaq pops out of the dark.");
			        puts("\nHe challenges you to a 1 on 1 game.");
			        printf("1. You accept his challenge because Shaq aint ready for you.\n");
			        printf("2. You decline his challenge because it's SHAQ.\n");
			        printf("3. You decide to do something else.\n");
			        scanf("%d",&choice);
			        if (choice == 1)
			        {
			          printf("\nUnfortunately, since Shaq is 7 feet 300 pounds. He dunks on you, licks his fingers and says 'bbq chicken'\n\n");
			          break;
			        }
			        else if (choice == 2)
			        {
			          puts("\nYou tell Shaq you're good. Shaq then challenges you to a dice roll game.");
			          puts("The rules are simple. We roll a 12 sided die. If your result is lower than Shaq's you will lose!");
			          puts("\nLet the games begin!!\n");

			          int diceResult[2] = {0};
			          int *pointerDiceResult;

			          pointerDiceResult = diceResult;
			          rollDiceRoom17(pointerDiceResult);

			          printf("\nYou roll a %d!\n",diceResult[0]);
			          printf("\nShaq rolls a %d!\n",diceResult[1]);

			          if (diceResult[0] > diceResult[1])
			          {
			            printf("\nHaHa in your face Shaq. I'm outta here!!\n\n");
			          }
			          else if (diceResult[0] == diceResult[1])
			          {
			            printf("\nIt's a tie!! We did not calculate for this outcome. Glitch in the matrix. You're now free of the simulation. Success?\n\n");
			          }
			          else
			          {
			            printf("\nShaq wins and starts to dance in your face. You have lost. You must now watch this dance for eternity!\n\n");
			          }
			          break;
			        }
			        else
			        {
			          char insult[20];
			          FILE *filePtr;
			          int numInsults = 5;

			          filePtr = fopen("insults.txt","w");

			          puts("\nYou call Charles Barkely. Barkley hypocritically calls Shaq fat. Shaq tells Barkely he has no rings.");
			          puts("Barkley needs your help to call Shaq 5 names!");

			          while (numInsults > 0)
			          {
			            printf("\nWhat do you want to call Shaq?\n");
			            scanf("%s",insult);
			            fprintf(filePtr,"%s\n",insult);
			            numInsults--;
			          }

			          puts("\nBarkely writes all these insults down in his file notebook.");
			          fclose(filePtr);

			          filePtr = fopen("insults.txt","r");
			          rewind(filePtr);

			          puts("\nBarkely picks a random insult and YELLS it at Shaq!!");

			          char barkleyChoice[20];
			          fscanf(filePtr,"%19s",barkleyChoice);

			          int j;

			          for (j = 0; j < 20; j++)
			          {
			            barkleyChoice[j] = toupper(barkleyChoice[j]);
			          }

			          printf("Barkely calls Shaq a %s!!\n",barkleyChoice);
			          puts("Shaq is mortified!! How could Barkley be this mean! He retaliates by calling Barkley a donut shaped human.");
			          printf("The two continue to argue and you slip past Shaq unnoticed. Success!!\n\n");
			          break;
			        }
			    }
			    break;
			}
			case 18:
			{



						int choice18, i, level = 1,  health =100, attack=0;
						if(choice18 == 1 || choice18 == 2)
						{
							puts("\nThis room is empty\n");
							break;
						}
						puts("You open the door and find two more doors\n");
						puts("One door to the right and one door to the left ... a sign reads enter one of these doors\n");
						puts("Enter 1 to enter the right door or enter 2 to enter left door\n");
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
								puts("\nyou killed the dragon.... \n");
								level++;
								puts("\nYou move on to the next level\n");
								break;
								if(level !=1)
									puts("\nThe dragon falls and a door appears, you walk towards the door, you open it...\n");
							}

							if(attack != 5)
							{
								puts("you ran away");
								break;
							}

							puts("Press 5 to attack again or any other num to run\n");
							scanf("%d", &attack);
						}
						if(level == 1)
							puts("\nThe dragon falls and a door appears, you open it...\n");

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
							return;


					}
					break;
			}
			case 20:
			{
					while(choice != 99)
					{

							FILE *wRiter;
                                                        FILE *reAder;
                                                        puts("you open the door and find a rather normal room which has bed wiht blue covers and a broken down wardrobe");
                                                        puts("Around the room there is also a strange substance dripping from the ceiling");
                                                        puts("Do you \n(1)walk towards the bed \n(2)Examine the wardrobe \n(3)walkback out");
                                                        scanf("%d",&choice);
                                                        if (choice ==1)
                                                        {
                                                                puts("Its a rather plain bed with nothing there");
                                                                puts("It looks rather comfortable so you decide to take a nap");
                                                                puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("zzzzzz");puts("zzzzzz");
                                                                puts("You awaken and notice somthing in your pocket");
                                                                wRiter = fopen("Looking_for_help.txt","w");
                                                                fprintf(wRiter, "Dear %s,\n",name);
                                                                fprintf(wRiter,"My name is Abetha Winson I'm soory im bit shy so decided to write you this letter,\n The problem is that I have been stuck whitin this room.\n");
                                                                fprintf(wRiter,"I saw you sleeping on the bed and I was wondering if you may lend me a hand.\n");
                                                                fprintf(wRiter,"It seems as though I have become invisable but that is not important right now.\n");
                                                                fprintf(wRiter,"What I want is number to one be seen again and number two is to escape this retched room.\n");
                                                                fprintf(wRiter,"So what do you say will you help?\n");
                                                                choice =99;
                                                        }
                                                        else if(choice == 2)
                                                        {
                                                               puts("There seems to be somthing odd about this wardrobe");
                                                               puts("you step inside and...");
                                                               puts("...\n...\n...\n...\n...\n...");
                                                               puts("find nothing but an empty wardrobe");
                                                               choice =99;
							}
							else if(choice ==3)
							{
								puts("You go to open the door but find that at the other side of the door has been walled off");
								choice =99;
							}
							else
							{
								puts("You continue standing at the entrance contemplating life");
								choice =99;
							}

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

					int timesPlayed = 0;

					if(choice == 1)
					{
						int cont = 0;
            int cards[2] = {};
						
						while(cont != 1)
						{
							cards[0] = (1 + (rand() % 13));
							int *ptr = cards;
							blackJack(ptr);
							timesPlayed++;
							
							printf("Before you can even decide on what to do with ");
							printf("your hand, The Skeleton reveals a Blackjack. ");
							puts("you should've known it was a cheater");
							printf("The Skeleton says it will give you another ");
							puts("chance.");
							puts("will you play again?");
							puts("1. Yes");
							puts("2. No");
							scanf("%d", &choice);

							if(choice == 2)
							{
								//name to caps
								char str[256] = {};
								int i = 0;
								while(name[i])
								{
									str[i] = toupper(name[i]);
									i++;
								}
								printf("You've accepted your fate, %s, and ", str);
								puts("you are trapped forever.");
								cont = 1;
							}
						}
						FILE *wptr = fopen("timesPlayed.txt", "w");
						fprintf(wptr, "Played BlackJack %d times", timesPlayed);
						puts("Number of times played written to file timesPlayed.txt");
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
							puts("you open the door and find ........\n");
							puts("Mike Tyson is looking at you menacingly\n");
							puts("suddenly he bites you ear off\n");
							puts("he wants to go 20 rounds with you pretty much beat you to death, which one do you choose?\n");
							printf("1. Accept the challenge and fight him\n");
							printf("2. Run and scream like a girl\n");
							printf("3. Get punched\n");
							scanf("%d",&choice);

							if (choice == 1)
							{
								puts("Goodluck buddy hope you make it alive");
								break;
							}
								
							else if (choice == 2)
							{
								puts("Good choice, run as fast as you can!");
								break;
							}
							else 
							{
								puts("Look on the bright side, you can attempt a lawsuit and get paid");
								break;
							}

							
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

int goblin(int choice)
{
	if(choice==1)
	{
		printf("'So you have chosen to fight me'\n");

	}
	else
	{
		printf("Oh no, the goblin has stabbed you!\n");

	}
	return choice;
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

int randGen(int topNum)
{
	int x=0;
	int maxNum = topNum;
	x = 1 + (rand() % maxNum);
	return x;
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


void rm11EnemyName(char *enPtr)
{
    FILE *rptr;

    char chTemp[30];

    int itr=0, temp=0;

    if((rptr = fopen("enemynames.txt", "r")) == NULL)
    {

        printf("Error: File could not be opened.\n\n");
        strcpy(enPtr, "Angry Wild-Beast");
    }

    else
    {
        // scans for the descriptive verb of the enemy in the file
        temp = 1 + (rand() % 30);
        fscanf(rptr, "%s", chTemp);
        while(itr != temp)
        {
            itr++;
            fscanf(rptr, "%s", chTemp);
        }

        strcpy(enPtr, chTemp);

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

        strcat(enPtr, chTemp);
    }

	fclose(rptr);
}

void rm11Dialog(int temp, char *enPtr, char *nmPtr)
{
    if(temp == 0)
    {
        printf("The old dwarf, looking disappointed, sits back down.\n");
        printf("\nYou turn around and exit the room.\n");
    }

    else if(temp == 1)
    {
        printf("\nYou open the door and find yourself at the edge of a forest.\n");
        printf("Sitting on an old fallen log is an old, grey bearded dwarf\n");
        printf("smoking his pipe.\n");
        printf("The dwarf gets up and greets you.\n");
        printf("\"Hello there! I am in need of help crossing this forest!\"\n");
        printf("\"What do you say, will you help me\", asks the old dwarf.\n");
        printf("------------------------------------------------------------\n\n");
        printf("- yes\n- no\nEnter your choice: ");
    }

    else if(temp == 2)
    {
        printf("\n\"Excellent! Let us depart then before sunset!\"\n");
        printf("The old dwarf and you begin your journey into the\n");
        printf("forest. The forest is quiet, eerie, and unsettling but the\n");
        printf("dwarf is calm. He recounts to you old stories of his past\n");
        printf("but is interrupted by the howl of some beast!\n");
        printf("\"Quiet..\" says the old dwarf.. \n");
        printf("------------------------------------------------------------\n\n");
        printf("\"Over there %s! Its a %s!\",\n", nmPtr, enPtr);
        printf("yells the dwarf!\n");
    }

}

void rm11Battle(int *ptr, char *enPtr, char *nmPtr)
{
    int win=0, die=0;
    
    char ch=0;
    
    // elem 0: your health, elem 1: dwarf health, elem 2: enemy health
    printf("\nThe old dwarf and you have now entered into a battle!\n");
    
    // win is 1, lose is 2
    while(win <=0 || win > 3)
    {
        printf("\n------------------------------------------------------\n");
        printf("%s's health: %d\t",nmPtr, *(ptr+0));
        printf("||\tOld Dwarfs health: %d\n", *(ptr+1));
        printf("------------------------------------------------------\n");
        printf("%s's health: %d\n", enPtr, *(ptr+2));
        printf("------------------------------------------------------\n\n");
        
        printf("OPTIONS\n");
        printf("------------------\n");
        printf("- Sword Attack (s)\n");
        printf("- Dwarf Attack (d)\n");
        printf("Enter the letter next to the choice: ");
        scanf(" %c", &ch);
        
        if(ch == 's' || ch == 'S')
        {
            die = (rand() % 6) + 1;
            
            printf("\nYou thrust you sword towards the %s\n", enPtr);
            
            if(die == 1)
            {
                printf("but you are short and only scrape it!\n");
                printf("The %s counter and hits you!\n", enPtr);
                *(ptr+0) -= 1;
                *(ptr+2) -= 1;
                
            }
            
            else if(die == 2)
            {            
                printf("and your sword makes solid contact with it!\n");
                printf("The %s is slightly damaged\n", enPtr);
                *(ptr+2) -= 2;
            }
            
            else if(die == 3)
            {
                printf("and your sword draws blood from it!\n");
                printf("The %s has taken damage.\n", enPtr);
                *(ptr+2) -= 3;
            }
            
            else if(die == 4)
            {
                printf("and your sword causes destructive damage!\n");
                printf("The %s staggers from the intense blow.\n", enPtr);
                *(ptr+2) -= 4;
            }
            
            else if(die == 5)
            {
                printf("and your sword causes critical damage!\n");
                printf("The %s has taken critical damage!\n", enPtr);
                *(ptr+2) -= 5;
            }
            
            else
            {
                printf("and your sword damages the beast and as \n");
                printf("the beast staggers around you are able to\n");
                printf("land another blow!\n");
                printf("The %s has taken ultra X2 critical damage!\n", enPtr);
                printf("The god Ares saw this and gives you a thumbs up!\n");
                printf("You have gained health!\n");
                *(ptr+0) += 2;
                *(ptr+2) -= 7;
            }
                    
        }
       
        else if(ch == 'd' || ch == 'D')
        {
            die = (rand() % 6) + 1;
            
            printf("\nThe old dwarf prepares his axe!\n");
            
            if(die == 1)
            {
                printf("The old dwarf trips on a rock, hurting his hip!\n");
                printf("The %s tries to attack him but you \n", enPtr);
                printf("block its blow and take damage!\n");
                *(ptr+0) -= 2;
                *(ptr+1) -= 1;
                
            }
            
            else if(die == 2)
            {            
                printf("The dwarf feels extra manly and drops his axe!\n");
                printf("The dwarf punches the %s!\n", enPtr);
                printf("The %s take no damage...\n", enPtr);
                printf("The dwarfs pride is slightly damaged.\n");
                *(ptr+1) -= 1;
            }
            
            else if(die == 3)
            {
                printf("The dwarf hits the %s with his axe!\n", enPtr);
                printf("The %s has taken damage.\n", enPtr);
                *(ptr+2) -= 2;
            }
            
            else if(die == 4)
            {
                printf("The dwarf throws his axe and misses!\n");
                printf("The dwarfs pride is slightly damaged.\n");
                *(ptr+1) -= 1;
            }
            
            else if(die == 5)
            {
                printf("The dwarf hits the %s with his axe!\n", enPtr);
                printf("The %s has taken damage!\n", enPtr);
                *(ptr+2) -= 2;
            }
            
            else
            {
                printf("The dwarf hands you a malt beer and you both\n");
                printf("chug the drink!\n");
                printf("The dwarf and you gain health and power!\n");
                printf("The dwarf and you both attack the %s,\n", enPtr);
                printf("it is overpowered and takes many blows!\n");
                printf("The %s has taken x3 ultra critical damage!\n", enPtr);
                *(ptr+0) += 2;
                *(ptr+1) += 2;
                *(ptr+2) -= 9;
            }
        }
        
        else
        {
            printf("You have entered the wrong choice!\n");
            printf("In your confusion, the %s strikes you!\n", enPtr);
            *(ptr+0) -= 1;
        }
               
        die = (rand() % 6) + 1;
            
        printf("\nThe %s rushes towards you and the dwarf!\n", enPtr);

        if(die == 1)
        {
            printf("You and the dwarf dodge the attack!\n");

        }

        else if(die == 2)
        {            
            printf("It attacks and slightly damages the dwarf!\n");
            *(ptr+1) -= 1;
            
        }

        else if(die == 3)
        {
            printf("It attacks and slightly damages you!\n");
            *(ptr+0) -= 1;
        }

        else if(die == 4)
        {
            printf("It attacks and damages the dwarf!\n");
            *(ptr+1) -= 2;
        }

        else if(die == 5)
        {
            printf("It attacks and damages you!\n");
            *(ptr+0) -= 2;
        }

        else
        {
            printf("but at the last minute hesitates and heals itself!\n");
            *(ptr+2) += 5;
        }
        
        if(*(ptr+0) <= 0)
        {
            printf("\nYou died!\n");
		printf("Game Over!\n\n");
            win = 2;
        }

	else if(*(ptr+1) <= 0)
	{
		printf("\nThe dwarf died!\n");
		printf("Game Over\n\n");

	}
        
        else if(*(ptr+2) <= 0)
        {
            printf("\nThe %s dies. You win!\n", enPtr);
		printf("You and the dwarf exit the forest safely!\n");
		printf("Congratulations!\n\n");
            win = 2;
        }
    }
}

int randomAscii(void)
{
	int val;
	val = 65 + rand()%25;
	return val;
}

void fillSumArray(int* ptr, int size)
{
	int val, i;
	for(i = 0; i < size; i++)
	{
		val = 1 + rand()%9;
		*ptr = val;
		ptr++;
	}
}

void printSumArray(int* ptr, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		printf("%d\t", *ptr);
		ptr++;
	}
}

void blackJack(int *cards)
{
	puts("The Skeleton laughs and deals each of you 2 cards");
	if(*cards == 1)
	{
		puts("Your first card is an Ace");
	}
	else if(*cards > 10)
	{
		printf("Your first card is a ");
		if(*cards == 11)
		{
			puts("Jack");
		}
		else if(*cards == 12)
		{
			puts("Queen");
		}
		else if(*cards == 13)
		{
			puts("King");
		}
	}
	else
	{
		printf("Your first card is a %d\n", *cards);
	}
	
	//card2
	*(cards+1) = (1 + (rand() % 13));
	if(*(cards+1) == 1)
	{
		puts("Your second card is an Ace");
	}
	else if(*(cards+1) > 10)
	{
		printf("Your second card is a ");
		if(*(cards+1) == 11)
		{
			puts("Jack");
		}
		else if(*(cards+1) == 12)
		{
			puts("Queen");
		}
		else if(*(cards+1) == 13)
		{
			puts("King");
		}
	}
	else
	{
		printf("Your second card is a %d\n", *(cards+1));
  }
}

void rollDiceRoom17(int *arr)
{
	int diceRollResult;
	int i;

	srand(time(NULL));

	for (i = 0; i < 2; i++)
	{
		diceRollResult = (rand() % 12) + 1;
		*arr = diceRollResult;
		arr++;
	}
}
