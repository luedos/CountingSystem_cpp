// CSTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "includes\CountingSystem.h"


int main()
{



	bwn::CountingSystem myCS(10, 455);
	
	bwn::CountingSystem localCS(10);
	

	myCS /= 0;
	
	std::cout << myCS.ToString() << '\n';

	

	//std::vector<int> myVec{ 10,9,8,7,6,5 };
	//
	//for (int i = 0; i < myVec.size(); ++i)
	//	std::cout << myVec[i] << '|';
	//
	//std::cout << '\n';
	//
	//myVec.insert(myVec.begin(), 1);
	//
	//for (int i = 0; i < myVec.size(); ++i)
	//	std::cout << myVec[i] << '|';
	//
	//std::cout << '\n';

	//myCS.ChangeOrder(16);
	//
	//std::cout << myCS.ToString() << '\n';
	//
	//myCS.ChangeOrder(10);
	//
	//std::cout << myCS.ToString() << '\n';

	system("Pause");
}
