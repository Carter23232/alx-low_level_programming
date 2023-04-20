#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
  * main - Entry point to program
  * @argc: counter
  * @argv: Argument
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	ud_t ud_obj;
	int input_length = 0;

	if (argc == 2)
	{
		input_length = atoi(argv[1]);

		if (input_length < 0)
		{
			printf("Error\n");
			exit(2);
		}

		ud_unit(&ud_obj);
		ud_set_input_buffer(&ud_obj, argv[1], input_length);
		ud_set_mode(&ud_obj, 64);
		ud_set_syntax(&ud_obj, UD_SYN_INTEL);


		while (ud_disassemble(&ud_obj))
		{
			printf("\t%s\n", ud_insn_hex(&ud_obj));
		}
	}
	return (0);
}
