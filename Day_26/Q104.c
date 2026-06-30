#include <stdio.h>

int main() {
    int answer, score = 0;

    printf("===== Welcome to the Quiz Application =====\n\n");

    // Question 1
    printf("1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is New Delhi.\n\n");
    }

    // Question 2
    printf("2. Which language is used for system programming?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is C.\n\n");
    }

    // Question 3
    printf("3. How many days are there in a leap year?\n");
    printf("1. 365\n2. 366\n3. 364\n4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2) {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! Correct answer is 366.\n\n");
    }

    // Display final score
    printf("===== Quiz Over =====\n");
    printf("Your Score: %d/3\n", score);

    if (score == 3) {
        printf("Excellent! You got all answers correct.\n");
      } else if (score == 2) {
        printf("Good job!\n");
    } else if (score == 1) {
        printf("Keep practicing!\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}  