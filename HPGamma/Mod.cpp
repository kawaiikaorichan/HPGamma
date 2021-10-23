#include "pch.h"
#include "Gamma.h"

NJS_MATERIAL* TemporaryMaterialArray[] = { nullptr };

DataPointer(int, EVENT_ID, 0x03B2C570);

void Init_Gamma()
{
	E102_OBJECTS[0] = &object_00207290;
	E102_OBJECTS[1] = &object_00208138;
	E102_OBJECTS[2] = &object_0020B19C;
	E102_OBJECTS[4] = &object_0020C5C0;
	E102_OBJECTS[7] = &object_00202C9C;
	E102_OBJECTS[8] = &object_00202F8C;
	E102_OBJECTS[9] = &object_002037EC;
	E102_OBJECTS[10] = &object_0020323C;
	E102_OBJECTS[11] = &object_00203820;
	E102_OBJECTS[12] = &object_00201AE4;
	E102_OBJECTS[13] = &object_0020CDE4;
	E102_OBJECTS[14] = &object_0020899C;
	E102_OBJECTS[15] = &object_002083EC;
	E102_OBJECTS[16] = &object_0020969C;
	E102_OBJECTS[17] = &object_00208CF4;
	E102_OBJECTS[18] = &object_00209EFC;
	E102_OBJECTS[19] = &object_0020994C;
	E102_OBJECTS[20] = &object_0020ABBC;
	E102_OBJECTS[21] = &object_0020A254;
	E102_OBJECTS[22] = &object_00203820;
	E102_OBJECTS[23] = &object_00208068;
	E102_OBJECTS[24] = &object_0020323C;
	E102_OBJECTS[25] = &object_00202744;
	E102_OBJECTS[26] = &object_00205CC8;
	E102_OBJECTS[27] = &object_002070F0;
	E102_ACTIONS[0]->object = &object_00207290;
	E102_ACTIONS[1]->object = &object_00207290;
	E102_ACTIONS[2]->object = &object_00207290;
	E102_ACTIONS[3]->object = &object_00207290;
	E102_ACTIONS[4]->object = &object_00207290;
	E102_ACTIONS[5]->object = &object_00207290;
	E102_ACTIONS[6]->object = &object_00207290;
	E102_ACTIONS[7]->object = &object_00208138;
	E102_ACTIONS[8]->object = &object_00208138;
	E102_ACTIONS[9]->object = &object_00208138;
	E102_ACTIONS[10]->object = &object_00208138;
	E102_ACTIONS[11]->object = &object_00208138;
	E102_ACTIONS[12]->object = &object_00208138;
	E102_ACTIONS[13]->object = &object_00207290;
	E102_ACTIONS[14]->object = &object_00207290;
	E102_ACTIONS[15]->object = &object_00207290;
	E102_ACTIONS[16]->object = &object_00207290;
	E102_ACTIONS[17]->object = &object_00207290;
	E102_ACTIONS[18]->object = &object_00207290;
	E102_ACTIONS[19]->object = &object_00207290;
	E102_ACTIONS[20]->object = &object_00207290;
	E102_ACTIONS[21]->object = &object_00207290;
	E102_ACTIONS[22]->object = &object_00207290;
	E102_ACTIONS[23]->object = &object_00207290;
	E102_ACTIONS[24]->object = &object_00207290;
	E102_ACTIONS[25]->object = &object_00207290;
	E102_ACTIONS[26]->object = &object_00207290;
	E102_ACTIONS[27]->object = &object_00207290;
	E102_ACTIONS[28]->object = &object_00207290;
	E102_ACTIONS[29]->object = &object_00207290;
	E102_ACTIONS[30]->object = &object_00207290;
	E102_ACTIONS[31]->object = &object_00207290;
	E102_ACTIONS[32]->object = &object_00207290;
	E102_ACTIONS[33]->object = &object_00207290;
	E102_ACTIONS[34]->object = &object_00207290;
	E102_ACTIONS[35]->object = &object_00207290;
	E102_ACTIONS[36]->object = &object_00207290;
	E102_ACTIONS[37]->object = &object_00207290;
	E102_ACTIONS[38]->object = &object_00207290;
	E102_ACTIONS[39]->object = &object_00207290;
	E102_ACTIONS[40]->object = &object_00207290;
	E102_ACTIONS[41]->object = &object_00207290;
	E102_ACTIONS[42]->object = &object_00207290;
	E102_ACTIONS[43]->object = &object_00207290;
	E102_ACTIONS[44]->object = &object_00207290;
	E102_ACTIONS[45]->object = &object_00207290;
	E102_ACTIONS[46]->object = &object_00207290;
	E102_ACTIONS[47]->object = &object_00207290;
	E102_ACTIONS[48]->object = &object_00207290;
	E102_ACTIONS[49]->object = &object_00207290;
	E102_ACTIONS[50]->object = &object_0020BCAC;
	E102_ACTIONS[51]->object = &object_00207290;
	E102_ACTIONS[52]->object = &object_00207290;
	E102_ACTIONS[53]->object = &object_00207290;
	E102_ACTIONS[54]->object = &object_00207290;
	E102_ACTIONS[55]->object = &object_00207290;
	E102_ACTIONS[56]->object = &object_00207290;
	E102_ACTIONS[57]->object = &object_00207290;
	E102_ACTIONS[58]->object = &object_00207290;
	E102_ACTIONS[59]->object = &object_00207290;
	E102_ACTIONS[60]->object = &object_00207290;
	E102_ACTIONS[62]->object = &object_00207290;
	E102_ACTIONS[63]->object = &object_00207290;
	E102_ACTIONS[64]->object = &object_00207290;
	E102_ACTIONS[65]->object = &object_00207290;
	E102_ACTIONS[66]->object = &object_00207290;
	E102_ACTIONS[67]->object = &object_00207290;
	E102_ACTIONS[68]->object = &object_00207290;
	E102_ACTIONS[69]->object = &object_00207290;
	E102_ACTIONS[70]->object = &object_00207290;
	E102_ACTIONS[71]->object = &object_00207290;
	E102_ACTIONS[72]->object = &object_00207290;
	E102_ACTIONS[73]->object = &object_00207290;
	E102_ACTIONS[74]->object = &object_00207290;
	E102_ACTIONS[75]->object = &object_00207290;
	E102_ACTIONS[76]->object = &object_00207290;
	E102_ACTIONS[77]->object = &object_00207290;
}

