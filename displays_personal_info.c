#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stddef.h>

struct personalInfo
{
    int age;
    int yearsEmployed;
    char * fullName;
};

typedef struct personalInfo myPersonalInfo;

myPersonalInfo displaysPersonalInfo(void);

int main(void){

    myPersonalInfo personalInfoResult;
    personalInfoResult = displaysPersonalInfo();

    printf("Here is the information about you...\n");
    printf("Age: %d\n", personalInfoResult.age);
    printf("Years employed: %d\n", personalInfoResult.yearsEmployed);
    printf("Full name: %s\n", personalInfoResult.fullName);

    return 0;
};

myPersonalInfo displaysPersonalInfo(void)
{
    int ageInput, yearsEmployedInput, stringLength;
    char fullNameTemp[60];
    struct personalInfo personalInfoObject;

    printf("What is your name? ");
    scanf(" ");
    gets(fullNameTemp);
    stringLength = strlen(fullNameTemp);

    personalInfoObject.fullName = (char*)calloc(stringLength, sizeof(char));
    strcpy(personalInfoObject.fullName, fullNameTemp);

    printf("And how old are you? ");
    scanf("%d", &ageInput);
    personalInfoObject.age = ageInput;

    printf("Lastly, for how many years have you been employed? ");
    scanf("%d", &yearsEmployedInput);
    personalInfoObject.yearsEmployed = yearsEmployedInput;

    return personalInfoObject;
};
