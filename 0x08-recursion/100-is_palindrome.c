#include "main.h"

int is_palindrome(char *s) {
    int length = strlen(s);
    
    if (length == 0) {
        return 1;
    }
    
    if (s[0] == s[length - 1]) {
        char *substring = malloc((length - 1) * sizeof(char));
        strncpy(substring, s + 1, length - 2);
        substring[length - 2] = '\0';
        
        int is_substring_palindrome = is_palindrome(substring);
        
        free(substring);
        
        return is_substring_palindrome;
    }
    
    return 0;
}