NJS_MATERIAL* Specular3[] = {
	&material_8D995788FE461DB5494[0],
};

void ForceIgnoreSpecular_Object(NJS_OBJECT* obj, bool recursive)
{
	if (obj)
	{
		if (obj->basicdxmodel)
		{
			for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
			{
				if (!(obj->basicdxmodel->mats[k].attrflags & NJD_FLAG_IGNORE_SPECULAR)) obj->basicdxmodel->mats[k].attrflags |= NJD_FLAG_IGNORE_SPECULAR;
			}
		}
		if (recursive && obj->child) ForceIgnoreSpecular_Object(obj->child, true);
		if (recursive && obj->sibling) ForceIgnoreSpecular_Object(obj->sibling, true);
	}
}

void ForceSpecular_Object(NJS_OBJECT* obj, bool recursive)
{
	if (obj)
	{
		if (obj->basicdxmodel)
		{
			for (int k = 0; k < obj->basicdxmodel->nbMat; ++k)
			{
				obj->basicdxmodel->mats[k].specular.color = 0xFFFFFFFF;
				if (obj->basicdxmodel->mats[k].attrflags & NJD_FLAG_IGNORE_SPECULAR)
				{
					obj->basicdxmodel->mats[k].attrflags &= ~NJD_FLAG_IGNORE_SPECULAR;
				}
			}
		}
		if (recursive && obj->child) ForceSpecular_Object(obj->child, true);
		if (recursive && obj->sibling) ForceSpecular_Object(obj->sibling, true);
	}
}

bool ForceDiffuse2Specular2(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(2, false);
	return true;
}

bool ForceDiffuse2Specular3(NJS_MATERIAL* material, Uint32 flags)
{
	set_diffuse(2, false);
	set_specular(3, false);
	return true;
}

void RemoveMaterialColors(NJS_OBJECT* obj)
{
	if (obj->basicdxmodel)
	{
		for (int q = 0; q < obj->basicdxmodel->nbMat; ++q)
		{
			obj->basicdxmodel->mats[q].diffuse.argb.r = 0xFF;
			obj->basicdxmodel->mats[q].diffuse.argb.g = 0xFF;
			obj->basicdxmodel->mats[q].diffuse.argb.b = 0xFF;
		}
	}
	if (obj->child) RemoveMaterialColors(obj->child);
	if (obj->sibling) RemoveMaterialColors(obj->sibling);
}


extern "C" __declspec(dllexport) void __cdecl Init(const char* path, const HelperFunctions & helperFunctions)
{
	HMODULE handle = GetModuleHandle(L"CHRMODELS_orig");
	NJS_OBJECT** ___E102_OBJECTS = (NJS_OBJECT**)GetProcAddress(handle, "___E102_OBJECTS");
	NJS_ACTION** ___E102_ACTIONS = (NJS_ACTION**)GetProcAddress(handle, "___E102_ACTIONS");
	HMODULE Lantern = GetModuleHandle(L"sadx-dc-lighting");

	Init_Gamma();

	if (Lantern != nullptr)
	{
		material_register(Specular3, LengthOfArray(Specular3), &ForceDiffuse2Specular3);
	}
}

extern "C" __declspec(dllexport) const ModInfo SADXModInfo = { ModLoaderVer };