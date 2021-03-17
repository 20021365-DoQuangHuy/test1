void swap(char* a, char* b){
    char x = *a;
    *a = *b;
    *b = x;
}
void reverse(char *s) {
    // Your code goes here
    int length = 0;
    while (*s != '\0'){
        s++;
        length++;
    }
    int duo = length / 2 - 1;
    while (duo >= 0){
        swap(s - length + duo, s - duo - 1);
        duo--;
    }
}