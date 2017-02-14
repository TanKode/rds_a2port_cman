class DefaultEventhandlers;
class CfgPatches
{
	class rds_a2port_cman
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgFactionClasses
{
	access=1;
	class rds_rus_civ
	{
		displayName="Russians";
		icon="";
		author="reyhard";
		priority=2;
		side=3;
	};
};

class CfgVehicles
{
	class Man;
	class Civilian_F: Man
	{
		class EventHandlers;
	};
	class RDS_Civilian_Base: Civilian_F
	{
		scope=0;
		author="reyhard";
		side=3;
		faction="rds_rus_civ";
		displayName="Civilian 1";
		genericNames="RussianMen";
		identitytypes[]=
		{
			"LanguageRUS",
			"Head_Euro",
			"G_IRAN_default"
		};
	};
	#include "cfgCivilian.hpp"
};