/*
    ex2-4 Write a alternative version of squeenze(s1, s2) that deletes each character in s1 that matches any character in the string s2.
*/

int contain(int c, char s[]);
void squeenze(char s1[], char s2[]);

// TODO: test the code 

void squeenze(char s1[], char s2[]) {
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++) {
        if (contain(s1[i], s2) != 0) {
            s1[j++] = s[i];
        }
    }
    s1[j] = '\0';
}

int contain(int c, char s[]) {
    for (int i = 0; s[i] != '\0'; i += 1) {
        if (s[i] == c) {
            return 1;
        }
    }
    return 0;
}