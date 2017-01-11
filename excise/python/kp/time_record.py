#!/usr/bin/env python
# coding=utf-8
# File Name: time_record.py
# Author:qusijun 
# Mail:wl_lian@yahoo.com
# Created Time: 六 12/ 5 09:44:59 2015
##############################################################
import xlwt
import xlrd
from xlutils.copy import copy

def create_xls(filename):
    wb = xlwt.Workbook()
    ws = wb.add_sheet(gConst['xls']['sheetName'])
    ws.write(0,0,"header")
    ws.write(0,1,"catalognumber")
    wb.save(gConst['xls']['filenName'])


def time_record(time):
    pass
create_xls("test")

