#include <math.h>
#include <stdbool.h>
#include "Rank.h"

int rank(long actualTime, long lastRightAnswer, bool lastAnswerRight, int rightAnswers, int wrongAnswers){

    /* EXAMPLE
    long actualTime = 1000 * 60 * 60;
    long lastRightAnswer = 3000000;
    bool lastAnswerRight = false;
    int rightAnswers = 1;
    int wrongAnswers = 3;
    */
    
    float ia = a(lastAnswerRight, actualTime, lastRightAnswer);
    float ib = b(actualTime, lastRightAnswer);
    float ic = c(rightAnswers, wrongAnswers);
    float id = d(rightAnswers);
    
    float rank = wordrank(ia, ib, ic, id);

    printf("a[%f], b[%f], c[%f], d[%f]: rank = %f\n", ia, ib, ic, id, rank);

    
    system("pause");
    return 0;
}

float a(bool lastAnswerRight, long actualTime, long lastRightAnswer){
    return 1 + (lastAnswerRight ? 0.05F : 0.1F) + pow((actualTime - lastRightAnswer)/3600000, 0.2F) * 0.01F;
}

float b(long actualTime, long lastRightAnswer){
    return pow((actualTime - lastRightAnswer)/60000.0F, 0.7F);
}

float c(int rightAnswers, int wrongAnswers){
    return 1 + pow(abs(rightAnswers - wrongAnswers), 0.2F) * ((rightAnswers - wrongAnswers < 0)?-0.03F:0.03F);
}

float d(int rightAnswers){
    return (float)pow(rightAnswers*100, 0.7F);
}

float wordrank(float a, float b, float c, float d){
    return ((float)pow(a, b + 0) + -(float)pow(c, d + 0))/2;
}