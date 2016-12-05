/* A example of bit field usage in C */

#include <stdio.h>

// opaque and show
#define YES 1
#define NO  0

// line styles
#define SOLID  1
#define DOTTED 2
#define DASHED 3

// primary colors
#define BLUE  4  /* 100 */
#define GREEN 2  /* 010 */
#define RED   1  /* 001 */

// mixed colors
#define BLACK   0                    /* 000 */
#define YELLOW  (RED | GREEN)        /* 011 */
#define MAGENTA (RED | BLUE)         /* 101 */
#define CYAN    (GREEN | BLUE)       /* 110 */
#define WHITE   (RED | GREEN | BLUE) /* 111 */

const char * colors[8] = {"Black", "Red", "Green", "Yellow", "Blue", "Magenta", "Cyan", "White"};

// bit field box properties
struct box_props
{
        // fill to 8 bits ( accumulate to 1 byte )
        unsigned int opaque             : 1;
        unsigned int fill_color         : 3;
        unsigned int                    : 4;

        // fill in another 6 bits ( accumulate to 14 bits )
        unsigned int show_border        : 1;
        unsigned int border_color       : 3;
        unsigned int border_style       : 2;

        // fill in another 10 bits ( accumulate to 24 bits )
        unsigned int a                  : 7;
        unsigned int b                  : 3;

        // A structure padding, 8 bits ( 1 byte ), between one unsigned int and one unsigned char.

        // split a byte into 2 fields of 4 bits
        unsigned char width       : 4,
                      height      : 4;
};

int main()
{
        struct box_props my_box;

        printf("sizeof( unsigned int ): %zu\n", sizeof(unsigned int ));
        printf("sizeof( unsigned char ): %zu\n", sizeof(unsigned char ));
        printf("sizeof( box_props): %zu\n", sizeof(my_box));
}
