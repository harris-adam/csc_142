/*
    File name: 3-3.cpp
    Name: Harris Adam
    Date: 04/25/2025
*/

#include <cstdio>

struct Element {
    Element* next{};
    Element* before{};
    
    
    void insert_after(Element* new_element){ 
        new_element->next = next;
        new_element->before = this;
        next = new_element;}

    
    void inser_before(Element* new_element){
        new_element->before = before;
        new_element->next = this;
        before = new_element;}

    char prefix[2]; 
    short operating_number;};


int main() {
    
    Element trooper1, trooper2, trooper3; 
    
    trooper1.prefix[0] = 'T';
    trooper1.prefix[1] = 'K';
 
    trooper1.operating_number = 421;
    trooper1.insert_after(&trooper2);
    
    trooper2.prefix[0] = 'F';
    trooper2.prefix[1] = 'N';
   
    trooper2.operating_number = 2187;
    trooper2.insert_after(&trooper3); 
   
    trooper3.prefix[0] = 'L';
    trooper3.prefix[1] = 'S';

    trooper3.operating_number = 005; 
    
    
    printf("Forwards:\n");
    for (Element *cursor = &trooper1; cursor; cursor = cursor->next){
        printf("\tstormtrooper %c%c-%d\n",
            cursor->prefix[0],
            cursor->prefix[1],
            cursor->operating_number);}

    printf("\nBackwards:\n");
    for (Element *cursor = &trooper3; cursor; cursor = cursor->before){
        printf("\tstormtrooper %c%c-%d\n",
        cursor->prefix[0],
        cursor->prefix[1],
        cursor->operating_number);}

    return 0;
}