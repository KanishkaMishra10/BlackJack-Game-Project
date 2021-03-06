

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>                //Used for srand((unsigned) time(NULL)) command
 

//Global Variables
int k;
int l;
int d;
int won;
int loss;
int cash = 500;
int bet;
int random_card;
int player_total=0;
int dealer_total;
char choice3;
 
//Function Prototypes
int clubcard(void);      //Displays Club Card Image
int diamondcard(void);   //Displays Diamond Card Image
int heartcard(void);     //Displays Heart Card Image
int spadecard(void);     //Displays Spade Card Image
int randcard(void);      //Generates random card
int betting(void);       //Asks user amount to bet
void asktitle(void);     //Asks user to continue
void rules(void);        //Prints "Rules of Vlad's Blackjack" menu
void play(void);         //Plays game
void dealer(void);       //Function to play for dealer AI
void stay(void);         //Function for when user selects 'Stay'
void cash_test(void);    //Test for if user has cash remaining in purse
void askover(void);      //Asks if user wants to continue playing
 
//Main Function
int main(void)
{
    int choice1;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n              222                111                            ");
    printf("\n            222 222            11111                              ");
    printf("\n           222   222          11 111                            ");
    printf("\n                222              111                               ");
    printf("\n               222               111                           ");
    printf("\n");
    printf("\n♣️♣️♣️♣️♣️     ♠️♠️                   ♦️♦️          ❤️❤️❤️❤️❤️   ♣️      ♣️                ");
    printf("\n♣️      ♣️      ♠️♠️                 ♦️    ♦️       ❤️            ♣️     ♣️              ");
    printf("\n♣️      ♣️      ♠️♠️                ♦️       ♦️     ❤️            ♣️   ♣️               ");
    printf("\n♣️♣️♣️♣️♣️      ♠️♠️               ♦️  ♦️♦️  ♦️     ❤️            ♣️ ♣️              ");
    printf("\n♣️      ♣️      ♠️♠️              ♦️ ♦️♦️♦️♦️ ♦️    ❤️            ♣️   ♣️               ");
    printf("\n♣️      ♣️      ♠️♠️             ♦️             ♦️   ❤️            ♣️    ♣️               ");
    printf("\n♣️       ♣️     ♠️♠️            ♦️               ♦️  ❤️            ♣️      ♣️             ");
    printf("\n♣️♣️♣️♣️♣️      ♠️♠️♠️♠️♠️♠️  ♦️                 ♦️ ❤️❤️❤️❤️❤️   ♣️        ♣️            ");
    printf("\n");
    printf("\n                        21                                   ");
     
    printf("\n   ♦️♦️♦️♦️♦️♦️♦️♦️  ❤️❤️         ♣️♣️♣️♣️♣️     ♠️      ♠️                ");
    printf("\n        ♦️♦️        ❤️    ❤️       ♣️              ♠️    ♠️              ");
    printf("\n        ♦️♦️       ❤️      ❤️      ♣️              ♠️   ♠️               ");
    printf("\n        ♦️♦️      ❤️ ❤️❤️❤️ ❤️     ♣️              ♠️ ♠️              ");
    printf("\n        ♦️♦️      ❤️ ❤️❤️❤️❤️ ❤️   ♣️              ♠️  ♠️              ");
    printf("\n        ♦️♦️     ❤️             ❤️  ♣️              ♠️    ♠️               ");
    printf("\n    ♦️  ♦️♦️    ❤️               ❤️ ♣️              ♠️      ♠️             ");
    printf("\n    ♦️♦️♦️♦️    ❤️                ❤️ ♣️♣️♣️♣️♣️    ♠️        ♠️            ");
    printf("\n");
    printf("\n         222                     111                         ");
    printf("\n        222                      111                         ");
    printf("\n       222                       111                         ");
    printf("\n      222222222222222      111111111111111                       ");
    printf("\n      2222222222222222    11111111111111111                         ");
    printf("\n");
    printf("\n");
     
    asktitle();
     
    printf("\n");
    printf("\n");
    system("pause");
    return(0);
} //end program
 
