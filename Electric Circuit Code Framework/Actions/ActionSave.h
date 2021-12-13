#pragma once

#include "action.h"



//Class responsible for the action of saving the circuit
class ActionSave : public Action
{

public:
	ActionSave(ApplicationManager* pApp);
	virtual void Execute();
	virtual ~ActionSave(void);

	virtual void Undo();
	virtual void Redo();

};


