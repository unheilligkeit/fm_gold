class CfgPatches
{
    class Fm
    {
        units[]={};
        weapons[]={};
        requiredVersion= 0.5;
        version= 0.5;
fileName = "fm_gold.pbo";
author = "Florian Meier";
    };
};
class CfgMagazines
{
	class CA_Magazine;
	class fm_goldbarren: CA_Magazine
	{
		displayName="Goldbarren";
		scope=2;
		mass=30;
		author="Florian Meier";
		picture="\fm_gold\icons\gold_pic.paa";
		model="\fm_gold\objecte\gold.p3d";
		descriptionShort="Ein massiver Goldbarren";
	};
};