void asktitle() // Function for asking player if they want to continue
{
    char choice1;
    int choice2;
     
     printf("\n                 Are You Ready?");
     printf("\n                ----------------");
     printf("\n                      (Y/N)\n                        ");
     scanf("\n%c",&choice1);
 
    while((choice1!='Y') && (choice1!='y') && (choice1!='N') && (choice1!='n')) // If invalid choice entered
    {
        printf("\n");
        printf("Incorrect Choice. Please Enter Y for Yes or N for No.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'Y') || (choice1 == 'y')) // If yes, continue. Prints menu.
    {
            printf("\nEnter 1 to Begin the Greatest Game Ever Played.");
            printf("\nEnter 2 to See a Complete Listing of Rules.");
            printf("\nEnter 3 to Exit Game. (Not Recommended)");
            printf("\nChoice: ");
            scanf("%d", &choice2); // Prompts user for choice
            if((choice2<1) || (choice2>3)) // If invalid choice entered
            {
                printf("\nIncorrect Choice. Please enter 1, 2 or 3\n");
                scanf("%d", &choice2);
            }
            switch(choice2) // Switch case for different choices
            {
                case 1: // Case to begin game
                    
                   play();
                                       
                   break;
                    
                case 2: // Case to see rules
                  
                   rules();
                   break;
                    
                case 3: // Case to exit game
                   printf("\nYour day could have been perfect.");
                   printf("\nHave an almost perfect day!\n\n");
                   system("pause");
                   exit(0);
                   break;
                    
                default:
                   printf("\nInvalid Input");
            } // End switch case
    } // End if loop
    
             
 
    else if((choice1 == 'N') || (choice1 == 'n')) // If no, exit program
    {
        printf("\nYour day could have been perfect.");
        printf("\nHave an almost perfect day!\n\n");
        exit(0);
    }
     
    return;
} // End function
 
void rules() //Prints "Rules of Blackjack" list
{
     char choice1;
     int choice2;
      
     printf("\n           RULES of BLACKJACK");
     printf("\n          ---------------------------");
     printf("\nI.");
     printf("\n       You shall not question the odds of this game.");
     printf("\n      ♣️ This program generates cards at random.");
     printf("\n      ♦️ If you keep losing, you are very unlucky!\n");
      
     printf("\nII.");
     printf("\n     Each card has a value.");
     printf("\n      ♠️ Number cards 1 to 10 hold a value of their number.");
     printf("\n      ♦️ J, Q, and K cards hold a value of 10.");
     printf("\n      ♣️ Ace cards hold a value of 11 or 1 which decides depending on your total.");
     printf("\n     The goal of this game is to reach a card value total of 21.\n");
      
     printf("\nIII.");
     printf("\n     After the dealing of the first two cards, YOU must decide whether to HIT or STAY.");
     printf("\n      ♠️ Staying will keep you safe, hitting will add a card.");
     printf("\n     Because you are competing against the dealer, you must beat his hand.");
     printf("\n     BUT BEWARE!.");
     printf("\n      ♦️ If your total goes over 21, you will LOSE!.");
     printf("\n     But the world is not over, because you can always play again.\n");
     printf("\n♠️❤️♣️ YOUR RESULTS ARE RECORDED AND FOUND IN SAME FOLDER AS PROGRAM ♣️❤️♠️\n");
     printf("\nWould you like to go the previous screen? (I will not take NO for an answer)");
     printf("\n                  (Y/N)\n                    ");
     scanf("\n%c",&choice1);
      
     while((choice1!='Y') && (choice1!='y') && (choice1!='N') && (choice1!='n')) // If invalid choice entered
    {
        printf("\n");
        printf("Incorrect Choice. Please Enter Y for Yes or N for No.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'Y') || (choice1 == 'y')) // If yes, continue. Prints menu.
    {
          
            asktitle();
    } // End if loop
    
             
 
    else if((choice1 == 'N') || (choice1 == 'n')) // If no, convinces user to enter yes
    {
      
        printf("\n                 I told you so.\n");
        asktitle();
    }
     
    return;
} // End function
 
int clubcard() //Displays Club Card Image
{
     
     
    srand((unsigned) time(NULL)); //Generates random seed for rand() function
    k=rand()%13+1;
     
    if(k<=9) //If random number is 9 or less, print card with that number
    {
    //Club Card
    printf("-----------\n");
    printf("|♣️       |\n");
    printf("|         |\n");
    printf("|   %d     |\n", k);
    printf("|         |\n");
    printf("|       ♣️|\n");
    printf("-----------\n");
    }
     
     
    if(k==10) //If random number is 10, print card with J (Jack) on face
    {
    //Club Card
    printf("-----------\n");
    printf("|♣️       |\n");
    printf("|         |\n");
    printf("|    J    |\n");
    printf("|         |\n");
    printf("|       ♣️|\n");
    printf("-----------\n");
    }
     
     
    if(k==11) //If random number is 11, print card with A (Ace) on face
    {
    //Club Card
    printf("-----------\n");
    printf("|♣️       |\n");
    printf("|         |\n");
    printf("|    A    |\n");
    printf("|         |\n");
    printf("|       ♣️|\n");
    printf("-----------\n");
    if(player_total<=10) //If random number is Ace, change value to 11 or 1 depending on dealer total
         {
             k=11;
         }
          
         else
         {
 
             k=1;
         }
    }
     
     
    if(k==12) //If random number is 12, print card with Q (Queen) on face
    {
    //Club Card
    printf("-----------\n");
    printf("|♣️       |\n");
    printf("|         |\n");
    printf("|    Q    |\n");
    printf("|         |\n");
    printf("|       ♣️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
     
     
    if(k==13) //If random number is 13, print card with K (King) on face
    {
    //Club Card
    printf("-----------\n");
    printf("|♣️       |\n");
    printf("|         |\n");
    printf("|    K    |\n");
    printf("|         |\n");
    printf("|       ♣️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
    return k;
}// End function
 
int diamondcard() //Displays Diamond Card Image
{
     
     
    srand((unsigned) time(NULL)); //Generates random seed for rand() function
    k=rand()%13+1;
     
    if(k<=9) //If random number is 9 or less, print card with that number
    {
    //Diamond Card
    printf("-----------\n");
    printf("|♦️       |\n");
    printf("|         |\n");
    printf("|    %d    |\n", k);
    printf("|         |\n");
    printf("|       ♦️|\n");
    printf("-----------\n");
    }
     
    if(k==10) //If random number is 10, print card with J (Jack) on face
    {
    //Diamond Card
    printf("-----------\n");
    printf("|♦️       |\n");
    printf("|         |\n");
    printf("|    J    |\n");
    printf("|         |\n");
    printf("|       ♦️|\n");
    printf("-----------\n");
    }
     
    if(k==11) //If random number is 11, print card with A (Ace) on face
    {
    //Diamond Card
    printf("-----------\n");
    printf("|♦️       |\n");
    printf("|         |\n");
    printf("|    A    |\n");
    printf("|         |\n");
    printf("|       ♦️|\n");
    printf("-----------\n");
    if(player_total<=10) //If random number is Ace, change value to 11 or 1 depending on dealer total
         {
             k=11;
         }
          
         else
         {
             k=1;
         }
    }
     
    if(k==12) //If random number is 12, print card with Q (Queen) on face
    {
    //Diamond Card
    printf("-----------\n");
    printf("|♦️       |\n");
    printf("|         |\n");
    printf("|    Q    |\n");
    printf("|         |\n");
    printf("|       ♦️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
     
    if(k==13) //If random number is 13, print card with K (King) on face
    {
    //Diamond Card
    printf("-----------\n");
    printf("|♦️       |\n");
    printf("|         |\n");
    printf("|    K    |\n");
    printf("|         |\n");
    printf("|       ♦️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
    return k;
}// End function
 
int heartcard() //Displays Heart Card Image
{
     
     
    srand((unsigned) time(NULL)); //Generates random seed for rand() function
    k=rand()%13+1;
     
    if(k<=9) //If random number is 9 or less, print card with that number
    {
    //Heart Card
    printf("-----------\n");
    printf("|❤️       |\n");
    printf("|         |\n");
    printf("|    %d    |\n", k);
    printf("|         |\n");
    printf("|       ❤️|\n");
    printf("-----------\n");
    }
     
    if(k==10) //If random number is 10, print card with J (Jack) on face
    {
    //Heart Card
    printf("-----------\n");
    printf("|❤️       |\n");
    printf("|         |\n");
    printf("|    J    |\n");
    printf("|         |\n");
    printf("|       ❤️|\n");
    printf("-----------\n");
    }
     
    if(k==11) //If random number is 11, print card with A (Ace) on face
    {
    //Heart Card
    printf("-----------\n");
    printf("|❤️       |\n");
    printf("|         |\n");
    printf("|    A    |\n");
    printf("|         |\n");
    printf("|       ❤️|\n");
    printf("-----------\n");
    if(player_total<=10) //If random number is Ace, change value to 11 or 1 depending on dealer total
         {
             k=11;
         }
          
         else
         {
             k=1;
         }
    }
     
    if(k==12) //If random number is 12, print card with Q (Queen) on face
    {
    //Heart Card
    printf("-----------\n");
    printf("|❤️       |\n");
    printf("|         |\n");
    printf("|    Q    |\n");
    printf("|         |\n");
    printf("|       ❤️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
     
    if(k==13) //If random number is 13, print card with K (King) on face
    {
    //Heart Card
    printf("-----------\n");
    printf("|❤️       |\n");
    printf("|         |\n");
    printf("|    K    |\n");
    printf("|         |\n");
    printf("|       ❤️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
    return k;
} // End Function
 
int spadecard() //Displays Spade Card Image
{
     
     
    srand((unsigned) time(NULL)); //Generates random seed for rand() function
    k=rand()%13+1;
     
    if(k<=9) //If random number is 9 or less, print card with that number
    {
    //Spade Card
    printf("-----------\n");
    printf("|♠️       |\n");
    printf("|         |\n");
    printf("|    %d    |\n", k);
    printf("|         |\n");
    printf("|       ♠️|\n");
    printf("---------\n");
    }
     
    if(k==10) //If random number is 10, print card with J (Jack) on face
    {
    //Spade Card
    printf("-----------\n");
    printf("|♠️       |\n");
    printf("|         |\n");
    printf("|    J    |\n");
    printf("|         |\n");
    printf("|       ♠️|\n");
    printf("-----------\n");
    }
     
    if(k==11) //If random number is 11, print card with A (Ace) on face
    {
    //Spade Card
    printf("-----------\n");
    printf("|♠️       |\n");
    printf("|         |\n");
    printf("|    A    |\n");
    printf("|         |\n");
    printf("|       ♠️|\n");
    printf("-----------\n");
        if(player_total<=10) //If random number is Ace, change value to 11 or 1 depending on dealer total
            {
                k=11;
            }
          
        else
            {
                k=1;
            }
    }
     
    if(k==12) //If random number is 12, print card with Q (Queen) on face
    {
    //Spade Card
    printf("-----------\n");
    printf("|♠️       |\n");
    printf("|         |\n");
    printf("|    Q    |\n");
    printf("|         |\n");
    printf("|       ♠️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
     
    if(k==13) //If random number is 13, print card with K (King) on face
    {
    //Spade Card
    printf("-----------\n");
    printf("|♠️       |\n");
    printf("|         |\n");
    printf("|    K    |\n");
    printf("|         |\n");
    printf("|       ♠️|\n");
    printf("-----------\n");
    k=10; //Set card value to 10
    }
    return k;
} // End Function
 
int randcard() //Generates random card
{
      
                
     srand((unsigned) time(NULL)); //Generates random seed for rand() function
     random_card = rand()%4+1;
      
     if(random_card==1)
     {
         clubcard();
         l=k;
     }
      
     if(random_card==2)
     {
         diamondcard();
         l=k;
     }
      
     if(random_card==3)
     {
         heartcard();
         l=k;
     }
          
     if(random_card==4)
     {
         spadecard();
         l=k;
     }
     return l;
} // End Function
 
void play() //Plays game
{
      
     int p=0; // holds value of player_total
     int i=1; // counter for asking user to hold or stay (aka game turns)
      
     cash = cash;
     cash_test();
     printf("\nCash: $%d\n",cash); //Prints amount of cash user has
     randcard(); //Generates random card
     player_total = p + l; //Computes player total
     p = player_total;
     printf("\nYour Total is %d\n", p); //Prints player total
     dealer(); //Computes and prints dealer total
     betting(); //Prompts user to enter bet amount
        
     while(i<=21) //While loop used to keep asking user to hit or stay at most twenty-one times
                  //  because there is a chance user can generate twenty-one consecutive 1's
     {
         if(p==21) //If user total is 21, win
         {
             printf("\nUnbelievable! You Win!\n");
             won = won+1;
             cash = cash+bet;
             printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
             dealer_total=0;
             askover();
         }
      
         if(p>21) //If player total is over 21, loss
         {
             printf("\nWoah Buddy, You Went WAY over.\n");
             loss = loss+1;
             cash = cash - bet;
             printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
             dealer_total=0;
             askover();
         }
      
         if(p<=21) //If player total is less than 21, ask to hit or stay
         {
             printf("\n\nWould You Like to Hit or Stay?");
              
             scanf("%c", &choice3);
             while((choice3!='H') && (choice3!='h') && (choice3!='S') && (choice3!='s')) // If invalid choice entered
             {
                 printf("\n");
                 printf("Please Enter H to Hit or S to Stay.\n");
                 scanf("%c",&choice3);
             }
 
 
             if((choice3=='H') || (choice3=='h')) // If Hit, continues
             {
                 randcard();
                 player_total = p + l;
                 p = player_total;
                 printf("\nYour Total is %d\n", p);
                 dealer();
                  if(dealer_total==21) //Is dealer total is 21, loss
                  {
                      printf("\nDealer Has the Better Hand. You Lose.\n");
                      loss = loss+1;
                      cash = cash - bet;
                      printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
                      dealer_total=0;
                      askover();
                  }
      
                  if(dealer_total>21) //If dealer total is over 21, win
                  {
                      printf("\nDealer Has Went Over!. You Win!\n");
                      won = won+1;
                      cash = cash+bet;
                      printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
                      dealer_total=0;
                      askover();
                  }
             }
             if((choice3=='S') || (choice3=='s')) // If Stay, does not continue
             {
                printf("\nYou Have Chosen to Stay at %d. Wise Decision!\n", player_total);
                stay();
             }
          }
             i++; //While player total and dealer total are less than 21, re-do while loop
     } // End While Loop
} // End Function
 
void dealer() //Function to play for dealer AI
{
     int z;
      
     if(dealer_total<17)
     {
      srand((unsigned) time(NULL) +1 ); //Generates random seed for rand() function
      z=rand()%13+1;
      if(z<=10) //If random number generated is 10 or less, keep that value
      {
         d=z;
          
      }
      
      if(z>11) //If random number generated is more than 11, change value to 10
      {
         d=10;
      }
      
      if(z==11) //If random number is 11(Ace), change value to 11 or 1 depending on dealer total
      {
         if(dealer_total<=10)
         {
             d=11;
         }
          
         else
         {
             d=1;
         }
      }
     dealer_total = dealer_total + d;
     }
           
     printf("\nThe Dealer Has a Total of %d", dealer_total); //Prints dealer total
      
} // End Function
 
void stay() //Function for when user selects 'Stay'
{
     dealer(); //If stay selected, dealer continues going
     if(dealer_total>=17)
     {
      if(player_total>=dealer_total) //If player's total is more than dealer's total, win
      {
         printf("\nUnbelievable! You Win!\n");
         won = won+1;
         cash = cash+bet;
         printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
         dealer_total=0;
         askover();
      }
      if(dealer_total>21) //If dealer's total is more than 21, win
      {
         printf("\nUnbelievable! You Win!\n");
         won = won+1;
         cash = cash+bet;
         printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
         dealer_total=0;
         askover();
      }
      if(player_total<dealer_total && dealer_total<21 || dealer_total==21) //If player's total is less than dealer's total, loss
      {
        printf("\nDealer Has the Better Hand. You Lose.\n");
        loss = loss+1;
        cash = cash - bet;
        printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
        dealer_total=0;
        askover();
      }
     }
     else
     {
         int a=0;
         printf("\n\nWould You Like to Hit or Stay?");
                      
                     scanf("%c", &choice3);
                     while((choice3!='H') && (choice3!='h') && (choice3!='S') && (choice3!='s')) // If invalid choice entered
                     {
                         printf("\n");
                         printf("Please Enter H to Hit or S to Stay.\n");
                         scanf("%c",&choice3);
                     }
         
         
                     if((choice3=='H') || (choice3=='h')) // If Hit, continues
                     {
                         randcard();
                         player_total = a + l;
                         a = player_total;
                         printf("\nYour Total is %d\n", a);
                         dealer();
                          if(dealer_total==21) //Is dealer total is 21, loss
                          {
                              printf("\nDealer Has the Better Hand. You Lose.\n");
                              loss = loss+1;
                              cash = cash - bet;
                              printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
                              dealer_total=0;
                              askover();
                          }
              
                          if(dealer_total>21) //If dealer total is over 21, win
                          {
                              printf("\nDealer Has Went Over!. You Win!\n");
                              won = won+1;
                              cash = cash+bet;
                              printf("\nYou have %d Wins and %d Losses. Awesome!\n", won, loss);
                              dealer_total=0;
                              askover();
                          }
                     }
                     if((choice3=='S') || (choice3=='s')) // If Stay, does not continue
                     {
                        printf("\nYou Have Chosen to Stay at %d. Wise Decision!\n", player_total);
                        stay();
                     }
     }
      
} // End Function
 
void cash_test() //Test for if user has cash remaining in purse
{
     if (cash <= 0) //Once user has zero remaining cash, game ends and prompts user to play again
     {
        printf("You Are Bankrupt. Game Over");
        cash = 500;
        askover();
     }
} // End Function
 
int betting() //Asks user amount to bet
{
 printf("\n\nEnter Bet: $");
 scanf("%d", &bet);
 
 if (bet > cash) //If player tries to bet more money than player has
 {
        printf("\nYou cannot bet more money than you have.");
        printf("\nEnter Bet: ");
        scanf("%d", &bet);
        return bet;
 }
 else return bet;
} // End Function
 
void askover() // Function for asking player if they want to play again
{
    char choice1;
         
     printf("\nWould You Like To Play Again?");
     printf("\nPlease Enter Y for Yes or N for No\n");
     scanf("\n%c",&choice1);
 
    while((choice1!='Y') && (choice1!='y') && (choice1!='N') && (choice1!='n')) // If invalid choice entered
    {
        printf("\n");
        printf("Incorrect Choice. Please Enter Y for Yes or N for No.\n");
        scanf("%c",&choice1);
    }
 
 
    if((choice1 == 'Y') || (choice1 == 'y')) // If yes, continue.
    {
            
            play();
    }
  
    else if((choice1 == 'N') || (choice1 == 'n')) // If no, exit program
    {
        printf("\nBYE!!!!\n\n");
        
        exit(0);
    }
    return;
} // End function
 

