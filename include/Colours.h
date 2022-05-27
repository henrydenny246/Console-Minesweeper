#ifndef COLOURS_H
#define COLOURS_H

#include <stdio.h>

#define Black "\033[0;30m"
#define Red "\033[0;31m"
#define Green "\033[0;32m"
#define Yellow "\033[0;33m"
#define Blue "\033[0;34m"
#define Purple "\033[0;35m"
#define Cyan "\033[0;36m"
#define White "\033[0;37m"
#define Clear "\033[0m"

void SetCol(const char *colStr);
void ResetCol();

#endif