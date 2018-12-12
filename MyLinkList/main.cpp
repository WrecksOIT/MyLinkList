#include "pch.h"
#include "MyLinkList.h"

int main()
{
	{
		MyLinkList LL;
		LL.create_node(5);
		LL.create_node(10);
		LL.create_node(21);
		LL.display();
	}
	std::cout << "done";
}