class CfgPatches
{
   class 1RCC_Noel{
       units[] = {"RCC_Combat_S"};
       weapons[] = {};
       requiredVersion = 0.1;
       requiredAddons[] = {"A3_Characters_F"};
   };
};

class CfgFactionClasses {
	class RCC_Noel {
		DisplayName = "RCC_Noel";
		priority = 3;
		side = TWest;
		icon = "-";
	};
};

class CfgVehicles
{	
class Land_PaperBox_01_small_closed_brown_F;
	class RCC_Carton:Land_PaperBox_01_small_closed_brown_F {
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\RCC-Noel\cartonKinder.paa"};
	};
class EauDeCombat_01_box_F;
	class RCC_EauDeCombat: EauDeCombat_01_box_F {
		hiddenSelections[] = {"camo_1"};
		hiddenSelectionsTextures[] = {"\RCC-Noel\Kinder.paa"};
	};
	
};