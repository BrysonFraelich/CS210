/** pex1.h
* ==============================================================
* Name: Bryson Fraelich, 14 Sep 19
* Section:
* Project: PEX 1 - Pigs!
* ==============================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#ifndef LABS_PEX1_H
#define LABS_PEX1_H

void drawDie(int pips);
int rollDie();
void turnStatus(int diceRollVal, int playerNum, int currentTotalVal, int score0Val, int score1Val);
void gameStatus(int playerNum, int score0Val, int score1Val);
int totalScore(int scoreVal, int turnTotalVal);

#endif //LABS_PEX1_H
