#include <stdio.h>

int main() {

    // \a → Alert sound (beep sound)
    printf("Hello\a\n");

    // \b → Backspace (একটা character মুছে দেয়)
    printf("Hello\b World\n");

    // \f → Form feed (নতুন page বা screen break এর মতো)
    printf("Hello\fWorld\n");

    // \r → Carriage return (line এর শুরুতে ফিরে যায়)
    printf("Hello\rWorld\n");

    // \t → Horizontal tab (space দিয়ে alignment)
    printf("Hello\tWorld\n");

    // \v → Vertical tab (vertical space)
    printf("Hello\vWorld\n");

    // \\ → Backslash print করতে
    printf("This is backslash: \\\n");

    // \' → Single quote print করতে
    printf("This is single quote: \'\n");

    // \" → Double quote print করতে
    printf("This is double quote: \"Hello\"\n");

    return 0;
}
