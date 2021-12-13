#include "ActionSave.h"
#include <fstream>
#include "..\ApplicationManager.h"
using namespace std;


///******** NOT COMPLETE YET *********///

ActionSave::ActionSave(ApplicationManager* pApp) :Action(pApp)
{
}

void ActionSave::Execute()
{
	
	ofstream outfile;
	outfile.open("test.txt");
	pManager->Save();
	
}

ActionSave:: ~ActionSave(void) {}


void ActionSave::Undo()
{}

void ActionSave::Redo()
{}

