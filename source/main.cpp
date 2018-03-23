/////////////////////////////////////////////////////////////
// DeltaMush C4d deformer                                  //
// Filip Malmberg 2018                                     //
/////////////////////////////////////////////////////////////
 
#include "c4d.h"

//Forward declaration
Bool RegisterDeltaMush(void);

 Bool PluginStart(void)
 {
	if(!RegisterDeltaMush()){return false;}
   return TRUE;
 }

 void PluginEnd(void)
 {
 }

 Bool PluginMessage(Int32 id, void *data) //LONG changed to Int32
 { switch (id)
	{
	case C4DPL_INIT_SYS:
		if (!resource.Init()) return FALSE; // don't start plugin without resource
		return TRUE;

	}
   return FALSE;
 }
