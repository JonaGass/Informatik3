#pragma once
#include "datatypes.h"


extern int menu(int i);
extern void boot();
extern void add(data array[999], int i);
extern int scroll(data array[999], int i, int b, int l);
extern void falseInput();
extern void initializeData(Data* data);
extern int search(data array[999], int b, int l);
extern void editDialog(data array[999], int i);
extern void deleteDialog(data array[999], int *i);
extern void save(data array[999], int i);
extern void load(data array[999], int *i);
extern void createBibTex(data array[999], int x);
extern void view(data array[999], int i);