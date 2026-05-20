#include <cstdio>
#include <cstddef>
enum class family {
    KrishnaRao,
    Rohini,
    Koushik,
    Abhishek
};
struct Book 
{
    const char *name;
    int pages;
    bool hardcover;
};

union Variant 
{
    char string[10];
    float floating_point;
    int integer;
};
int main(void)
{
    int32_t num = 12452;
    size_t size = sizeof(num);
    int array[] = {1, 2, 3, 4};
    int sum = 0;
    for(int element: array) // intelligent cpp!
    {
        sum = sum + element;
    }
    printf("%d\n", num);
    printf("%zd\n", size);
    printf("The sum of the elements of the array is %d\n", sum);

    // making the alphabet set.
    char alphabet_small[27];
    char alphabet_caps[27];
    int i = 0;
    for(i = 0; i < 26; i++)
    {
        alphabet_small[i] = i + 97;
    }
    alphabet_small[26] = 0;
    for(i = 0; i < 26; i++)
    {
        alphabet_caps[i] = i + 65;
    }
    alphabet_caps[26] = 0;
    printf("%s\n", alphabet_small);
    printf("%s\n", alphabet_caps);

    // enum class!
    family familymember1 = family::KrishnaRao;

    // book class
    Book book;
    book.name = "Sherlock Holmes\0";
    book.pages = 10;
    book.hardcover = true;
    printf("%s\n", book.name);
    printf("%d\n", book.pages);
    printf("%d\n", book.hardcover);

    // dealing with the unions.
    Variant variant;
    variant.integer = 23;
    printf("The value of the integer initially assigned is : %d\n", variant.integer);
    variant.floating_point = 23.0;
    printf("The value of the floating point assigned is : %f\n", variant.floating_point);
    printf("The value of the integer after assigning the floating point is : %d\n", variant.integer);
    return 0;
}