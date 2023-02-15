#include <stdio.h>

struct Quiz
{
    char questions[100];
    char options[100];
    char select[1];
};

int main () {
    struct Quiz q1 = {"1. Who was the first Imam?", "\nA. Imam Jafar as-Sadiq A.S. \nB. George Washington \nC. Imam Ali A.S."
        };
    struct Quiz q2 = {"2. Who was the first wife of RasoolAllah SAAW?", "\nA. Umm-Kulthum \nB. Khadija A.S. \nC. Annabelle"
        };
    struct Quiz q3 = {"3. How old was the Prophet SAAW when he publicly announced himself as a Prophet?", "\nA. 12 \nB. 55 \nC. 40"
        };

//An array is created below which contains each question and its respective options. 
//This is so that a for loop can later be used to print each question and their options more efficiently.

    struct Quiz QNA[3] = {q1, q2, q3};

//The for loop below designed to print each of the three questions and their options 
// using the array above.
// The series of '#' symbols and spacing was created to improve readability for the user.

    for (int i = 0; i < 3; i++) {

        printf("\n#############################################\n");
        printf("\nQuestion: %s\n", QNA[i].questions);
        printf("%s\n", QNA[i].options);
        printf("\nPlease type in letter of corresponding answer:\n");
        scanf("%c", QNA[i].select);
        scanf("%*c");
    }

    printf("\nAnswer Key: 1. C,  2. B,  3. C\n");
    
return 0;
}