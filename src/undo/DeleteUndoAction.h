/*
 * Xournal++
 *
 * Undo action for delete (eraser, delete)
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */

#ifndef __DELETEUNDOACTION_H__
#define __DELETEUNDOACTION_H__

#include "UndoAction.h"
#include <XournalType.h>

class Redrawable;
class Element;
class Layer;

class DeleteUndoAction : public UndoAction
{
public:
	DeleteUndoAction(PageRef page, bool eraser);
	virtual ~DeleteUndoAction();

public:
	virtual bool undo(Control* control);
	virtual bool redo(Control* control);

	void addElement(Layer* layer, Element* e, int pos);

	virtual string getText();

private:
	XOJ_TYPE_ATTRIB;

	GList* elements;
	bool eraser;
};

#endif /* __DELETEUNDOACTION_H__ */
