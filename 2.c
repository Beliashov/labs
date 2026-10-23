int main() {
    int n;
    char arr[21];
    char input[100];
    char extra;

    printf("Enter N (1-10): ");

    if (fgets(input, sizeof(input), stdin) == NULL ||
        sscanf(input, " %d %c", &n, &extra) != 1 ||
        n < 1 || n > 10) {
        printf("Error! Enter a natural number from 1 to 10.\n");
        return 1;
    }

    printf("Correct bracket sequences:\n");

    brackets(n, 0, 0, arr);

    return 0;
}
