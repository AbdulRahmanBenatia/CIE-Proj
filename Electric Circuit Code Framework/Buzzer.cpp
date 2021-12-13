#include "Buzzer.h"

Buzzer::Buzzer(GraphicsInfo* b_GfxInfo) :Component(b_GfxInfo)
{}

void Buzzer::Draw(UI* pUI)
{
	//Call output class and pass resistor drawing info to it.
	//pUI->DrawBuzzer(*m_pGfxInfo); //update to draw resistor

}

void Buzzer::Operate()
{

}