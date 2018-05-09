#include <cstdlib>
#include <string>
using namespace std;

//实现函数编程0—1
int random()
{
	double real_number;
	real_number = rand() / double(RAND_MAX+1);
	if (real_number <= 0.5)
		return 0;
	else return 1;
}

//实现丢硬币操作
string coin(int x)
{
	switch (x)
	{
	case 0:return "tails";
	case 1:return "heads";
	}
defult:"you son .";
}
