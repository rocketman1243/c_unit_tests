#include <stdio.h>
#include "some_code.h"
#include <string.h>

int timesTwo(int n) {
    return 2 * n;
}

// copies and pastes the name after the name
char * greetMe(char * target) {
	target = "Hi, there!";
	return target;
}
