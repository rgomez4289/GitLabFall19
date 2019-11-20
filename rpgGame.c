//Contributors
//Alejandra Villa
//room #23
//G. Poppe

//eclipse496
//



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
							choice = 99;
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
						char stay[5]={"STAY"};
						char go[3]={"GO"};
						char yes[4]={"YES"};
					
						puts("You open the door and find 3 pills. A man wearing all back asks you to take one. There is a red pill, a blue pill, and a yellow pill. Which one do you choose?");
						scanf(" %s",&userOption);
						
						if(strcmp(userOption,red) == 0)
						{
							puts("You chose the red pill!");
							puts("Whoa! Whats going on?? All of a sudden, the bookcase in the back of the room swings wide open! Do you enter the opened room or stay where you are? (Enter STAY or GO)");
							scanf(" %s",&userOption);
							if(strcmp(userOption,stay)==0)
							{
								puts("Why are you scared? You should just go into the room anyways. Are you sure you want to stay? (Enter YES or NO)");
								scanf(" %s",&userOption);
								if(strcmp(userOption,yes)==0)
								{	
									puts("Fine. You're no fun.");
									choice = 99;
								}
								else
								{
									puts("Wow! You changed your mind and entered the hidden room! What happens next?");
								}
							}
						}
						if(strcmp(userOption,blue) == 0)
							puts("You chose the blue pill!");
						if(strcmp(userOption,yellow) == 0)
							puts("You chose the yellow pill!");
						
						if(strcmp(userOption,"99") == 0)
							choice = 99;
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

