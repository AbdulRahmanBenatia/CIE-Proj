#include "Buzzer.h"

Buzzer::Buzzer(GraphicsInfo* b_GfxInfo) :Component(b_GfxInfo)
{}

void Buzzer::Draw(UI* pUI)
{
	//Call output class and pass buzzer drawing info to it.
	pUI->DrawBuzzer(*m_pGfxInfo); //update to draw buzzer

}

void Buzzer::Operate()
{

}
void Buzzer::Save(int id)
{

}