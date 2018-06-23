#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
#include "Prime.h"
#include "Rank.h"

int main(){
    
    //Word Pick Algo

    long actualTime = 1000 * 60 * 60;
    long lastRightAnswer = 3000000;
    bool lastAnswerRight = false;
    int rightAnswers = 1;
    int wrongAnswers = 3;
    
    //system("pause");
    return rank(actualTime, lastRightAnswer, lastAnswerRight, rightAnswers, wrongAnswers);
}


