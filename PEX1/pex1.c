/** pex1.c
* ==============================================================
 * Name: Bryson Fraelich, 14 Sep 19
 * Section:
 * Project: PEX 1 - Pigs!
 * Purpose: The program is a two-player game that uses a six
 * -sided die, where both players take turn rolling the die. If
 * a player roles a 1 then they score 0 points that round. If
 * a player roles a number greater than a 1 then it is added to
 * their overall score and they may choose to keep rolling the die.
 * A player may choose to "hold" during their turn, and their score
 * for that round will be added to their overall score. The first
 * player to reach 100 points, or more, wins.
 * Documentation Statement: I utilized the book section on strings
 * in order to remind myself how strings were gotten from the user
 * and how to compare strings for a specified value. I used
 * my book to set srand() to the clock timer, that way
 * it would truly be random.
* ==============================================================
*/

#include "pex1.h"

// 2.0 Main Function
int main(void){

    // -- Auto-Grading Section --

    // 2.0 Main Function
    printf("Pig!\n\n");

    // 2.1 Drawing the Dice
    int pips;
    printf("Enter the number of pips:\n");
    scanf("%d", &pips);
    drawDie(pips);

    // 2.3 Status of a Player's Turn
    int diceRollAuto;
    int playerAuto;
    int currentTotalAuto;
    int score0Auto;
    int score1Auto;

    printf("Enter the number of pips on the die, the player, the current total, the player 0 score, and the player 1 score\n");
    scanf(" %d %d %d %d %d", &diceRollAuto, &playerAuto, &currentTotalAuto, &score0Auto, &score1Auto);
    turnStatus(diceRollAuto, playerAuto, currentTotalAuto, score0Auto, score1Auto);

    // 2.4 Status of the Game
    gameStatus(playerAuto, score0Auto, score1Auto);

/*    // -- Actual Game --
    srand((int)time(0));    // Unique Seed
    int diceRoll = 0;       // Number between 1 & 6
    char input[20];         // Checks to see if the user input is "hold"
    int player = 0;         // Current player
    int currentTotal = 0;   // The total amount a player has during their turn, before "pigging out"
    int score0 = 0;         // Player 0's Score
    int score1 = 0;         // Player 1's Score
    bool gameState = true;  // Initial status of the Game

    // Start Game
    printf("Pig!\n\n");

    // Game Loop
    while (gameState == true) {
        int turnCounter = 0;

        // Player 0's turn
        while (diceRoll != 1 && strcmp(input, "hold") != 0) {
            printf("Do you want to roll?\n");
            scanf("%s", input);
            if (strcmp(input, "hold") != 0) {
                diceRoll = rollDie();
                drawDie(diceRoll);
                if (diceRoll != 1) {
                    currentTotal = currentTotal + diceRoll;
                } else {
                    currentTotal = 0;
                }
            } else {
                score0 = totalScore(score0, currentTotal);
            }
            if (strcmp(input, "hold") != 0) {
                turnStatus(diceRoll, player, currentTotal, score0, score1);
            }
        }

        // Switch Players
        player = 1;

        // Reset Current Score
        currentTotal = 0;

        // Increase 1 to the amount of turns taken
        ++turnCounter;

        // Current Game Scores & Status
        gameStatus(player, score0, score1);
        if (score0 >= 100 || score1 >= 100 || turnCounter >= 40) {
            gameState = false;
            player = 0;
        }

        // Resets the player turn values
        diceRoll = 0;
        strcpy(input, "aaaa");


        // Player 1's turn
        while (diceRoll != 1 && strcmp(input, "hold") != 0) {
            printf("Do you want to roll?\n");
            scanf("%s", input);
            if (strcmp(input, "hold") != 0) {
                diceRoll = rollDie();
                drawDie(diceRoll);
                if (diceRoll != 1) {
                    currentTotal = currentTotal + diceRoll;
                } else {
                    currentTotal = 0;
                }
            } else {
                score1 = totalScore(score1, currentTotal);
            }
            if (strcmp(input, "hold") != 0) {
                turnStatus(diceRoll, player, currentTotal, score0, score1);
            }
        }

        // Switch Players
        player = 0;

        // Reset Current Score
        currentTotal = 0;

        // Increase 1 to the amount of turns taken
        ++turnCounter;

        // Current Game Scores & Status
        gameStatus(player, score0, score1);
        if (score0 >= 100 || score1 >= 100 || turnCounter >= 40) {
            gameState = false;
            player = 1;
        }

        // Resets the player turn values
        diceRoll = 0;
        strcpy(input, "aaaa");
    }
*/
    return 0;
}

// Function draws the die face
void drawDie(int pips){

    if (pips == 1) {
        printf (" ------- \n");
        printf ("|       |\n");
        printf ("|   *   |\n");
        printf ("|       |\n");
        printf (" ------- \n");
    } else if (pips == 2){
        printf (" ------- \n");
        printf ("| *     |\n");
        printf ("|       |\n");
        printf ("|     * |\n");
        printf (" ------- \n");
    } else if (pips == 3) {
        printf (" ------- \n");
        printf ("| *     |\n");
        printf ("|   *   |\n");
        printf ("|     * |\n");
        printf (" ------- \n");
    } else if (pips == 4) {
        printf (" ------- \n");
        printf ("| *   * |\n");
        printf ("|       |\n");
        printf ("| *   * |\n");
        printf (" ------- \n");
    } else if (pips == 5) {
        printf (" ------- \n");
        printf ("| *   * |\n");
        printf ("|   *   |\n");
        printf ("| *   * |\n");
        printf (" ------- \n");
    } else {
        printf (" ------- \n");
        printf ("| *   * |\n");
        printf ("| *   * |\n");
        printf ("| *   * |\n");
        printf (" ------- \n");
    }
}


// Function is used to generate a random dice roll number
int rollDie(){
    int diceVal;

    diceVal = (rand() % 6) + 1;

    return diceVal;
}

// Function displays the status of the current players turn
void turnStatus(int diceRollVal, int playerNum, int currentTotalVal, int score0Val, int score1Val) {

    if (diceRollVal == 1) {
        printf("Player %d pigged out.\n", playerNum);
    } else {
        printf("Current score for player %d = %d.\n", playerNum, currentTotalVal);
    }

    if (playerNum == 0) {
        printf("Total score = %d.\n", score0Val);
    } else {
        printf("Total score = %d.\n", score1Val);
    }
}

// Function is used to display the current status of the game
void gameStatus(int playerNum, int score0Val, int score1Val) {

    // Game Status
    printf("Player 0 score: %d\n", score0Val);
    printf("Player 1 score: %d\n", score1Val);

    // Player won
    if (score0Val >= 100 || score1Val >= 100){
        printf("Player %d won!\n", playerNum);
    } else {
        // Player Turn
        printf("It is Player %d turn.\n", playerNum);
    }
}

// Function is used to update the player's current score
int totalScore(int scoreVal, int turnTotalVal){
    int updatedScore;

    updatedScore = scoreVal + turnTotalVal;

    return updatedScore;
}

























