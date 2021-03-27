#pragma once
#include <cstdio>
#include <fstream>

namespace es
{
	namespace data
	{
		namespace ofs
		{
			void ofs(char d1)
			{
				std::ofstream ofs("data.dat");
				ofs << d1<< " ";
				ofs.close();
			}
		}
		namespace ifs
		{
			void ifs(char d1)
			{
				std::ifstream ifs("data.dat");
				ifs >> d1;
				printf("%d", d1);
				ifs.close();
			}
		}
	}
}