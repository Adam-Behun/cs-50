// Phonebook with structs

#include <stdio.h>
#include <cs50.h>
#include <string.h>


// Data Structure, data type person with two fields
typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Declare two arrays of data type person
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-949-468-2750";

    // Search for David
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found -- %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}