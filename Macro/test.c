#include <stdio.h>
#include <ncurses.h>

int main()
{	

    char ch;

    initscr();

    while ((ch = getch()) != '\n')
    {
        printw("Keycode: %c\n", ch);
        refresh();
    }
    

    endwin();

	return 0;
}