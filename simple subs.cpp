#include <stdio.h>
#include <string.h>

void decrypt(char *ciphertext) {
    int i, j;
    char decrypted[1000];

    // Mapping of encrypted characters to decrypted characters
    char mapping[128] = {0};

    // Clue 1: Identify the character that likely represents 'e'
    // Based on frequency analysis
    char most_frequent_cipher = '\0';
    int max_frequency = 0;
    for (i = 0; ciphertext[i]; i++) {
        int frequency = 0;
        for (j = 0; ciphertext[j]; j++) {
            if (ciphertext[j] == ciphertext[i])
                frequency++;
        }
        if (frequency > max_frequency) {
            max_frequency = frequency;
            most_frequent_cipher = ciphertext[i];
        }
    }
    if (most_frequent_cipher != '\0')
        mapping[most_frequent_cipher] = 'e';

    // Clue 2: Guess the characters that stand for 't' and 'h'
    mapping['5'] = 't';
    mapping['8'] = 'h';

    // Decrypt the rest of the message
    for (i = 0; ciphertext[i]; i++) {
        if (mapping[ciphertext[i]] != '\0')
            decrypted[i] = mapping[ciphertext[i]];
        else
            decrypted[i] = ciphertext[i];
    }
    decrypted[i] = '\0';

    printf("Decrypted message:\n%s\n", decrypted);
}

int main() {
    char ciphertext[] = "53‡‡†305))6*:4826)41.)4‡);806*;48†860))85::]8*::*8†83"
                        "(88)5*†:46(:88*96*2:8)‡(:485);5†2:†(:4956*2(5*4)88"
                        ";4069285):)6+8)4‡‡:1($9:48081:8:81:48†85;4)485+528806*81 ($9;48;(88;4(‡?34:48)4‡;161;:188:‡?";
    decrypt(ciphertext);
    return 0;
}

