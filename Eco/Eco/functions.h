#pragma once
using namespace std;

void greet();
void menu();

void seedRandomGenerator();
int generateDifferentRandom(int previousResult1, int previousResult2);
int random1();
int random2(int previousResult1);
int random3(int previousResult1, int previousResult2);
void generatePicture(int picture);
void generateQuestion(int question);
void displayStatus(int airQuality, int waterQuality, int speciesCount);
void applyDecision(int& airQuality, int& waterQuality, int& speciesCount, int decision, int answer);
bool isEcoSystemBalanced(int airQuality, int waterQuality, int speciesCount, int difficulty);