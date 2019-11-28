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

//Mary Shrestha Room#19

// Steve Yoon Room #14



#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <stdio.h>
#include<math.h>

#define MAXGUESSES 5
#define WORDSIZE 25


void castaway(void); //room 14
void wordScramble(int *gameScore); //room 14
void fightSystem(int *hp, int *machetePower); //room14



void randomFillGob(int *ptr);
void printerGoblin(int *ptr);
void sorterGoblin(int *ptr);
int goblin(int choice);

int blackPotionEffect(void); //door 2
void bluePotionWorld(void); //door 2
void liabilityWaiver(void); //door 2
void signLiability(void); //door 2

int randGen(int topNum);


void blackJack(int *cards);

int zom(int health,int *wepP,int wepr); //door 3
int wiz(int health,int *wepP,int wepr); //door 3
int kni(int health,int *wepP,int wepr); //door 3
int dem(int health,int *wepP,int wepr); //door 3
int ang(int health,int *wepP,int wepr); //door 3
void dead(void);



// enemynames.txt needed to run functions
void rm11EnemyName(char *enPtr);
void rm11Dialog(int temp, char *enPtr, char *nmPtr);
void rm11Battle(int *ptr, char *enPtr, char *nmPtr);

void rollDiceRoom17(int *arr); //allocates array with random numbers using a pointer to array (room 17)

int randomAscii(void);
void fillSumArray(int* ptr, int size);
void printSumArray(int* ptr, int size);
int sumRandomArray(int* ptr, int size);

