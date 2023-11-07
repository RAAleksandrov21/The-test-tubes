#pragma once
using namespace std;

void greet();
void menu();

void displayStatus(int forestHealth, int waterQuality, int speciesCount);
void applyDecision(int& forestHealth, int& waterQuality, int& speciesCount, int decision);
bool isEcoSystemBalanced(int forestHealth, int waterQuality, int speciesCount);