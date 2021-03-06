/* TimeLinesGUI.h
** World Construction Set GUI for Time Line Editing modules.
** By Gary R. Huber, 1994.
*/

#ifndef TIMELINESGUI_H
#define TIMELINESGUI_H

extern struct Data
{
 short x, y, sx, sy;
 short left, right, top, bottom, textbottom, textzero, lowframe, highframe, 
	 textwidthtop, textwidthbottom, textwidthzero, framegrid,
	 framegridfirst, framegridlg, drawgrid;
 float texthighval, textlowval, valgrid, valgridfirst, framepixgrid,
	 valpixgrid, valpixpt, framepixpt;
 struct KeyTable *SKT;
 short group, activekey, activeitem, dataitems, baseitem;
 long inputflags;
 struct TimeLineWindow *win;
};


#define KEYFRAME_SELECT	(0<<0)
#define KEYFRAME_NEW 	(1<<0)
#define KEYFRAME_MOVE	(1<<1)
#define POINT_SELECTED	(1<<2)
#define QUICK_DRAW	(1<<3)
#define NO_CLEAR	(1<<4)

extern __saveds ULONG TL_AskMinMax(struct IClass *cl, Object *obj,
	 struct MUIP_AskMinMax *msg);
extern __saveds ULONG TL_Draw(struct IClass *cl, Object *obj, struct MUIP_Draw *msg);
extern __saveds ULONG TL_Setup(struct IClass *cl, Object *obj,
	 struct MUIP_HandleInput *msg);
extern __saveds ULONG TL_Cleanup(struct IClass *cl, Object *obj,
	 struct MUIP_HandleInput *msg);
extern __saveds ULONG TL_HandleInput(struct IClass *cl, Object *obj,
	 struct MUIP_HandleInput *msg);
extern __saveds __asm ULONG TL_Dispatcher(register __a0 struct IClass *cl, 
	 register __a2 Object *obj, register __a1 Msg msg);

extern __saveds ULONG GNTL_HandleInput(struct IClass *cl, Object *obj,
	 struct MUIP_HandleInput *msg);
extern __saveds __asm ULONG GNTL_Dispatcher(register __a0 struct IClass *cl, register __a2
	 Object *obj, register __a1 Msg msg);

#endif /* TIMELINESGUI_H */
