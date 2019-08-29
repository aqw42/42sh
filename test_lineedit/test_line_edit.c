#include "line_edit.h"

int ft_putchar_stdout(int c)
{
	write(1, &c, 1);
	return (1);
}

void stop(__unused int no)
{
	tcsetattr(0, TCSANOW, &g_term_mem);
}

int init_term(t_term *term)
{
	if (tgetent(NULL, getenv("TERM")) < 1)
		return (0);
	if (tcgetattr(0, &g_term_mem) == -1)
		return (0);
	if (tcgetattr(0, &(term->term)) == -1)
		return (0);
	term->term.c_lflag &= ~(ICANON);
	term->term.c_lflag &= ~(ECHO);
	term->term.c_cc[VMIN] = 1;
	term->term.c_cc[VTIME] = 0;
	tcsetattr(0, TCSANOW, &(term->term));
	return (1);
}

int main(void)
{
	t_term	term;

	init_term(&term);
	read_key();
	stop(0);
}