#!/usr/bin/python
import lldb

def reverse(debugger, command, result, internal_dict) :
	print 'FT_'+str(debugger.GetSelectedTarget())[::-1]

def __lldb_init_module(debugger, internal_dict) :
    debugger.HandleCommand('command script add -f reverse.reverse reverse')
