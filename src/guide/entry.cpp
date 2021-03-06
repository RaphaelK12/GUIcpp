#define N_IMPLEMENTS TEntry
//-------------------------------------------------------------------
//  This code was originally created by Radonlabs for their graphic
//  engine Nebula. All the credits goes to Radonlabs www.radonlabs.de
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//  entry.cpp
//  (C) 2003 R.Predescu
//-------------------------------------------------------------------
#include "guide/entry.h"
#include "guide/debug.h"

//-------------------------------------------------------------------
//  TEntry()
//  21-Dec-2003   rzv   created
//-------------------------------------------------------------------
TEntry::TEntry(void)
{
	TimeCreate = 0;
	TimeAccess = 0;
	TimeWrite = 0;
	Size = 0;
}

//-------------------------------------------------------------------
//  EOF
//-------------------------------------------------------------------
