#include "main.h"

int wildcmp(char *s1, char *s2) {
    if (*s2 == '*') {
        return wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2));
    }
    else if (*s1 && (*s1 == *s2)) {
        return wildcmp(s1 + 1, s2 + 1);
    }
    else if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}
