#include "Fuse.h"

Fuse::Fuse(GraphicsInfo* f_GfxInfo) :Component(f_GfxInfo)
{}

void Fuse::Draw(UI* pUI)
{
	//Call output class and pass battery drawing info to it.
	pUI->DrawFuse(*m_pGfxInfo); //update to draw battery

}

void Fuse::Operate()
{

}
void Fuse:: Save(int id)
{

}
