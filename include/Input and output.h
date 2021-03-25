#pragma once
#include <cstdio>

namespace es
{
	namespace iao
	{
		namespace lnput
		{
			void input(char c)
			{
				scanf_s("%c", &c);
				printf("%c\n", c);
			}
		}
		namespace output
		{
			void print(char txt, char txt1, char txt2, char txt3, char txt4, char txt5, char txt6, char txt7, char txt8, char txt9, char txt10, char txt11, char txt12)
			{
				printf("%c", txt);
				printf("%c", txt1);
				printf("%c", txt2);
				printf("%c", txt3);
				printf("%c", txt4);
				printf("%c", txt5);
				printf("%c", txt6);
				printf("%c", txt7);
				printf("%c", txt8);
				printf("%c", txt9);
				printf("%c", txt10);
				printf("%c", txt11);
				printf("%c", txt12);
			}
		}
	}
}