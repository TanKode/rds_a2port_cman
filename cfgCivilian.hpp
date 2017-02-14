class Citizen:RDS_Civilian_Base // base class
{
	displayName=$STR_DN_CIV_CITIZEN;
	model= "\rds_a2port_cman\citizen\citizen";
	scope=0;
	accuracy=3.9; //Rg 0.7;

	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\citizen\data\citizen.rvmat",
			"rds_a2port_cman\citizen\data\W1_citizen.rvmat",
			"rds_a2port_cman\citizen\data\W2_citizen.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
		};
	};
	rarityUrban=0.5;
	hiddenSelections[] =
	{
		"Camo"
	};
};
class Citizen1:Citizen
{

	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_CITIZEN1;

	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\citizen\data\citizen_co.paa
	};
};
class Citizen2: Citizen
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_CITIZEN2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\citizen\data\Citizen_v2_co.paa
	};
};
class Citizen3: Citizen
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_CITIZEN3;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\citizen\data\Citizen_v3_co.paa
	};
};
class Citizen4: Citizen
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_CITIZEN4;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\citizen\data\Citizen_v4_co.paa
	};
};

class Worker: RDS_Civilian_Base // base class
{
	scope=0;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_WORKER;
	model= "\rds_a2port_cman\Worker\Worker";
	hiddenSelections[] =
        {
                "Camo"
        };
	class Wounds
	{
		tex[]={};
		mat[]={
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"rds_a2port_cman\worker\data\worker.rvmat",
			"rds_a2port_cman\worker\data\W1_worker.rvmat",
			"rds_a2port_cman\worker\data\W2_worker.rvmat"
			};
	};
	rarityUrban=0.4;
};
class Worker1: Worker
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WORKER1;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\worker\data\worker_co.paa
	};
	rarityUrban=0.4;
};
class Worker2: Worker
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WORKER2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\worker\data\Worker_v2_CO.paa
	};
	rarityUrban=0.5;
};
class Worker3: Worker
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WORKER3;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\worker\data\Worker_v3_CO.paa
	};
};
class Worker4: Worker
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WORKER4;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\worker\data\Worker_v4_CO.paa
	};
};


class Profiteer:RDS_Civilian_Base //base class
{
	scope=0;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_PROFITEER;
	model= "\rds_a2port_cman\profiteer\profiteer";
	hiddenSelections[] =
        {
                "Camo"
        };
	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\profiteer\data\profiteer.rvmat",
			"rds_a2port_cman\profiteer\data\W1_profiteer.rvmat",
			"rds_a2port_cman\profiteer\data\W2_profiteer.rvmat",

			"ca\characters\heads\male\defaulthead\data\hhl.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
		};
	};
	rarityUrban=0.6;
};
class Profiteer1: Profiteer
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_PROFITEER1;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\profiteer\data\profiteer_co.paa
	};
};
class Profiteer2: Profiteer
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_PROFITEER2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\profiteer\data\profiteer_v2_co.paa
	};
};
class Profiteer3: Profiteer
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_PROFITEER3;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\profiteer\data\profiteer_v3_co.paa
	};
};
class Profiteer4: Profiteer
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_PROFITEER4;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\profiteer\data\profiteer_v4_co.paa
	};
};


class Woodlander:RDS_Civilian_Base
{
	scope=0;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_WOODLANDER;
	model= "\rds_a2port_cman\Woodlander\Woodlander";
	hiddenSelections[] =
        {
                "Camo"
        };
	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\Woodlander\data\Woodlander.rvmat",
			"rds_a2port_cman\Woodlander\data\W1_Woodlander.rvmat",
			"rds_a2port_cman\Woodlander\data\W2_Woodlander.rvmat",

			"ca\characters\heads\male\defaulthead\data\hhl.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
			"ca\characters\heads\male\defaulthead\data\hhl_Wounds.rvmat",
		};
	};
	rarityUrban=0.4;
};
class Woodlander1:Woodlander
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WOODLANDER1;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\woodlander\data\woodlander_co.paa
	};
};
class Woodlander2:Woodlander
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WOODLANDER2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\woodlander\data\woodlander_v2_co.paa
	};
};
class Woodlander3:Woodlander
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WOODLANDER3;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\woodlander\data\woodlander_v3_co.paa
	};
};
class Woodlander4:Woodlander
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_WOODLANDER4;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\woodlander\data\woodlander_v4_co.paa
	};
};
class Functionary:RDS_Civilian_Base
{
	scope=0;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_FUNCTIONARY;
	model= "\rds_a2port_cman\Functionary\Functionary";
	hiddenSelections[] =
        {
                "Camo"
        };
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\functionary\data\functionary_co.paa
	};
	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\Functionary\data\Functionary.rvmat",
			"rds_a2port_cman\Functionary\data\W1_Functionary.rvmat",
			"rds_a2port_cman\Functionary\data\W2_Functionary.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
		};
	};
	rarityUrban=0.8;
};
class Functionary1:Functionary
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_FUNCTIONARY1;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\functionary\data\functionary_co.paa
	};
};
class Functionary2:Functionary
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_FUNCTIONARY2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\functionary\data\functionary2_co.paa
	};
	rarityUrban=0.7;
};

class Villager:RDS_Civilian_Base
{
	scope=0;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_VILLAGER;
	model= "\rds_a2port_cman\Villager\Villager";
	hiddenSelections[] =
        {
                "Camo"
        };
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\villager\data\villager_co.paa
	};
	// TODO Wounds
	class Wounds
	{
		tex[]={};
		mat[]={
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",

			"rds_a2port_cman\Villager\Data\villager.RVmat",
			"rds_a2port_cman\Villager\Data\villager_w1.RVmat",
			"rds_a2port_cman\Villager\Data\villager_w2.RVmat"
		};
	};
	rarityUrban=0.2;
};
class Villager1:Villager
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_VILLAGER1;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\villager\data\villager_co.paa
	};
};
class Villager2:Villager
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_VILLAGER2;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\villager\data\villager_v2_co.paa
	};
};
class Villager3:Villager
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_VILLAGER3;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\villager\data\villager_v3_co.paa
	};
};
class Villager4:Villager
{
	scope=2;
	accuracy=1000;
	displayName=$STR_DN_CIV_VILLAGER4;
	hiddenSelectionsTextures[] =
	{
		\rds_a2port_cman\villager\data\villager_v4_co.paa
	};
};

class Priest:RDS_Civilian_Base
{
	scope=2;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_PRIEST;
	model= "\rds_a2port_cman\Priest\Priest";
	// TODO Wounds
	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\priest\data\priest.rvmat",
			"rds_a2port_cman\priest\data\W1_priest.rvmat",
			"rds_a2port_cman\priest\data\W2_priest.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
		};
	};
};
class Policeman : RDS_Civilian_Base
{
	scope=2;
	accuracy=3.9; //Rg 0.7;
	displayName=$STR_DN_CIV_POLICEMAN;
	model= "\rds_a2port_cman\Policeman\Policeman";
	class Wounds
	{
		tex[]={};
		mat[]={
			"rds_a2port_cman\policeman\data\policeman.rvmat",
			"rds_a2port_cman\policeman\data\w1_policeman.rvmat",
			"rds_a2port_cman\policeman\data\w2_policeman.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",

			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
			"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"
		};
	};
};

