/*
 *  Copyright (C) 2010  Alexandre Courbot
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GUI_LISTSVIEW_H
#define __GUI_LISTSVIEW_H

#include <QTreeWidget>

class ListTreeItem : public QTreeWidgetItem
{
private:
	int _rowId, _type, _id;
	
public:
	enum { ListType = (QTreeWidgetItem::UserType), EntryType = (QTreeWidgetItem::UserType + 1) };
	/// Creates an entry of list type
	ListTreeItem(int rowId);
	/// Creates an entry of entry type
	ListTreeItem(int rowId, int type, int id);
	int rowId() const { return _rowId; }
	int type() const { return _type; }
	int id() const { return _id; }
	void populate();
};

class ListsView : public QTreeWidget
{
	Q_OBJECT
private:
	
public:
	ListsView(QWidget *parent = 0);
};

#endif
