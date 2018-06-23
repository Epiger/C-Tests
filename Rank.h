#include <stdbool.h>

float a(bool lastAnswerRight, long actualTime, long lastRightAnswer);

float b(long actualTime, long lastRightAnswer);

float c(int rightAnswers, int wrongAnswers);

float d(int rightAnswers);

float wordrank(float a, float b, float c, float d);

int rank(long actualTime, long lastRightAnswer, bool lastAnswerRight, int rightAnswers, int wrongAnswers);