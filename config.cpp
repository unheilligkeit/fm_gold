class CfgPatches
{
    class Fm
    {
        units[]={"Item_fm_goldbarren"};
        weapons[]={"fm_goldbarren"};
        requiredVersion= 1;
        version= 1;
        fileName = "fm_gold.pbo";
        author = "Florian Meier";
        authors[]= {"Florian Meier"}; // ... etc
        url = "https://task-force-wolf.de";
    };
};




class CfgWeapons
{
    class ItemCore;
    class InventoryItem_Base_F;

    class fm_goldbarren:  ItemCore
    {
        author = "Florian Meier";
        displayName = "Goldbarren";
        descriptionShort = "Ein massiver Goldbarren";
        model = "\fm_gold\objecte\gold.p3d";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        simulation = "ItemMineDetector";
        picture = "\fm_gold\icons\gold_pic.paa";
        allowedSlots[] = {901, 801, 701};
        class ItemInfo: InventoryItem_Base_F
        {
            mass= 30;

        };
    };
};


class CfgVehicles
{
class Item_Base_F; // External class reference

class Item_fm_goldbarren: Item_Base_F //classname of the item holder placed down in the editor
{
    scope = 2;
    scopeCurator = 2;
    displayName = "Goldbarren"; //name of the item holder as it will appear in the editor drop down lists
    editorCategory = "EdCat_Equipment";
    editorSubcategory = "EdSubcat_InventoryItems";
    vehicleClass = "Items";
    class TransportItems
    {
        class fm_goldbarren //not sure if the class name here has to be the same as cfgweapons classname of the object being held, but it seems to be the convention to keep it the same name as the one below
        {
            name = "fm_goldbarren"; //classname of the item being held by the editor object
            count = 1;
        };
    };
};
};