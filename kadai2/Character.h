#pragma once
#include <stdlib.h>
#include <time.h>
#include <iostream>

int t = (int)time(nullptr);

class Character
{

private: 
		std::string name_ = {};
		int HP_ = 0;
		int Atk_ = t%21;
	
	
	~Character() {
		delete name_;
		delete HP_;
		delete Atk_;
	}



};

