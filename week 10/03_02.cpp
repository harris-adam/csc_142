#include <cstdio>
#include <iostream>

const int SIZE = 6;

char read_from(const char* buffer, int index){
    if (index < 0 || index >= SIZE - 1) {
        std::cout << "Error: Out of Bounds" << std::endl;
        return '\0';
    }
    return buffer[index];
}

void write_to(char* buffer, int index, char new_char){
    if (index < 0 || index >= SIZE - 1) {
        std::cout << "Error: Out of Bounds" << std::endl;
        return;
    }
    buffer[index] = new_char;
}



int main() {
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char* upper_ptr = upper; // Equivalent: &upper[0]
    char* lower_ptr = lower;

    write_to(lower_ptr, 3, 'd');
    write_to(upper_ptr, 3, 'D');
    char letter_d = read_from(lower_ptr, 3);
    char letter_D = read_from(upper_ptr, 3); // letter_D equals 'D'
 
    printf("lower: %s\nupper: %s", lower, upper);
}