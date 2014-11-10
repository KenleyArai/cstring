#include "myCString.h"
#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello";
    char str2[100] = ", this is a string.";
    printf("%d\n", my_strlen(str));
    printf("%d\n", (int) strlen(str));

    printf("%d %d\n", my_strcmp(str, str2), strcmp(str, str2));
    if (strcmp(str, "hello") == my_strcmp(str, "hello")) {
        printf("strcmp works!\n");
    }
    if (my_strcmp(str, str2) > 0) {
        printf("strcmp works\n");
    }


    printf("%s\n", my_strcat(str, str2));
    printf("%s\n", my_strncat(str, str2, 3));

    printf("%s\n", my_strcpy(str, "James"));
    printf("%s\n", my_strncpy(str, "Kenley", 4));

    printf("%s\n", my_strchr(str2, 'i'));
    printf("%s\n", my_strstr(str2, "this"));
    

}
