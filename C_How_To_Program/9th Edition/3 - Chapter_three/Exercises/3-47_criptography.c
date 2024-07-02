/*
3.47 (Enforcing Privacy with Cryptography)

The explosive growth of Internet communications and data storage on Internet-connected
computers has greatly increased privacy concerns. The field of cryptography is concerned
with coding data to make it difficult (and hopefully—with the most advanced schemes—impossible)
for unauthorized users to read. In this exercise, you’ll investigate a simple scheme for encrypting
and decrypting data.

A company that wants to send data over the Internet has asked you to write a program that will encrypt
it so that it may be transmitted more securely. All the data is transmitted as four-digit integers.

Your application should read a four-digit integer entered by the user and encrypt it as follows:

-Replace each digit with the result of adding 7 to the digit and getting the remainder after dividing
the new value by 10.

-Then swap the first digit with the third, and swap the second digit with the fourth.

-Then print the encrypted integer.

Write a separate application that inputs an encrypted four-digit integer and decrypts it
(by reversing the encryption scheme) to form the original number.


(Note: The above instructions requires a separate application for decrypting data.
We instead decided to include both, encryption and decryption in the same application
because it is more practical.  We also used functions which are not covered until chapter 4.)

[Optional reading project: In industrial-strength applications, you’ll want to use much stronger
encryption techniques than presented in this exercise. Research “public-key cryptography” in general
and the PGP (Pretty Good Privacy) specific public-key scheme. You may also want to investigate the RSA
scheme, which is widely used in industrial-strength applications.]
*/

#include <stdio.h>

int cryptography(int option, int number);

int main(void)
{
    int option = 0;
    int code = 0;

    // Running menu before entering the loop.
    printf("\n%s\n", "Encription Application");
    printf("%s\n", "-----------------------");
    printf("%s", "Enter an option: \n1 - Encrypt\n2 - Decrypt\n3 - Exit\n\n>>> ");
    scanf("%d", &option);

    while(1) {

        if (option == 1) {
            printf("\n%s", "(Encryption) Enter a four digit code: ");
            scanf("%d", &code);
            cryptography(0, code);
        }
        else if (option == 2) {
            printf("\n%s", "(Decryption) Enter a four digit code: ");
            scanf("%d", &code);
            cryptography(1, code);
        }
        else if (option == 3) {
           puts("Exiting...");
           return 3;
        }
        else if(option != 1 || option != 2 || option != 3) {
            puts("You have entered an invalid entry (valid options: 1, 2, 3)");
        }
        // Running menu inside the loop.
        printf("\n%s\n", "Encription Application");
        printf("%s\n", "-----------------------");
        printf("\n%s", "Enter an option: \n1 - Encrypt\n2 - Decrypt\n3 - Exit\n\n>>> ");
        scanf("%d", &option);
    }

    return 0;
}

int cryptography(int option, int number) {

    // Separating digits
    int first_digit = number / 1000;
    int remainder = number % 1000;
    int second_digit = remainder / 100;
    remainder %= 100;
    int third_digit = remainder / 10;
    remainder %= 10;
    int fourth_digit = remainder;

    if (option == 0) {
        // Encrypting digits
        first_digit = (first_digit + 7) % 10;
        second_digit = (second_digit + 7) % 10;
        third_digit = (third_digit + 7) % 10;
        fourth_digit = (fourth_digit + 7) % 10;
        printf("%d%d%d%d\n", third_digit, fourth_digit, first_digit, second_digit);
    }
    else if (option == 1) {
        // Decrypting digits
        first_digit = (first_digit - 7 + 10) % 10;
        second_digit = (second_digit - 7 + 10) % 10;
        third_digit = (third_digit - 7 + 10) % 10;
        fourth_digit = (fourth_digit - 7 + 10) % 10;
        printf("%d%d%d%d\n", third_digit, fourth_digit, first_digit, second_digit);
    }
    else {
        puts("Error: Invalid option (0-1)");
        return 1;
    }

    return 0;
}

