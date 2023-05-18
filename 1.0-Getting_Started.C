/* 
* Generally when we program in C, we want to begin our code like the following
* This means that our code should start off with some kind of comment explaining things
* So do this at the start of all your files
*/

#include <stdio.h>
#include <stdlib.h>

int larger(int a, int b){
  if (a > b)
    return a; 
  return b;
}

int main(){
  int decks;
  puts("Enter a number of decks>");
  scanf("%i", &decks);
  if (decks < 1){
    puts("That is not a valid number of decks");
    return 1;
  }
  printf("There are %i cards\n", (decks * 52));

/* 
* When we have a formatted string, or something where wer want to type a variable, use printf as it is a formatted string
*/

// To run a C file, use the command gcc <filename> -o <executable_name> && (if successful) ./<executable_name>


/*
* C Doesn't have strings, so it stores characters in an array; and terminates it with the \0 character (null) character
*/

// Program to evaluate face values
  char card_name[3];
  puts("Enter the card name> ");
  scanf("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'K'){
    val = 10;
  } else if (card_name[0] == 'Q'){
    val = 10;
  }  else if (card_name[0] == 'J'){
    val = 10;
  } else if (card_name[0] == 'A'){
    val = 11;
  } else{
    val = atoi(card_name);
  }
  printf("The card value is: %i\n", val);

// Most of this stuff is self explanatory, the atoi() function turns a string (char) into it's respective number value

  if (card_name[0] == 'K'){
    val = 10;
  } else if (card_name[0] == 'Q'){
    val = 10;
  }  else if (card_name[0] == 'J'){
    val = 10;
  } else if (card_name[0] == 'A'){
    val = 11;
  } else{
    val = atoi(card_name);
  }
  // Checks if the value is 3 to 6
  if (val > 2 && val < 7){
  puts("Count has gone up");
  } else if (val == 10 || val == 'J' || val == 'A' || val== 'K'){
    puts("Count has gone down");
  }

  printf("The card value is: %i\n", val);

/* 
* Lets attempt to check if a variable equals something using the /switch/ statements
*/

  switch(card_name[0]){
    case 'K':
    case 'Q':
    case 'J':
      val = 10;
      break;
    case 'A':
      val = 11;
      break;
    default: // The case if none of the other cases
      val = atoi(card_name);
  }

/*
* Now lets take the case where we want something to happen more than once -> Using a While loop
*/
int counter = 1;
  while(counter < 11){
    printf("%i green bottles, hanging on a wall\n", counter);
    counter++;
  }

  /* 
  * Now let's do this using a simple for loop
  */

int counter_2; 
for (counter_2 = 1; counter_2 < 11; counter_2++){
    printf("%i green bottles, hanging on a wall\n", counter_2);
  }


    /*
    * Additionally, if we want to go back to the top of our loop without continuing to the end, use the (continue;) method
    */


int greatest = larger(100, 1000);
printf("%i is the greatest!", greatest);
return 0;
}

/* 
* Now let's take a look at some Functions
* Functions return some value based on their given parameter
*/
/*
int larger(int a, int b){
  if (a > b)
    return a; 
  return b;
 
}
*/
