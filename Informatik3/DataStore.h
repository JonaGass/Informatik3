#pragma once
#include "datatypes.h"


public ref class DataStore {
public:
	static array<Referenzen>^ datensatz = gcnew array<Referenzen>(999);
	static int currentIndex = 0;
};