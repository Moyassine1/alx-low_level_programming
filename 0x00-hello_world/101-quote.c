#include <unistd.h>

int main(void)
{
    const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t len = 59;  // Length of the quote excluding the null terminator

    // Write the quote to standard error (file descriptor 2)
    write(2, quote, len);

    return 1;
}

