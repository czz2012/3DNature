/* DispatchGUI.c
** FrontEnd functions that set up variables, call other functions and
** clean up, where necessary before returning to the main loop. They contain
** a lot of GUI-gadget-setting stuff.
** Copyright 1995 by Questar Productions
*/

#include "WCS.h"
#include "GUIExtras.h"

short Database_LoadDisp(short lowi, short AskName, char *FileName, short MapUpdate)
{
char filename[256], oldpath[256], oldname[32];
short error = 0, i, SetDefault = 0;

 strcpy(oldpath, dbasepath);
 strcpy(oldname, dbasename);
 if (FileName)
  {
  strcpy(filename, FileName);
  i = strlen(filename);
  while (filename[i] != ':' && filename[i] != '/' && i > 0)
   i --;
  strncpy(dbasepath, filename, i);
  dbasepath[i] = 0;
  strcpy(dbasename, &filename[i + 1]);
  } /* if name provided (AREXX) */
 else
  {
  if (AskName)
   {
   if (! getdbasename(0))
    return (0);
   } /* if new name */
  strmfp(filename, dbasepath, dbasename);
  } /* else */

 error = Database_Load(lowi, filename);

 switch (error)
  {
  case 0:
   {
   dbaseloaded = 1;
   strcpy(str, dbasename);
   strcat(str, ".object");
   if (AskName)
    {
    if (strcmp(str, dirname))
     {
     SetDefault = User_Message_Def(str,
	"Make this the default object directory?", "OK|Cancel", "oc", 1);
     Proj_Mod = 1;
     } /* if not already default directory */
    } /* if AskName */
   if (SetDefault || FileName)
    {
    strmfp(dirname, dbasepath, str);
    if (! DirList_ItemExists(DL, dirname))
     {
     if (DL)
      DirList_Add(DL, dirname, 0);
     else
      DirList_New(dirname, 0);
     Proj_Mod = 1;
     } /* if */
    } /* if set default directory */
   DB_Mod = (lowi > 0) ? 1: 0;
   break;
   } /* no error */
  case 1:
   {
   Log(ERR_OPEN_FAIL, dbasename);
   if (! FileName)
    User_Message("Database: Load",
	"Error opening Database file!\nOperation terminated.", "OK", "o");
   break;
   } /* no file */
  case 2:
   {
   Log(ERR_WRONG_TYPE, "Unsupported Database file format.");
   if (! FileName)
    User_Message("Database: Load",
	"Not a WCS Database file!\nOperation terminated.", "OK", "o");
   break;
   } /* wrong type file */
  case 3:
   {
   Log(ERR_READ_FAIL, dbasename);
   if (! FileName)
    User_Message("Database: Load",
	"Error reading Database file!\nOperation terminated.", "OK", "o");
   break;
   } /* read error */
  case 4:
   {
   if (! FileName)
    User_Message("Database Module: Load",
	"Out of memory allocating Database!\nOperation terminated.", "OK", "o");
   break;
   } /* memory bust */
  } /* switch */

 if (error)
  {
  strcpy(dbasepath, oldpath);
  strcpy(dbasename, oldname);
  } /* if */
 else
  {
  if (DE_Win)
   {
   Set_DE_List(0);
   Set_DE_Item(OBN);
   } /* if database editing window open */
  if (MapWind0 && MapUpdate)
   {
   ClearWindow(MapWind0, 1);
   loadmapbase(0, 1);
   valueset();
   if (topoload)
   loadtopo();
   } /* if map window update */
  } /* else no error */

 return (error);

} /* Database_LoadDisp() */