//inputWord.txt needed to run functions
void GameRules();
void LowerCaseWord(char word[]);
void PlayAgain(int *againPtr);                                                                                          void PlayOneGame(char solution[], char secretword[]);
void CreateSecretWord(char solution[], char secretword[]);
void GetTheLetterGuess(char letterGussed[], char *letterPtr, int *numPtr);
void ReplaceDash(char solution[], char secretword[], char letter);                                                    void DidYouWin(char solution[], char guess[]);


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
							int sick;
							char drinkChoice[10];
							puts("You open the door and see a table, on top are three potions.");
							puts("You hear the door lock behind you.");
							puts("The first is a blue potion, the second is a cloudy green,");
							puts("the third is as dark as the night sky");
							puts("A curious goblin walks out from the shadows...");
							puts("\"Before you drink a potion please take this liability waiver...\"");
							liabilityWaiver();
							puts("\"I hope you read that now please stamp your name onto it as well\"");
							signLiability();
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
								puts("You can't help but vomit!");
								for(sick = 0; sick < 5; sick++)
								{
									puts("~~~~~~~~~");
								}
								puts("You begin to drown in your vomit...");
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

						srand(time(NULL)); //Used for critical strike for the bow

	          int boss[] = {0,0,0,0,0,0,1};
	          int item[] = {1,1,1};
	          char area[9][200] ={
	            "You are in a Grave Yard surrounded by cliffs\n",
	            "You are standing on a cliff side\nBehind you is a graveyard\nIn front you see a shrine with a fading light\n",
	            "You are in a shrine.\nIn the middle you see a small bonfire.\nTo your left you see a wooden door\nForward You see a silver door.\nTo your right you see a black door\n\n",
	            "You are standing in what looks like an old library.\n",
	            "You are standing in what looks like an old temple. the ground looks burned from fire and an ominus glow comes from the celing.\n",
	            "You are standing on a black island. Surrounded by a lake of fire.\nThe door you came through is encased on light.\n",
	            "Black fire seems to spew from the bonfire.\n Filling the room and encompassing the shrine.\nAll Light fades.\nAre you alone?\n"
	          };

	          int loc = 0; //used for map placement
	          int move; //used for map progression
	          int end = 0; //Used to end game
	          int wep; //wepon damage
	          int *wepP; //used to enter functions
	          wepP = &wep;
	          int health; //player health

	          int swdmg = 20; // sword - short range
	          int bowdmg = 10; // far range - low dmg - has crit
	          int sffdmg = 50; // sorsory - far range / high dmg but 1 move cast time
	          int kndmg = 5; //bleed dmg but have to be close

	          //wepon ranges
	          int wepr;
	          int swra = 10;
	          int bowra = 30;
	          int sffra = 50;
	          int knra = 5;

	          puts("You awake on the ground in a graveyard.\n");
	          puts("You stand up and see 4 weponds at your feet:\n1 - Sword\n2 - Bow\n3 - Knife\n4 - Staff\n0 - to quit\nWhat do you grab");
	          int ch;
	          scanf("%d",&ch);
	          //Wepon choice
	          switch(ch)
	          {
	            case 1:
	              wep = swdmg;
	              wepr = swra;
	              printf("Wepon damage: %d\n",wep);
	              printf("Wepon range: %d\n",wepr);
	              printf("So I see that you have chosen the knight class\n");
	              puts("Knights are tough. Lets see if you are tough enough.");
	              health = 100;
	              printf("Health: %d\n",health);
	              break;
	            case 2:
	              wep = bowdmg;
	              wepr = bowra;
	              printf("Wepon damage: %d\n",wep);
	              printf("Wepon range(units): %d\n",wepr);
	              printf("So I see that you have chosen the Ranger class\n");
	              puts("Rangers are must have quick wits. Lets see if you can think on your feet.");
	              health = 60;
	              printf("Health: %d\n",health);
	              break;
	            case 3:
	              wep = kndmg;
	              wepr = knra;
	              printf("Wepon damage: %d\n",wep);
	              printf("Wepon range(units): %d\n",wepr);
	              printf("So I see that you have chosen the Theif class\n");
	              puts("Theifs rely on getting in close. Can you close the gap?\n");
	              puts("Theifs have bleed dmg - every 4 attacks issues 4 x your base damage\n");
	              health = 50;
	              printf("Health: %d\n",health);
	              break;
	            case 4:
	              wep = sffdmg;
	              wepr = sffra;
	              printf("Wepon damage: %d\n",wep);
	              printf("Wepon range(units): %d\n",wepr);
	              printf("So I see that you have chosen the Wizard class\n");
	              puts("Wizards are old and wise. Do you have the mind to survive?\n");
	              health = 60;
	              printf("Health: %d\n",health);
	              break;
	            case 0:
	              puts("I guess that will be the end of it");
	              puts("You crawl into an empty grave and die\n");
	              end = 2;
	              break;
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

	          //game
	        while(end != 2)
	        {
	          end:
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
	              {
	                  //Zombie fight
	                  if(boss[loc] == 1)
	                  {
	                    boss[loc] = zom(health,wepP,wepr);
	                    if(boss[loc] == 2)
	                    {
	                      dead();
	                      end = 2;
	                    }
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
	              }
	              case 2: //Shrine
	              {
	                  if(item[0] + item[1] + item[2] == 3)
	                  {
	                    puts("The Bonfire is going steadily, occationally flickering\nflame....dear...flame.\n");
	                  }
	                  if(item[0] + item[1] + item[2] == 6)
	                  {
	                    puts("The Bonfire is now roaring with vigor.\nDo you know where the marshmellows are?");
	                  }
	                  if(item[0] + item[1] + item[2] == 9)
	                  {
	                    puts("The Bonfire is now enveloping the entire shrine. You stare into the flame.\nIs there something staring back at you?");
	                    puts("Would you like to finish the game?");
	                    puts("1 - Yes\n2 - No!");
	                    scanf("%d",&ch);
	                    if(ch == 1)
	                    {
	                      loc += 4;
	                      goto end;
	                    }
	                  }

	                  //Adding items to the fire
	                    move = 0;
	                    if(item[0] == 2)
	                    {
	                      ch = 0;
	                      puts("It seems you have a tome.");
	                      puts("Would you like to add it to the bonfire?\n1 - Yes\n2 - No");
	                      scanf("%d",&ch);
	                      if(ch == 1)
	                      {
	                        puts("To add the tome the inscription reads:\nSpeak Friend Then Add");
	                        puts("What is the code?");
	                        char msg[20];
	                        char rid[] = {"mellon"};
	                        scanf(" %s",msg);
	                        int i;
	                        for(i = 0; msg[i]; i++)
	                        {
	                            msg[i] = tolower(msg[i]); //String manipulation
	                        }
	                        if(strcmp(msg,rid) == 0)
	                        {
	                          item[0] = 3;
	                          puts("You see the bonfire ignight with life.\n");
	                        }
	                        else
	                        {
	                          puts("Nothing happens...");
	                        }
	                      }
	                      else
	                      {
	                          puts("You do nothing\n");
	                      }
	                    }
	                    if(item[1] == 2)
	                    {
	                      int ch = 0;
	                      puts("It seems you have the black sword.");
	                      puts("Would you like to add it to the bonfire?\n1 - Yes\n2 - No");
	                      scanf("%d",&ch);
	                      if(ch == 1)
	                      {
	                        item[1] = 3;
	                        puts("You see the bonfire ignight with a reddish flame!\n");
	                      }
	                      else
	                      {
	                          puts("You do nothing\n");
	                      }

	                    }
	                    if(item[2] == 2)
	                    {
	                      int ch = 0;
	                      puts("It seems you have the eye!");
	                      puts("Would you like to add it to the bonfire?\n1 - Yes\n2 - No");
	                      scanf("%d",&ch);
	                      if(ch == 1)
	                      {
	                        item[2] = 3;
	                        puts("You see the bonfire roar to life!\n");
	                      }
	                      else
	                      {
	                        puts("You do nothing\n");
	                      }

	                    }

	                    move = 0;
	                    puts("1 - Open Wooden Door\n2 - Open Silver Door\n3 - Open Black Door\n4 - Go back towards the cliffs\n");
	                    scanf("%d",&move);
	                    if(move == 1)
	                    {
	                      loc++;
	                    }
	                    else if(move == 2)
	                    {
	                      loc+=2;
	                    }
	                    else if(move == 3)
	                    {
	                      loc+=3;
	                    }
	                    else if(move == 4)
	                    {
	                      loc--;
	                    }
	                    else
	                      puts("Wrong input Adventurer!\n");

	                  break;
	                }
	              case 3: //wooden Door
	              {
	                  if(boss[loc] == 1)
	                  {
	                    boss[loc] = wiz(health,wepP,wepr);
	                    if(boss[loc] == 2)
	                    {
	                      dead();
	                      end = 2;
	                    }
	                    item[0] = 1;
	                  }
	                  else
	                  {
	                    if(item[0] == 1)
	                    {
	                      int ch;
	                      puts("You see the wizards body still clutching his tome.\n");
	                      puts("Grab it?\n1 - Yes\n2 - No\n");
	                      scanf("%d",&ch);
	                      if(ch == 1){
	                        puts("You unwind the wizards fingers from his tome.");
	                        item[0] = 2;
	                      }
	                      else
	                        puts("You leave it be\n");
	                    }
	                    else
	                    {
	                        move = 0;
	                        puts("1 - Go towards Shrine\n");
	                        scanf("%d",&move);
	                        if(move == 1)
	                        {
	                          loc = 2;
	                        }
	                        else if(move == 2)
	                        {
	                          loc--;
	                        }
	                        else
	                          puts("Error input!");
	                    }
	                  }
	                break;
	              }
	              case 4: //Silver door
	              {
	                if(boss[loc] == 1)
	                {
	                  boss[loc] = kni(health,wepP,wepr);
	                  if(boss[loc] == 2){
	                    dead();
	                    end = 2;
	                  }
	                  else
	                  {
	                    item[1] = 1;
	                  }
	                }
	                else
	                {
	                  if(item[1] == 1)
	                  {
	                    int ch;
	                    puts("The Dark Knights sword stands piercing the floor.\nA dark magic bleeds from the hilt\n");
	                    puts("Take the sword?\n1 - Yes\n2 - No\n");
	                    scanf("%d",&ch);
	                    if(ch == 1){
	                      puts("You pull the sword from the ground\nA Dark energy surrounds you and the ground around you turns to black.");
	                      item[1] = 2;
	                    }
	                    else
	                      puts("You leave it be.\n");
	                  }
	                  else
	                  {
	                    move = 0;
	                    puts("1 - Go towards Shrine\n");
	                    scanf("%d",&move);
	                    if(move == 1)
	                    {
	                      loc = 2;
	                    }
	                  }
	                }
	                break;
	              }
	              case 5: //black Door
	              {
	                if(boss[loc] == 1)
	                {
	                  boss[loc] = dem(health,wepP,wepr);
	                  if(boss[loc] == 2)
	                  {
	                    dead();
	                    end = 2;
	                  }
	                  else
	                  {
	                    item[2] = 1;
	                  }
	                }
	                else
	                {
	                  if(item[2] == 1)
	                  {
	                    int ch;
	                    puts("The demons body dying on the floor, its eyes shimering red.\n");
	                    puts("Grab it?\n1 - Yes\n2 - No\n");
	                    scanf("%d",&ch);
	                    if(ch == 1){
	                      puts("You take the demon's eyes from its head.");
	                      item[2] = 2;
	                    }
	                    else
	                      puts("You leave it be\n");
	                  }
	                  else
	                  {
	                    move = 0;
	                    puts("1 - Go towards Shrine\n");
	                    scanf("%d",&move);
	                    if(move == 1)
	                    {
	                      loc = 2;
	                    }
	                  }

	                }
	                break;
	              }
	              case 6: //Boss fight
	              {
	                if(boss[loc] == 1)
	                {
	                  boss[loc] = ang(health,wepP,wepr);
	                  if(boss[loc] == 2)
	                  {
	                    dead();
	                    end = 2;
	                    break;
	                  }
	                  else
	                  {
	                    puts("Congratulations you have won!");
	                    FILE *ptr;
	                    ptr = fopen("Door 3 - cert","a+");
	                    fprintf(ptr,"Name: %s\nDoor 3 Completion!",name); //file manipulation
	                    puts("Restarting program!");
	                    char z;
	                    scanf(" %c",&z);
	                    end = 2;
	                  }
	                }
	                break;

	              }
	              default:
	                puts("an error has occured!");
	                end = 1;
	          }

	        }
				break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("a witch doctor with a wooden mask");
							puts("in each hand, he has a potion\n");
							puts("choice (1): you grow gills that allow you to breath underwater\n");
							puts("choice (2): allows health regeneration\n");
							puts("your choice of potion will affect what you encounter\n");
							scanf("%d",&choice);
							if(choice==1)
							{	
								char str1[15];
								char str2[15];
								int ret;
								strcpy(str1,"green");
								int portal=0;
								char attack; 
								srand(time(0));

								puts("you have chosen a defense potion");
								puts("you start feeling a burning sensation around your neck\n");
								puts("you now have gills and notice the witch doctor disappears.\n");
								puts("soon after, the floor opens and you fall into a pit of water, which leads to a tunnel covered in algea\n");
								puts("you uncovered the tunnel and see a crystal lock. You cant break it but guess the color to unlock it\n");
							     	puts("the lock has writing on i. it reads: I am the color of life\n");
								puts("what is the color?");
								scanf("%s", &str2);

									ret=strcmp(str1,str2);

									if(ret>0)
									{	printf("the color of life is not %s!\n", str2); 
									}
									else if(ret<0)
									{	
										printf("wrong color. Perhaps try one with less letters?");
									}
									else
									{	
										printf("correct! the tunnel opens and leads to a chamber. quickly, the tunnel seals and the water drains.");
										puts("as the water drains, two portals appear\n");
										puts("portal (1): seems to reflect a green landscape. And exploring gear beside it\n");
										puts("portal (2); reflects an icy environment and weather-proof gear beside it\n");
										puts("what portal do you want to explore?\n");
										scanf("%d",&portal);
										if(portal==1)
										{
											puts("you find yourself in a jungle. A wild warthug charges at you");
											puts("luckly, you have your bow and arrow\n");
											puts("you aim but you lack practice\n");
											puts("you fire!\n");
											puts("it is completely RANDOM where it hits\n");
											attack = rand() %4+1;
											switch(attack)	
											{	
												case 1:
													printf("Boom! straight to the dome. He drags onto your feet\n");
													break;
												case 2:	
													printf("the arrrow misses!\n");
													printf("it tackles you and you slip down a river and hit bottom. the current takes you against your will\n");
													break;
												case 3:
													printf("the arrow strikes its eye but continues charging at you\n");
													puts("you run and you feel it so close you cant feel its breath on your legs\n");
													break;
												case 4:
													printf("the arrow strikes its mouth but does nothing and infuriates it even more. you drop it and climb the nearest tree\n");
													break;
												default:
													puts("try again");	
											}
																		
											puts("the story continues, but you have other rooms to explore!!!\n");	

										}
										else if(portal==2)
										{
											puts("you see snow everywhere. Mountains covered in snow\n");
											puts("you analyze what youre wearing.\n");
											puts("snow guerrila warfare gear, your shoes have spikes for better grip. you have a laser machine gun on your back\n");
											puts("from a cave, you see a bon fire. you then see a Yeti staring back at you. Growling, watching your every move.");
											puts("you step back.");
											puts("It charges at you, ready to destroy you and eat you.");
											puts("quickly! you reach for your machine gun and start firing");
											for(int i=0;i<15;i++)
											{	
												puts("BANG! BANG! BANG!");
												i++;
											}
											puts("the bullets hit the yeti, leaving scorching hot holes everywhere in its body");
											puts("suddenly, you are transported back to reality and start where the story began...\n");

										}
										else
										{	
											puts("try again");
										}
									}
																				
							break;	
							}
							else if(choice==2)
							{
								char arrFour[10];
								char *p=arrFour;
								char fiend[10];
								
								FILE* rPtr;		
								FILE* wPtr; 
															
								puts("you have chosen	 a combat potion\n");
								puts("what better way than to challenge you right now?\n");
								puts ("*the witch summons a sword and a shield*\n");
								puts("the witch proceeds to tell you it is up to you to decide who you fight: \n");
								puts("type your fiend of choice\n");
								
								rPtr = fopen("fourthEnemies.txt","r");
								wPtr = fopen("outputFourthEnemies.txt","w");

								while(!feof(rPtr))
								{	
									for(int i=0;i<=10;i++)
									{
										fscanf(rPtr,"%s",&fiend);
									 	fprintf(wPtr,"[%d] %s\n",i,fiend);
										printf("[%d] %s\n",i,fiend);
									}
								}

								
								fclose(rPtr);
								

								scanf("%s", &arrFour);

								fprintf(wPtr,"you chose to battle: %s ", arrFour);
								fclose(wPtr);

								printf("suddenly the %s ",p);
							       printf("appears, ready to pounce on you\n");
							       printf("but to no avail it attack you, leaving behind wounds on your flesh, bleeding\n");
							       printf("but youre healing too. The potion works!\n");
							       printf("you gather the courage and attack until you cant anymore\n");
							       printf("the simulation ends and you're back where you started\n");						
								
								break;
							}
							else							
							{
								("do you not read?");
							}

					}
					break;
			}
			case 5:
			{
					while(choice != 99)
                                        {
                                                        int num, sum, i;
                                                        int arr[5];
                                                        int* ptr1 = arr;
                                                        FILE* wptr;
                                                        char cArr1[6] = "linux";
                                                        char cArr2[6];
                                                        char cArr3[70] = "At Last all The monsTERS hAve BEen Defeated. You are safe, for now";
                                                        char* ptr2 = cArr3;

                                                        wptr = fopen("filewritemonster.dat", "w");
                                                        fprintf(wptr, "%s\n", cArr1);
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
                                                                if(choice != num)
                                                                {
                                                                        puts("wrong answer! please try again");
                                                                }
                                                        }
                                                        puts("the loop monster has seized to exist");
                                                        puts("but a new evil lurks ahead...");
                                                        puts("the array monster!");
                                                        printSumArray(ptr1, 5);
                                                        puts("the array monster will let you go free should you enter the sum of the values above");
                                                        scanf("%d", &choice);
                                                        sum = sumRandomArray(ptr1, 5);
                                                        while(choice != sum)
                                                        {
                                                                puts("incorrect answer, please try again");
                                                                scanf("%d", &choice);
                                                        }
                                                        puts("the array monster's reign of terror has ended");
                                                        puts("but your still not safe...");
                                                        puts("the file write monster awaits you!");
							puts("the file write monster wrote a file that contains the magic word to get past him");
                                                        puts("the file is called filewritemonster.dat");
                                                        scanf("%s", cArr2);
                                                        while(strcmp(cArr1, cArr2) != 0)
                                                        {
                                                                puts("incorrect answer! please try again");
                                                                scanf("%s", cArr2);
                                                        }
                                                        puts("the mighty file write monster has been defeated");
                                                        puts("but now we have reach a room with three mysterious doors");
                                                        puts("only one leads to safety, and the others to monsters");
                                                        puts("no hints, choose a door and accept your fate");
                                                        scanf("%d", &choice);
                                                        switch(choice)
                                                        {
                                                                case 1:
                                                                        puts("the ghost of the loop monster! he wants another magic number...");
                                                                        num = randomAscii();
                                                                        printf("hint: the ascii value for %c\n", num);
                                                                        scanf("%d", &choice);
                                                                        while(choice != num)
                                                                        {
                                                                                puts("wrong answer, please try again");
                                                                                scanf("%d", &choice);
                                                                        }
                                                                        break;
                                                                case 2:
                                                                        puts("the ghost of the array monster! time for another addition problem");
                                                                        fillSumArray(ptr1, 5);
                                                                        printSumArray(ptr1, 5);
                                                                        sum = sumRandomArray(ptr1, 5);
                                                                        puts("please enter the sum of the numbers above");
                                                                        scanf("%d", &choice);
                                                                        while(choice != sum)
                                                                        {
                                                                                puts("incorrect answer! please try again");
                                                                                scanf("%d", &choice);
                                                                        }
                                                                        break;
                                                                case 3:
                                                                        puts("no monsters behind this door... all clear to move forward");
                                                                        break;
                                                                default:
                                                                        puts("invalid input, please enter a valid number");
                                                        }
							puts("another close call...");
                                                        for(i = 0; i < 71; i++)
                                                        {
                                                                if(islower(*ptr2))
                                                                {
                                                                        putchar(toupper(*ptr2));
                                                                }
                                                                else if(isupper(*ptr2))
                                                                {
                                                                        putchar(tolower(*ptr2));
                                                                }
                                                                else if(*ptr2 == ' ')
                                                                {
                                                                        printf(" ");
                                                                }
                                                                ptr2++;
                                                        }
                                                        puts("");

                                                        fclose(wptr);

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
						FILE *wptr;
						FILE *writer;
						
						int a[5]={1223,1323,1219,1292,1238};
						int b[5]={2321,2101,2290,2303,2239};

						char day[5];
						int dayNumber;
						int dayNum[5];
						char textG[1000];
						int counter=0;
						int i;
					

						int arry[5]={0};
						int *ptr = arry;

						int SIZE=20;
						char gobarray[SIZE];

						puts("\n\nYou open the door and find a unicorn eating gold bars. And is protected by a goblin");
						printf("Save the gold bars? Enter 1 for yes. 2 for no.");
						scanf("%d",&choice);
							
							
							if(choice==1)
							{
								puts("As you try to pick up the gold bar a goblin comes out and tries to attack you");
								
								
								printf("Try to attack or run away? Enter 1 to fight. 2 to run ");
								
								scanf("%d",&choice);
								if(choice==1)
								{
																	
									choice=goblin(choice);
	
									printf("You are left with %d health after that short battle.\n",choice);
									puts("You pick up the gold bar and as you hold it in your hand it begins to shine");
									puts("You get teleported to another room, all there is a bed, desk, and a door behind you");
									puts("You decide to walk to the desk and notice a book, a quill and ink.");
									puts("You first decide to open and write into the book.");

									writer = fopen("goblinJ.txt","w");
									fprintf(writer,"Day 5 I just slayed a goblin and think I may be in his room after being teleported. I have a strange feeling about today\n");
									if(writer==NULL)
									{
										puts("Error reading file. file may not exist.");
									}	
									wptr = fopen("goblinJ.txt","r");

							
									while(!feof(wptr))
									{
										fscanf(wptr,"%s",textG);
										if(feof(wptr))break;
										dayNum[counter]=dayNumber;
										counter++;
										
									}
									for(i=0; i<counter;i++)
									{
										printf("%s",textG);
									}
									fclose(wptr);
									fclose(writer);
									
									
									puts("You realize that maybe this journal belongs to the goblin you just slayed.");	
									puts("You continue to explore the room and open drawers at the desk, and find mail");
									puts("As you begin to open the mail it sucks you in and leaves no trace of you ever being there...");
									puts("YOU DIED..");
									puts("Open goblinJ.txt to check what your character wrote.");





								
								choice=99;
								
								}
								else
								{
									printf("You didn't take out your sword and the goblin attacks. You Died.\n");
									choice=99;

								}
						
							}
							else
							{
								printf("\n\nYou decided not to pick up the gold. You leave and the goblin goes back into hiding\n");
								
								printf("You decide to walk past the unicorn and come to a pathway labled 'Pathway A'\n");
								puts("\nAs you walk closer to the pathway, a door appears");
								puts("\nOn the face of the door it says: 'Arrange these number in numerical order to enter!'\n");


								randomFillGob(ptr);
								printerGoblin(ptr);

								puts("\nAfter some time of sorting numbers...");
								sorterGoblin(ptr);
								puts("...");
								puts("...");
								puts("...");
								printerGoblin(ptr);
								puts("\nThe door speaks: 'Good job now enter the puzzle room'");
								puts("In the middle of the room there is a crystal ball. You walk up to the crystal ball..");
								printf("\nThe crystal ball speaks..'Hello there %s'\n",name);

								printf("\n%s please swap these to get a wish granted.\n",name);

								printf("\nIn front of you are two books full of dates in them\n");

							
								for(i=0; i<5; i++)
								{
									printf("First book: %d\n",a[i]);
									printf("Second book: %d\n",b[i]);


								}
								printf("\nOnce again after some swapping...\n");
							
								puts("...");
								puts("...");
								puts("...");

								for(i=0;i<5;i++)
								{
									int swp = a[i];
									a[i]=b[i];
									b[i]= swp;
								}
								for(i=0; i<5; i++)
								{
									printf("First book: %d\n",a[i]);
									printf("Second book: %d\n",b[i]);


								}

								printf("\nFinally done..You show the Crystal Ball the two books.\n");
								printf("\nShe grants you one wish..and you wish for this all to be over.\n");
								printf("\nA bright Flash that blinds you appears and..\n\n");
								break;
								


								
								//choice=99;
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
					int x, y, userSelect, hp = 100, machetePower = 0;
					int gameScore;
					
					FILE *writer;
					srand(time(NULL));
					int choice;

					while(choice != 99)
					{
						printf("%s!!, You've been abandoned on an island and must find your way to the extraction point to get home. Lets go!\n", name);
						puts("You're starting off with 100 hp and must navigate your way through obstacles and make the correct choices along the way.");
						Menu:
						
						puts("You have 3 options... where would you like to go?(Extraction point is through the river but to get a perfect score, you must go to the mountain first)");
						puts("1. Beach\n2. Mountain\n3. River");
						scanf(" %d", &userSelect);
						writer = fopen("room14.txt", "w");
						if (userSelect == 1) //Beach
						{
							if(machetePower > 0)
							{
								goto BeachMenu;
								break;
							}
							puts("This isn't the way to the extraction point but there is a backpack here.\n");
							puts("Inside you find a machete and a hundred sided die.\n");
							puts("The power of the machete is not set and you will roll the magic die to set it's power.\n");
							x = 1 + (rand()%100);
							printf("You roll and get a... %d\n", x);
							machetePower = x;
							printf("Machete Power: %d\n", x);

							BeachMenu:
							puts("There is nothing else on the beach.");
							puts("Pick a number\n1. Go back\n2. Chill");
							scanf(" %d", &userSelect);
							if(userSelect == 1)
							{
								goto Menu;
							}
							else if(userSelect == 2)
							{
								puts("You kick your feet up, this is your life now. Welcome to CASTAWAY!!!\n");
								castaway();
							}
						}
						else if(userSelect == 2)
						{
				            if(hp < 100)
				            {
				                puts("You've done all you can here, back you go\n");
				                goto Menu;
				            }
							puts("You head towards the mountains with your machete");
							puts("You encounter a momma bear who loves math and can talk.");
							puts("I eat 2 wild boars every week. If I've eaten 32 boars, how many weeks has gone by?: ");
							scanf(" %d", &x);
							if(x!= 16)
							{
								puts("I don't think so, we fight now!\n");
								fightSystem(&hp, &machetePower);
								if(hp > 0)
								{
									puts("You've defeated the bear!\n");
									gameScore += 25;
				                    puts("1. Extraction point\n2. Back where you came from?");
				                    scanf(" %d", &userSelect);
				                    if(userSelect == 1)
				                    {
				                        goto End;
				                    }
				                    else if(userSelect == 2)
				                    {
				                        goto Menu;
				                    }
				                    break;
								}
								else
								{
									puts("You lose");
									choice = 99;
									break;
								}
							}
							else
							{
								gameScore += 10;
								puts("Amazing, back you go");
								goto Menu;
							}
							break;


						}

						else if(userSelect == 3)
						{

							puts("You decide to go towards the river and discover a troll.");
							puts("You must unscramble 5 words in order to cross.");
							puts("1. Lets Play\n2. I'm good");
							scanf(" %d", &x);
								
							if(x == 1)
							{
								wordScramble(&gameScore);
							}
							else
							{
								goto Menu;
							}
							break;
						}
					}

				    End:
					fprintf(writer, "User HP: %d\n", hp);
					fprintf(writer, "GameScore: %d\n", gameScore);
					puts("Check file room14.txt for your score");
					fclose(writer);
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
					  GameRules();
                                          int againPtr;
                                          FILE *fptr;
                                          char solution[WORDSIZE+1];
                                          char secretword[WORDSIZE+1];
                                          fptr=fopen("inputWord.txt","r");
                                          if(fptr==NULL)
                                          {
                                                 printf("Could not open file");

                                          }
                                          do
                                          {
                                                 fscanf(fptr," %s",solution);
                                                 LowerCaseWord(solution);
                                                 CreateSecretWord(solution,secretword);
                                                 PlayOneGame(solution,secretword);
                                                 PlayAgain(&againPtr);
                                          }
                                          while(againPtr!=0);
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


void printerGoblin(int *ptr)
{
	int i;
	for(i=0;i<10;i++)
	{
		printf("Numbers are : %d\n",*(ptr+i));
	}
}
void randomFillGob(int *ptr)
{
	int i;
	srand(time(0));
	for(i=0;i<10;i++)
	{

		*(ptr+i)=55+(rand() % (205-55));

	}

}
void sorterGoblin(int *ptr)
{
	int i,j,tmp;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				tmp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=tmp;
			}
		}
	}
}

