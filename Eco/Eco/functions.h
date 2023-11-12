#pragma once
using namespace std;

void greet();
void menu();

int random();
void generateQuestion(int question);
void displayStatus(int airQuality, int waterQuality, int speciesCount);
void applyDecision(int& airQuality, int& waterQuality, int& speciesCount, int decision);
bool isEcoSystemBalanced(int airQuality, int waterQuality, int speciesCount);