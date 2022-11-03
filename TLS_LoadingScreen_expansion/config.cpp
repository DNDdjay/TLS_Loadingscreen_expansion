/**
 * config.cpp
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

class CfgPatches
{
    class TLS_LoadingScreen
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"DayZExpansion_Scripts"
		};
    };
};
///////////////////////////////////////////////
class CfgMods
{
	class TLS_LoadingScreen
	{
	    dir = "TLS_LoadingScreen"; //! Name of the mod
		picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
		name = "TLS LoadingScreen";
		credits = "Littledog";
	    author = "Littledog";
	    authorID = "";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

		dependencies[]= 
		{
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"TLS_LoadingScreen_expansion/TLS_LoadingScreen/Scripts/3_Game"
					//! Mod name/Scripts/3_Game
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"TLS_LoadingScreen_expansion/TLS_LoadingScreen/Scripts/5_Mission"
					//! Mod name/Scripts/5_Mission
				};
			};
		};
    };
};
