/*
 * Xournal++
 *
 * Undo action for insert (write text, draw stroke...)
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */

#ifndef __INSERTUNDOACTION_H__
#define __INSERTUNDOACTION_H__

#include "UndoAction.h"

class Layer;
class Element;
class Redrawable;

class InsertUndoAction : public UndoAction
{
public:
	InsertUndoAction(PageRef page, Layer* layer, Element* element);
	virtual ~InsertUndoAction();

public:
	virtual bool undo(Control* control);
	virtual bool redo(Control* control);

	virtual string getText();

private:
	XOJ_TYPE_ATTRIB;

	Layer* layer;
	Element* element;
};

class InsertsUndoAction : public UndoAction
{
public:
	InsertsUndoAction(PageRef page, Layer* layer, GList* elements);
	virtual ~InsertsUndoAction();

public:
	virtual bool undo(Control* control);
	virtual bool redo(Control* control);

	virtual string getText();

private:
	XOJ_TYPE_ATTRIB;

	Layer* layer;
	GList* elements;

};

#endif /* __INSERTUNDOACTION_H__ */