int goblin(int choice)
{
	int y;
	int health=100;
	int ghealth=50;
	srand(time(NULL));
	int damage = 0;
	int gdamage =0;
	if(choice==1)
	{
		printf("\n'So you have chosen to fight me'\n");
		printf("The goblin has 50 Health\n");
		printf("\nChoose your Weapon: \n");
		printf("1. Dagger: 'Fast but close combat.' (+10 Attack, +10 in speed)\n");
		printf("2. Longsword: 'Slow but hits hard.' (+30 Attack, -10 in speed)\n");
		printf("3. Broadsword and shield: 'Average sword but comes with shield that will slow you down.'(+20 Attack, -20 Speed, +20 Defense)\n");
		printf("4. Two Handed Sword: 'Very Very Slow but hard hitting.'(+50 Attack, -50 Speed) \n");
		printf("5. Bow and Arrows: 'Works well with enemies that are far away'(+15 Ranged, +10 attack)\n");
		printf("Choose wisely...\n");	
		scanf("%d",&y);
		switch(y)
		{
			case 1:

				printf("You chose the dagger\n");
				while(ghealth>0)
				{
					gdamage = 1+(rand()%10);
					printf("You hit the Goblin and deal %d damage\n",gdamage);
					ghealth = ghealth - gdamage;
					printf("The goblin is left with %d health\n",ghealth);
					damage = 1+(rand()%10);
					printf("The goblin hits you back and deal %d damage\n",damage);
					health = health - damage;
									
					if(ghealth<0)
					{
						printf("The goblin is dead\n");
						
					}

				}
				break;
			case 2:
				printf("You chose the Longsword\n");
				while(ghealth>0)
				{
					gdamage = 1+(rand()%30);
					printf("You hit the Goblin and deal %d damage\n",gdamage);
					ghealth = ghealth - gdamage;
					printf("The goblin is left with %d health\n",ghealth);
					damage = 1+(rand()%10);
					printf("The goblin hits you back and deal %d damage\n",damage);
					health = health - damage;
				
					
					if(ghealth<0)
					{
						printf("The goblin is dead\n");
						
					}

				}
				break;


			case 3:
				printf("You chose the Broadsword and shield\n");
				while(ghealth>0)
				{
					gdamage = 1+(rand()%20);
					printf("You hit the Goblin and deal %d damage\n",gdamage);
					ghealth = ghealth - gdamage;
					printf("The goblin is left with %d health\n",ghealth);
					damage = 1+(rand()%10);
					printf("The goblin hits you back and deal %d damage\n",damage);
					health = health - damage;
									
					if(ghealth<0)
					{
						printf("The goblin is dead\n");
						
					}

				}
				break;

				
			case 4:
				printf("You chose the Two Handed Sword\n");
				while(ghealth>0)
				{
					gdamage = 1+(rand()%50);
					printf("You hit the Goblin and deal %d damage\n",gdamage);
					ghealth = ghealth - gdamage;
					printf("The goblin is left with %d health\n",ghealth);
					damage = 1+(rand()%10);
					printf("The goblin hits you back and deal %d damage\n",damage);
					health = health - damage;
									
					if(ghealth<0)
					{
						printf("The goblin is dead\n");
						
					}

				}
				break;

				
			case 5:
				printf("You chose Bow and Arrows\n");
				while(ghealth>0)
				{
					gdamage = 1+(rand()%15);
					printf("You hit the Goblin and deal %d damage\n",gdamage);
					ghealth = ghealth - gdamage;
					printf("The goblin is left with %d health\n",ghealth);
					damage = 1+(rand()%10);
					printf("The goblin hits you back and deal %d damage\n",damage);
					health = health - damage;
									
					if(ghealth<0)
					{
						printf("The goblin is dead\n");
						
					}

				}
				break;

					
		}
	}
	return health;
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

void liabilityWaiver(void)
{
	FILE *lptr = fopen("liabilitywaiver.txt", "w");
	fprintf(lptr, "================================================\n");
	fprintf(lptr, "I drink this potion knowing I will probably die.\n");
	fprintf(lptr, "I waive any right to be upset or mad.\n");
	fprintf(lptr, "Also I will not sue.\n");
	fprintf(lptr, "================================================\n");
	fclose(lptr);

}

void signLiability(void)
{
	FILE *lptr = fopen("liabilitywaiver.txt", "a+");
	char signature[20];
	printf("What name would you like to sign? (Hopefully your own!)\n");
	scanf("%s", signature);
	fprintf(lptr, "Signed, %s\n", signature);
	fclose(lptr);
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


int zom(int health,int* wepP,int wepr)
{

	int att = 0; //used for wizard attack build
	int op; //attack/roll/forward /back
	int build = 0; //knife bleed dmg


	//zombie health
	int zom = 50;
	int zomD = 10;
	int zomA = 1; //used to find zombie attack

				puts("\nYou move forward and a zombie holding a knife charges at you");
		while(zom > 0)
		{
			if(health <= 0)
			{
				dead();
				return 2;
			}
				printf("Your Health: %d\n",health);
				printf("Your Range: %d\n",wepr);
				printf("Zombie Health: %d\n",zom);
				printf("Zombie Distance: %d\n",zomD);
				puts("1 - Attack!\n2 - Dodge left\n3 - Dodge right\n4 - Fall back\n5 - Charge Forward");
				scanf("%d",&op);
				switch (op)
				{
					case 1:
						//Sword Attack
						if(wepr == 10)
						{
							if(zomD <= 5)
							{
								puts("Too close!");
								puts("The zombie drops his shoulder and you flip over him");
								health -= 5;
								puts("You scramble to get up");
								puts("The zombie turns around.");
								zomA = 0;
								zomD = 5;
								break;
							}
							else if(zom < 21)
							{
								puts("With 1 final thrust you slice the zombie in 2\n");
								zom -= *wepP;
								break;
							}
							else
							{
								puts("The zombie charges at you closing the distance!");
								puts("You slice the zombie as he tumbles over you");
								zomD = 5;
								zom -= *wepP;
							}
						}
						//Knife Attack
						else if(wepr == 5)
						{
							if(wepr < zomD)
							{
								puts("Too Far away!");
								break;
							}
							if(zom < 6){
								puts("You thrust your knife in the zombies skull!");
								puts("He grouns as he falls to the floor");
								puts("");
								zom -= *wepP;
							}
							else
							{
								zomA = 1;
								puts("You stab the zombie in the head and flip over him");
								if(build == 4)
								{
									zom -= *wepP * 8;
									build = 0;
								}
								else
								{
									 build++;
									 zom -= *wepP;
								}
									 zomD = 1;
							}
						}
						//Bow attack
						else if(wepr == 30)
						{
							if(wepr < zomD)
							{
								puts("Too Far away!");
								break;
							}
							if(zom < 11)
							{
								puts("You pull harder on your bow and fire 1 final arrow!\n");
								puts("It hits the zombie in the forehead as he falls to the ground sliding to your feet.\n");
								zom -= *wepP;
								break;
							}
							int crit = rand() % 100 + 1;
							if(crit > 79)
							{
								zom -= (*wepP)*2;
								puts("You launch a tremendus amount of arrows and hit the zombie in the head!");
							}
							else
							{
								puts("You launch arrows at the zombie and hit him in the chest!");
								zomA = 1;
								zom -= *wepP;
								zomD -= 10;
							}

							puts("You position yourself away from the zombie before he gets up");
						}
						//wiz class
						else if(wepr == 50)
						{
							if(wepr < zomD)
							{
								puts("Too Far away!");
								break;
							}
							if(att == 1)
							{
								if(zom < 51)
								{
									puts("Your staff starts to glow immensy and a fireball is expanding at the tip of your staff!\n");
									puts("As the Zombie charges forward you thrust your staff in its direction!\n");
									puts("The fireball is launched from your staff hitting the zombie and burning him to a crisp.\n");
									puts("There is nothing left of the zombie except a black mark on the ground\n");
									zom -= *wepP;
								}
								else
								{
									att = 0;
									puts("You hurl a fireball from your staff had hit the zombie!");
									zom -= *wepP;
									zomD -= 10;
								}
							}
							else
							{
								 puts("You start speaking an ancient language and your staff starts to glow!");
								 att = 1;
								 zomA = 1;
								 zom -= 10;
							}
						}
						break;
					case 2:
						puts("You dodge left and the zombie stumbles over");
						zomA = 0;
						break;
					case 3:
						puts("You dodge Right and the zombie misses you");
						zomA = 0;
						break;
					case 4:
						puts("You fall back!");
						zomA = 0;
						zomD += 10;
						break;
					case 5:
						puts("You charge towards eachother!");
						zomD -= 10;
						if(zomD < 3)
						{
							puts("Too close!");
							puts("The zombie drops his shoulder and you flip over him");
							health -= 5;
							puts("You scramble to get up");
							puts("The zombie turns around.");
							zomA = 0;
							zomD = 5;
							break;
						}
					default:
						puts("you freeze and the zombie Stabs you!");
						health -= 20;
				}

				if(zomA == 1)
				{
					if(zomD  > 20)
					{
						puts("The zombie charges towards your direction.");
						zomD -= 19;
					}
					else
					{
						puts("The zombie charges you and catches his kife in you!");
						health -= 10;
					}
				}

		}

		return 0;
}

int wiz(int health,int* wepP,int wepr) //fire
{

	int att = 0; //Used for wizard charged attack
	int op;
	int build = 0;
	//wizard health
	int wiz = 150;
	int wizR = 50;
	int wizD = 20;
	int wizA = 0; //determines the wizards attack and charge phase
	int cover = 0; //determines if you are in cover 0-open 1-incover

				puts("\nYou hear a cackle in the center of the library.");
				puts("\nYou see a wizard standing there talking in a foregn languege.\nHe is holding a fireball in his right hand, and an old tome in his left.\n");
				puts("Suddenly a fire ball is hurled at you.\n");
				puts("You barely dodge it as it scorches your hair.\n");
		while(wiz > 0)
		{
			 if(health <= 0)
			 {
				 puts("The wizard casts a wave of fire.\nYou are consumed and burned to a crisp!\n");
				 return 2;
			 }

				printf("Your Health: %d\n",health);
				printf("Your Range: %d\n",wepr);
				printf("Wizard Health: %d\n",wiz);
				printf("Wizard Distance: %d\n",wizD);
				puts("1 - Attack!\n2 - Dodge Left\n3 - Dodge Right\n4 - Fall Back\n5 - Move Forward\n");
				scanf("%d",&op);
				switch (op)
				{
					case 1: //Attack
						//Sword Attack
						if(wepr == 10)
						{
							//If you are too close to the wizard
							if(wizD > 10)
							{
								puts("Too far away!");
								break;
							}
							//If you are about to kill the wizard
							if(wiz < 21)
							{
								puts("You charge the wizard sweeping your sword!");
								puts("You catch his arm and his staff flys off. His staff is consumed by fire.");
								puts("The fire catches your sword and encases it with fire.");
								puts("Your sword now does more damage!");
								wiz -= *wepP;
								*wepP += 20;
								break;
							}
							//normally hitting the wizard (takes you out of cover)
							else
							{
								puts("You Charge forward and thrust your sword at the wizard.");
								wiz -= *wepP;
								cover = 0;
							}
						}
						//Knife Attack
						else if(wepr == 5)
						{
							//If you are too close to the wizard
							if(wizD > wepr)
							{
								puts("Too far away!");
								break;
							}
							//Final strike
							if(wiz < 6)
							{
								puts("With 1 final slice you throw your knife striking the wizards chest\n");
								puts("He shreks as he falls towards the ground");
								puts("The fire from his staff catches your knife and encases it with fire.");
								puts("Your knife now does more damage!");
								wiz -= *wepP;
								*wepP += 20;
								break;
							}
							else
							{
								puts("You slice with your knife!");
								cover = 0;
								if(build == 3)
								{
									wiz -= (*wepP * 8);
									build = 0;
								}
								else
								{
									 build++;
									 wiz -= *wepP;
									 wizD = 5;
								 }
							 }
						}
						//bow attack
						else if(wepr == 30)
						{
							//If you are too close to the wizard
							if(wizD < wepr)
							{
								puts("Too close!");
								puts("The wizard throws magic tonic in your direction!");
								health -= 5;
								break;
							}
							//Killing the wizard
							if(wiz < 11)
							{
								puts("You fire multiple arrows from your bow.\nThey hit the wizards staff with a couple hitting his chest.\n");
								puts("He shrikes in pain and falls to the floor.\n You hear the horn of gondor in the distance.");
								puts("The fire catches your quiver and encases it with fire.");
								puts("Your arrows now does more damage!");
								wiz -= *wepP;
								*wepP += 20;
								break;
							}
							else
							{
								puts("You quick lauch a swarm of arrows towards the wizard");
								wiz -= *wepP;
							}
						}
						//staff attack
						else if(wepr == 50)
						{
							if(wizD < wepr)
							{
								puts("Too close!");
								puts("The wizard throws magic tonic in your direction!");
								health -= 5;
								break;
							}
							//Casting phase
							if(att == 1)
							{
								//Killing the wizard
								if(wiz < 51)
								{
									puts("Your staff starts to glow immensy and a fireball is expanding at the tip of your staff!\n");
									puts("The fireball is launched from your staff hitting The wizards Staff.\n");
									puts("The staff explodes and the wizard is launched across the room.\n");
									puts("The wizards fire catches your staff and encases it with fire.");
									puts("Your staff now does more damage!");
									wiz -= *wepP;
									*wepP += 20;
								}
								//Hitting the wizard
								else
								{
									att = 0;
									puts("You hurl a fireball from your staff!");
									wiz -= *wepP;
									wizD -= 10;
								}
							}
							//Charging phase
							else
							{
								 puts("You start speaking an ancient language and your staff starts to glow!");
								 att = 1;
							}
						}
						break;
					case 2:
						puts("You Quickly scramble to the left and find the closest bookshelf for cover.");
						cover = 1;
						break;
					case 3:
						 puts("You Quickly scramble to your right and find the closest bookshelf for cover.");
						 cover = 1;
						 break;
					case 4:
						puts("You scramble to find cover away.");
						cover = 1;
						wizD += 10;
						break;
					 case 5:
						 puts("You charge closer to the wizard keeping in cover!");
						 cover = 1;
						 wizD -= 5;
						 break;
					default:
					 if(cover == 0)
					 {
						 puts("Unable to think you take the full fire ball!");
						 health -= 40;
					 }
					 else
					 {
						puts("Unable to think your cover is consumed by fire!");
						cover = 0;
					}
				}

				if(wizA == 1)
				{
					if(cover == 0)
					{
						puts("The wizard catches you outside of cover and you are hit with the fireball!");
						health -= 20;
						wizA = 0;
					}
					else if(cover == 1)
					{
						puts("The fireball hits your cover and burns the bookshelf to ash!");
						cover = 0;
						wizA = 0;
					}
				}
				else if(wizA == 0 && wiz > 0)
				{
					puts("You hear the wizard wispering into his staff as it starts to glow!");
					wizA = 1;
				}

				if(wiz < 0)
				{
					puts("The wizard yells in terror before falling to the floor.");
				}

		}

		return 0;
}

int kni(int health,int* wepP,int wepr) //dark
{

		 int att = 0; //Used for wizard class charged attack
		 int op;
		 int build = 0;
		 int dodge = 0; //determines if the knights attack is going to hit
		 //knight stats
		 int kni = 250;
		 int kniR = 20;
		 int kniD = 40;
		 int kniA = 0; //determines the knights attack and charge phase

			 //Intro to knight
			 puts("You see a black knight praying in the center of the temple.\n");
			 puts("After you fully come through the door. It shuts behind you and disappears.");
			 puts("The slaming of the door gets the knights attention and he stands up and draws his sword");
			 while(kni > 0)
			 {
					if(health <= 0)
					{
						//When you die to the Knights
						puts("The knight pierces your stomach and you are lifted into the air.\nHe throws you across the temple!");
						return 2;
					}

					 printf("Your Health: %d\n",health);
					 printf("Your Range: %d\n",wepr);
					 printf("Knight Health: %d\n",kni);
					 printf("Knight Distance: %d\n",kniD);
					 puts("1 - Attack!\n2 - Dodge Left\n3 - Dodge Right\n4 - Fall Back\n5 - Move Forward\n");
					 scanf("%d",&op);
					 switch (op)
					 {
						 case 1: //Attack
							 //Sword Attack
							 if(wepr == 10)
							 {
								 //If you are too far away
								 if(kniD > 10)
								 {
									 puts("Too far away!");
									 break;
								 }
								 //If you are about to kill the knight
								 if(kni < 21)
								 {
									 puts("You quickly slice the knights leg causing him to fall down.\nWhile he is down you bury your flaming sword in his neck");
									 kni -= *wepP;
									 *wepP += 20;
									 break;
								 }
								 //normally hitting the knight
								 else
								 {
									 puts("You quickly attack the knight!");
									 kni -= *wepP;
									 dodge = 0;
								 }
							 }
							 //Knife Attack
							 else if(wepr == 5)
							 {
								 //If you are too close to the wizard
								 if(kniD > wepr)
								 {
									 puts("Too far away!");
									 break;
								 }
								 //Final strike
								 if(kni < 6)
								 {
									 //Killing the knight with knife
									 puts("In quick succession you slice the knight through his armor.");
									 puts("Your blade taking dark energy with every stroke.");
									 puts("He finally collapses from the attacks");
									 kni -= *wepP;
									 *wepP += 20;
									 break;
								 }
								 else
								 {
									 puts("You stab with your knife!");
									 dodge = 0;
									 if(build == 3)
									 {
										 kni -= (*wepP * 8);
										 build = 0;
									 }
									 else
									 {
											build++;
											kni -= *wepP;
											kniD = 5;
										}
									}
							 }
							 //bow attack
							 else if(wepr == 30)
							 {
								 //If you are too close to the wizard
								 if(kniD < wepr)
								 {
									 puts("Too close!");
									 puts("The knight kicks you away!");
									 health -= 5;
									 kniD += 5;
									 break;
								 }
								 //Killing the knight
								 if(kni < 11)
								 {
									 puts("With rapid succession you are able to launch flaming arrows from your bow.");
									 puts("Landing in the chest of the knight.");
									 puts("Dark energy starts to envelop the floor as the knight falls");
									 puts("Once the dark energy falls to the floor it quickly jumps onto you.");
									 puts("surrounding you until it finally stops in your quiver.");
									 puts("\nYour Arrows are now combined with dark energy!");
									 kni -= *wepP;
									 *wepP += 20;
									 break;
								 }
								 //Normal attack
								 else
								 {
									 puts("You quick lauch a swarm of arrows towards the knight");
									 kni -= *wepP;
									 dodge = 0;
								 }
							 }
							 //staff attack
							 else if(wepr == 50)
							 {
								 if(kniD < wepr)
								 {
									 puts("Too close!");
									 puts("The Knight Kicks you away!");
									 health -= 5;
									 kniD += 5;
									 break;
								 }
								 //Casting phase
								 if(att == 1)
								 {
									 //Killing the knight
									 if(kni < 51)
									 {
										 //kill dialog
										 puts("You cast a wave of fire from your staff.");
										 puts("The knight is soon entomed in fire.");
										 puts("The knights armor drops to the floor, as there is no body inside.");
										 kni -= *wepP;
										 *wepP += 20;
									 }
									 //Hitting the knight
									 else
									 {
										 att = 0;
										 puts("You hurl a fireball from your staff!");
										 kni -= *wepP;
										 kniD -= 10;
										 dodge = 0;
									 }
								 }
								 //Charging phase
								 else
								 {
										puts("You start speaking an ancient language and your staff starts to glow!");
										att = 1;
								 }
							 }
							 break;
						 case 2:
							 puts("You roll to the left!");
							 dodge = 1;
							 break;
						 case 3:
								puts("You roll to the right!");
								dodge = 1;
								break;
						 case 4:
							 puts("You fall back!");
							 kniD += 10;
							 break;
							case 5:
								puts("You move closer to the knight!");
								kniD -= 5;
								break;
						 default:
							if(dodge == 0)
							{
								puts("The knight barely scathes your clothes.");
								kniA = 0;
							}
							else
							{
							 puts("The Knight Drops his sword on you!");
							 health -= 40;
							 kniA = 0;
						 }
					 } //End of switch statement

					 if(kniA == 1)
					 {
						 if(dodge == 0)
						 {
							 puts("The Knight moves in and slashes you with his sword!");
							 health -= 20;
							 kniA = 0;
						 }
						 else if(dodge == 1)
						 {
							 puts("The knights attack missed!");
							 dodge = 0;
							 kniA = 0;
						 }
					 }
					 else if(kniA == 0 && kni > 0)
					 {
						 puts("The Knight gets into position to attack!");
						 kniA = 1;
					 }

					 if(kni <= 0)
					 {
						 puts("You see the knights Sword standing from the ground");
					 }

			 }

			 return 0;
}

int dem(int health,int* wepP,int wepr) //blood
{

				int att = 0; //Used for wizard class charged attack
				int op;
				int build = 0;
				int dodge = 0; //determines if the demons attack is going to hit
				//Demon stats
				int dem = 250;
				int demR = 20;
				int demD = 40;
				int demA = 0; //determines the knights attack and charge phase

					//Intro to demon
					puts("You walk though the black door. Surrounding you is a lake of fire");
					puts("From the fire a monsterus demon emerges. He is double your height appoximatly.");
					puts("With a fit of rage he thrusts his hand out as a teather of blood runs from his hand and is launched in your direction");
					while(dem > 0)
					{
						 if(health <= 0)
						 {
							 //When you die to the Demon
							 puts("The Demon picks you up and swallows you whole!");
							 return 2;
						 }

							printf("Your Health: %d\n",health);
							printf("Your Range: %d\n",wepr);
							printf("Demon Health: %d\n",dem);
							printf("Demon Distance: %d\n",demD);
							puts("1 - Attack!\n2 - Dodge Left\n3 - Dodge Right\n4 - Fall Back\n5 - Move Forward\n");
							scanf("%d",&op);
							switch (op)
							{
								case 1: //Attack
									//Sword Attack
									if(wepr == 10)
									{
										//If you are too far away
										if(demD > 10)
										{
											puts("Too far away!");
											break;
										}
										//If you are about to kill the knight
										if(dem < 21)
										{
											puts("You make 1 final thrust at the Demon.\nYour swords fire and darkness envelop the Demon and his chest burts open!");
											dem -= *wepP;
											*wepP += 20;
											break;
										}
										//normally hitting the knight
										else
										{
											puts("You quickly attack the demon!");
											dem -= *wepP;
											dodge = 0;
										}
									}
									//Knife Attack
									else if(wepr == 5)
									{
										//If you are too close to the wizard
										if(demD > wepr)
										{
											puts("Too far away!");
											break;
										}
										//Final strike
										if(dem < 6)
										{
											//Killing the demon with knife
											puts("You dodge the demons attack and finally jump onto his back!");
											puts("As the demon yells out in anger you make one last slash through the back of his neck.");
											puts("The demon falls to the floor!");
											dem -= *wepP;
											*wepP += 20;
											break;
										}
										else
										{
											puts("You stab with your knife!");
											dodge = 0;
											if(build == 3)
											{
												dem -= (*wepP * 8);
												build = 0;
											}
											else
											{
												 build++;
												 dem -= *wepP;
												 demD = 5;
											 }
										 }
									}
									//bow attack
									else if(wepr == 30)
									{
										//If you are too close to the demon
										if(demD < wepr)
										{
											puts("Too close!");
											puts("The Demon picks you up and throws you across the room!");
											health -= 15;
											demD += 5;
											break;
										}
										//Killing the demon
										if(dem < 11)
										{
											puts("You sweep around the demon and cut flaming arrows in his back.");
											puts("From your arrows the darkness surrounds the demon holding him down.");
											puts("You bury as meny arrows into it as fast as possible.The demon falls to the floor.");
											dem -= *wepP;
											*wepP += 20;
											break;
										}
										//Normal attack
										else
										{
											puts("You quick lauch a swarm of arrows towards the Demon");
											dem -= *wepP;
											dodge = 0;
										}
									}
									//staff attack
									else if(wepr == 50)
									{
										if(demD < wepr)
										{
											puts("Too close!");
											puts("The Demon picks you up and throws you across the room!");
											health -= 15;
											demD += 15;
											break;
										}
										//Casting phase
										if(att == 1)
										{
											//Killing the demon
											if(dem < 51)
											{
												//kill dialog
												puts("You cast a black fireball from your staff");
												puts("You launch the fireball from your and it consumes the demon");
												puts("The demon falls to the floor at your feet. Darkness bleeding from the demon.");
												dem -= *wepP;
												*wepP += 20;
											}
											//Hitting the demon
											else
											{
												att = 0;
												puts("You hurl a fireball from your staff!");
												dem -= *wepP;
												demD -= 10;
												dodge = 0;
											}
										}
										//Charging phase
										else
										{
											 puts("You start speaking an ancient language and your staff starts to glow!");
											 att = 1;
										}
									}
									break;
								case 2:
									puts("You roll to the left!");
									dodge = 1;
									break;
								case 3:
									 puts("You roll to the right!");
									 dodge = 1;
									 break;
								case 4:
									puts("You fall back!");
									demD += 10;
									break;
								 case 5:
									 puts("You move closer!");
									 demD -= 5;
									 break;
								default:
								 if(dodge == 0)
								 {
									 puts("The Demon Slams his fists into the ground narrowly missing you");
									 demA = 0;
								 }
								 else
								 {
									puts("The Demon Slams his fists down crushing you!");
									health -= 40;
									demA = 0;
								}
							} //End of switch statement

							if(demA == 1)
							{
								if(dodge == 0)
								{
									puts("The Demon swipes his hand at you and throws you across the room");
									health -= 20;
									demA = 0;
								}
								else if(dodge == 1)
								{
									puts("The demons attack missed!");
									dodge = 0;
									demA = 0;
								}
							}
							else if(demA == 0 && dem > 0)
							{
								puts("The Demon gets ready to attack!");
								demA = 1;
							}

							if(dem <= 0)
							{
								puts("The demons eyes glow a deep red");
							}

					}

					return 0;

}

int ang(int health,int* wepP,int wepr) // lightning
{

					 int att = 0; //Used for angel class charged attack
					 int op;
					 int build = 0;
					 int dodge = 0; //determines if the angel attack is going to hit
					 //Angel stats
					 int ang = 300;
					 int angR = 20;
					 int angD = 40;
					 int angA = 0; //determines the angel attack and charge phase

						 //Intro to angel
						 puts("Then the blackness of the shrine is explodes into light.");
						 puts("An armored angel shoots down from the ceiling and lands infront of you");
						 puts("He holds his sword of light and prepares to attack you");
						 while(ang > 0)
						 {
								if(health <= 0)
								{
									//When you die to the Angel
									puts("The Angel hits you with his sword and you explode in a ball of light!");
									return 2;
								}

								 printf("Your Health: %d\n",health);
								 printf("Your Range: %d\n",wepr);
								 printf("Angel Health: %d\n",ang);
								 printf("Angel Distance: %d\n",angD);
								 puts("1 - Attack!\n2 - Dodge Left\n3 - Dodge Right\n4 - Fall Back\n5 - Move Forward\n");
								 scanf("%d",&op);
								 switch (op)
								 {
									 case 1: //Attack
										 //Sword Attack
										 if(wepr == 10)
										 {
											 //If you are too far away
											 if(angD > 10)
											 {
												 puts("Too far away!");
												 break;
											 }
											 //If you are about to kill the knight
											 if(ang < 21)
											 {
												 puts("You swing your sword striking the angel.");
												 puts("Their body burst opens the in a ball of light.");
												 puts("The shrine then swings back to normal.");
												 puts("The Bonfire is then put out.");
												 ang -= *wepP;
												 break;
											 }
											 //normally hitting the knight
											 else
											 {
												 puts("You quickly attack the angel!");
												 ang -= *wepP;
												 dodge = 0;
											 }
										 }
										 //Knife Attack
										 else if(wepr == 5)
										 {
											 //If you are too close to the wizard
											 if(angD > wepr)
											 {
												 puts("Too far away!");
												 break;
											 }
											 //Final strike
											 if(ang < 6)
											 {
												 //Killing the demon with knife
												 puts("You throw your knife at the angel piercing his chest.");
												 puts("His chest explodes full of light!");
												 break;
											 }
											 else
											 {
												 puts("You stab with your knife!");
												 dodge = 0;
												 if(build == 3)
												 {
													 ang -= (*wepP * 8);
													 build = 0;
												 }
												 else
												 {
														build++;
														ang -= *wepP;
														angD = 5;
													}
												}
										 }
										 //bow attack
										 else if(wepr == 30)
										 {
											 //If you are too close to the angel
											 if(angD < wepr)
											 {
												 puts("Too close!");
												 puts("The angel lifts you and throws you down");
												 health -= 15;
												 angD += 5;
												 break;
											 }
											 //Killing the angel
											 if(ang < 11)
											 {
												 puts("You relase your last arrow and it pierces the angels armor.");
												 puts("Light bleeds from your arrow as the angel falls to the floor");
												 ang -= *wepP;
												 *wepP += 20;
												 break;
											 }
											 //Normal attack
											 else
											 {
												 puts("You quick lauch a swarm of arrows towards the Angel");
												 ang -= *wepP;
												 dodge = 0;
											 }
										 }
										 //staff attack
										 else if(wepr == 50)
										 {
											 if(angD < wepr)
											 {
												 puts("Too close!");
												 puts("The angel lifts you and throws you down");
												 health -= 15;
												 angD += 15;
												 break;
											 }
											 //Casting phase
											 if(att == 1)
											 {
												 //Killing the demon
												 if(ang < 51)
												 {
													 //kill dialog
													 puts("You call upon stream of fire.");
													 puts("It flows from your staff and fires threw the angel!");
													 puts("The angel falls to the ground");
													 ang -= *wepP;
												 }
												 //Hitting the angel
												 else
												 {
													 att = 0;
													 puts("You hurl a fireball from your staff!");
													 ang -= *wepP;
													 angD -= 10;
													 dodge = 0;
												 }
											 }
											 //Charging phase
											 else
											 {
													puts("You start speaking an ancient language and your staff starts to glow!");
													att = 1;
											 }
										 }
										 break;
									 case 2:
										 puts("You roll to the left!");
										 dodge = 1;
										 break;
									 case 3:
											puts("You roll to the right!");
											dodge = 1;
											break;
									 case 4:
										 puts("You fall back!");
										 angD += 10;
										 break;
										case 5:
											puts("You move closer!");
											angD -= 5;
											break;
									 default:
										if(dodge == 0)
										{
											//Miss
											puts("");
											angA = 0;
										}
										else
										{
											//Hit
										 puts("");
										 health -= 40;
										 angA = 0;
									 }
								 } //End of switch statement

								 if(angA == 1)
								 {
									 if(dodge == 0)
									 {
										 puts("The angel catches you with its sword");
										 health -= 20;
										 angA = 0;
									 }
									 else if(dodge == 1)
									 {
										 puts("The angel strikes at you barely missing you");
										 dodge = 0;
										 angA = 0;
									 }
								 }
								 else if(angA == 0 && ang > 0)
								 {
									 puts("The Angel gets ready to attack!");
									 angA = 1;
								 }

								 if(ang <= 0)
								 {
									 puts("The angel slowly fades....");
								 }

						 }

		return 0;
}

void dead(void)
{
 puts("YOU DIED");
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
        puts("");
}

int sumRandomArray(int* ptr, int size)
{
        int sum = 0;
        int i;
        for(i = 0; i < size; i++)
        {
                sum += *ptr;
                ptr++;
        }
        return sum;
}


void GameRules()
{
                 printf("You enter a room and you found a huge screens which surround the four walls of the room. The room was dark and cold. Suddenly, you start to hear noises. You looked at the screen and you saw bunch of crows coming out of the screen. You tried to open the door but it's locked and there's no way out. \n\n");
                 printf("-You hear a voice and it said- You will be presented with a word to be guessed also known as the secret word of the dashes\n");
                 printf("-Guess letters none at a time\n");
                 printf("-You will have 3 letter guess\n");
                 printf("-Each time a letter is guessed,\n if it is in the word it will be placed in the dash word\n");
                 printf("-The dash word will be presented each time\n");
                 printf("-After guessing 3 letters , you will have the opportunity to guess the word\n");
                 printf("If you don't guess it right then you will die \n");
}
void LowerCaseWord(char word[])
{                                                                                                                               int length=strlen(word);
        int i;
        for(i=0;i<length;i++)
        word[i]=tolower(word[i]);
}
void PlayAgain(int *againPtr)
{                                                                                                                               int val;
        printf("\nDo you wanna play again? You might be able to go back to life\n");                                            printf("Enter (0) to QUIT, Any other number to Continue:");
        scanf("%d",&val);                                                                                                       *againPtr=val;
}
void CreateSecretWord(char solution[],char secretword[])
{
                int length=strlen(solution);
                int i;
                for(i=0;i<length;i++)
                secretword[i]='-';
                secretword[length]='\0';
}
void GetTheLetterGuess(char letterGussed[],char *letterPtr,int *numPtr)
{                                                                                                                                       letterGussed[*numPtr]=tolower(*letterPtr);
                (*numPtr)=(*numPtr)+1;
                letterGussed[*numPtr]='\0';
}
void ReplaceDash(char solution[],char secretword[],char letter)
{
                int length=strlen(solution);
                int i,cnt=0;
                for(i=0;i<length;i++)
                {

                        if(solution[i]==letter)

                {

                        secretword[i]=letter;

                        cnt++;
                }

}
                                if(cnt==0)

                                        printf("\nThe letter %c is NOT in the word !",letter);
                                else

                                        printf("\nThis letter %c is in the word!\n",letter);
                                        printf("\n***************************************************************************************\n");

}
void DidYouWin(char solution[],char guess[])
{
        if(strcmp(solution,guess)==0)
        printf("\nYou guessed the right word and won that round,congratulations !\n");
        else
        printf("\nYou guessed the wrong word and lost that round! HAHAHAHAHAHA YOU'RE GONNA DIE.... Crows starts attacking you and you cry in pain\n");
}
void PlayOneGame(char solution[],char secretword[])
{
         char letterGuessed[MAXGUESSES+1];
         char letterPtr;
         int numPtr=0;
         char letter;
         char guess[WORDSIZE+1];
         int i;
         letterGuessed[0]='\0';
         for(i=0;i<MAXGUESSES;i++)
         {
                printf("\nHere are the letters guessed so far:%s",letterGuessed);
                printf("\n\n %s\n\n",secretword);
                printf("Enter a letter you think is in the word:");
                fflush(stdin);
                scanf("%c",&letterPtr);
                letter=tolower(letterPtr);
                ReplaceDash(solution,secretword,letter);
                GetTheLetterGuess(letterGuessed,&letterPtr,&numPtr);
         }
        printf("________________________________________________________________________\n");
        printf("\nYou have guessed 3 letters, now it is time to guess the word\n");
        printf(" %s",secretword);
        printf("\nEnter your guess for the word:");
        scanf("%s",guess);
        LowerCaseWord(guess);
        DidYouWin(solution,guess);
}


void wordScramble(int *gameScore)
{
	FILE *reader;
	FILE *writer;
	char scrambled[10], unscrambled[10], guess[10];

	if((reader = fopen("room14input.txt", "r")) == NULL)
	{
		puts("File not found");
	}
	else
	{
		fscanf(reader, "%s%s", scrambled, unscrambled);
		while(!feof(reader))
		{
			printf("1st Word: %s\n", scrambled);
			printf("Your guess?: ");
			scanf(" %s", guess);
			
			if(strcmp(guess, unscrambled) == 0)
			{
				puts("Correct!");
				*gameScore += 25;
				fscanf(reader, "%s%s", scrambled, unscrambled);
				printf("2nd Word: %s\n", scrambled);
				printf("Your guess?: ");
				scanf(" %s", guess);

				if(strcmp(guess, unscrambled) == 0)
				{
					printf("Correct!\n");
					*gameScore += 25;
					fscanf(reader, "%s%s", scrambled, unscrambled);
					printf("3rd Word: %s\n", scrambled);
					printf("Your guess?: ");
					scanf(" %s", guess);
					if(strcmp(guess, unscrambled) == 0)
					{
						*gameScore += 25;
						puts("you win and you see the extraction point ahead!");
						break;						
					}
				}
				else
				{
					puts("You lose, back to the island you go");
				}
			}
			else
			{
				puts("You lose, back to the island you go");
			}
			break;
		}
	}
	fclose(reader);
}


void fightSystem(int *hp, int *machetePower)
{
	int bearHP = 100;
	int bearPower = 80;
	int choice;
	printf("bearHP: %d\nbearPower: %d\nmachetePower: %d\n", bearHP, bearPower, *machetePower);

	Menu:
	puts("Choose from the following options.\n");
	puts("1. Attack\n2. Run Away");
	scanf("%d", &choice);

	switch(choice)
	{
		case 1:
			printf("Machete Power: %d\n", *machetePower);
			puts("You've chosen to attack.");
			bearHP -= *machetePower;
			printf("Bear HP: %d\n", bearHP);
			printf("User HP: %d\n", *hp);

			if(bearHP <= 0)
			{
				puts("You actually killed the bear\n");
				break;
			}

			if(*hp > 0)
			{
				puts("The bear attacks back!\n");
				*hp -= bearPower;
				if(*hp > 0)
				{
					puts("You survived the attack");
					printf("Your HP: %d\n", *hp);
					printf("Bear HP: %d\n", bearHP);
					goto Menu;
				}
				else
				{
					puts("Bear wins");
					break;
				}
				break;
			}

		case 2:
			puts("Ruuuuuuuuun!");
			break;

		default:
			break;
	}

}

void castaway(void)
{
    char phrase1[20], phrase2[20], phrase3[20];
    int i, x;
    double a, b, correct, guess;
    puts("This is your life now, we got nothing but time...");
    puts("You have 3 chances to get this right! if you don't....nothing really happens");
    for(i = 0; i < 3; i++)
    {
        puts("Enter 2 numbers: ");
        scanf(" %lf %lf", &a, &b);
        printf("a = %.2lf\nb = %.2lf\n", a, b);
        puts("Square the sum of those two numbers, add 3, then square that number, what do you get?");
        correct = pow((pow(a,b)+3),2);
        puts("Your guess?: ");
        scanf(" %lf", &guess);
        if(correct == guess)
        {
            puts("correct!");
        }
        else
        {
            puts("WRONG");
            break;
        }
    }
}


